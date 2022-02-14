
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint16 ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_14__ {int atttypmod; scalar_t__ atttypid; int attname; scalar_t__ attnum; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {int natts; } ;
struct TYPE_11__ {scalar_t__ relreplident; } ;
typedef int StringInfo ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Bitmapset ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_4, Relation VAR_5)
{
 TupleDesc VAR_6;
 int VAR_7;
 uint16 VAR_8 = 0;
 Bitmapset *VAR_9 = ((void*)0);
 bool VAR_10;

 VAR_6 = FUNC_1(VAR_5);


 for (VAR_7 = 0; VAR_7 < VAR_6->natts; VAR_7++)
 {
  if (FUNC_3(VAR_6, VAR_7)->attisdropped || FUNC_3(VAR_6, VAR_7)->attgenerated)
   continue;
  VAR_8++;
 }
 FUNC_7(VAR_4, VAR_8);


 VAR_10 = (VAR_5->rd_rel->relreplident == VAR_3);
 if (!VAR_10)
  VAR_9 = FUNC_2(VAR_5,
            VAR_1);


 for (VAR_7 = 0; VAR_7 < VAR_6->natts; VAR_7++)
 {
  Form_pg_attribute VAR_11 = FUNC_3(VAR_6, VAR_7);
  uint8 VAR_12 = 0;

  if (VAR_11->attisdropped || VAR_11->attgenerated)
   continue;


  if (VAR_10 ||
   FUNC_5(VAR_11->attnum - VAR_0,
        VAR_9))
   VAR_12 |= VAR_2;

  FUNC_6(VAR_4, VAR_12);


  FUNC_9(VAR_4, FUNC_0(VAR_11->attname));


  FUNC_8(VAR_4, (int) VAR_11->atttypid);


  FUNC_8(VAR_4, VAR_11->atttypmod);
 }

 FUNC_4(VAR_9);
}
