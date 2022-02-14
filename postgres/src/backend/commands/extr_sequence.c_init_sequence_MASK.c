
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_10__ {scalar_t__ filenode; int last_valid; scalar_t__ last; scalar_t__ cached; int lxid; } ;
struct TYPE_9__ {scalar_t__ relkind; scalar_t__ relfilenode; } ;
typedef TYPE_2__* SeqTable ;
typedef TYPE_3__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_7(Oid VAR_7, SeqTable *VAR_8, Relation *VAR_9)
{
 SeqTable VAR_10;
 Relation VAR_11;
 bool VAR_12;


 if (VAR_6 == ((void*)0))
  FUNC_1();

 VAR_10 = (SeqTable) FUNC_5(VAR_6, &VAR_7, VAR_2, &VAR_12);
 if (!VAR_12)
 {

  VAR_10->filenode = VAR_4;
  VAR_10->lxid = VAR_3;
  VAR_10->last_valid = 0;
  VAR_10->last = VAR_10->cached = 0;
 }




 VAR_11 = FUNC_6(VAR_10);

 if (VAR_11->rd_rel->relkind != VAR_5)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("\"%s\" is not a sequence",
      FUNC_0(VAR_11))));






 if (VAR_11->rd_rel->relfilenode != VAR_10->filenode)
 {
  VAR_10->filenode = VAR_11->rd_rel->relfilenode;
  VAR_10->cached = VAR_10->last;
 }


 *VAR_8 = VAR_10;
 *VAR_9 = VAR_11;
}
