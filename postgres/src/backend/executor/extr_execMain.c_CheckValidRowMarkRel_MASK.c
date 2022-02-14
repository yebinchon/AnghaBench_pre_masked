
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * RefetchForeignRow; } ;
struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int relkind; } ;
typedef int RowMarkType ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ FdwRoutine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;







 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(Relation VAR_4, RowMarkType VAR_5)
{
 FdwRoutine *VAR_6;

 switch (VAR_4->rd_rel->relkind)
 {
  case 131:
  case 132:

   break;
  case 130:

   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("cannot lock rows in sequence \"%s\"",
       FUNC_1(VAR_4))));
   break;
  case 129:

   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("cannot lock rows in TOAST relation \"%s\"",
       FUNC_1(VAR_4))));
   break;
  case 128:

   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("cannot lock rows in view \"%s\"",
       FUNC_1(VAR_4))));
   break;
  case 133:

   if (VAR_5 != VAR_3)
    FUNC_2(VAR_2,
      (FUNC_3(VAR_1),
       FUNC_4("cannot lock rows in materialized view \"%s\"",
        FUNC_1(VAR_4))));
   break;
  case 134:

   VAR_6 = FUNC_0(VAR_4, 0);
   if (VAR_6->RefetchForeignRow == ((void*)0))
    FUNC_2(VAR_2,
      (FUNC_3(VAR_0),
       FUNC_4("cannot lock rows in foreign table \"%s\"",
        FUNC_1(VAR_4))));
   break;
  default:
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("cannot lock rows in relation \"%s\"",
       FUNC_1(VAR_4))));
   break;
 }
}
