
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pstate; int partbound; TYPE_2__* rel; } ;
struct TYPE_12__ {int * bound; } ;
struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_10__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ PartitionCmd ;
typedef TYPE_4__ CreateStmtContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_8(CreateStmtContext *VAR_2, PartitionCmd *VAR_3)
{
 Relation VAR_4 = VAR_2->rel;

 switch (VAR_4->rd_rel->relkind)
 {
  case 129:

   FUNC_0(FUNC_1(VAR_4) != ((void*)0));
   if (VAR_3->bound != ((void*)0))
    VAR_2->partbound = FUNC_7(VAR_2->pstate, VAR_4,
               VAR_3->bound);
   break;
  case 130:

   FUNC_0(VAR_3->bound == ((void*)0));
   break;
  case 128:

   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("table \"%s\" is not partitioned",
       FUNC_2(VAR_4))));
   break;
  case 131:

   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("index \"%s\" is not partitioned",
       FUNC_2(VAR_4))));
   break;
  default:

   FUNC_3(VAR_1, "\"%s\" is not a partitioned table or index",
     FUNC_2(VAR_4));
   break;
 }
}
