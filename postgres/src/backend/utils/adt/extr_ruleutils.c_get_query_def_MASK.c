
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int deparse_namespace ;
struct TYPE_16__ {int varprefix; int prettyFlags; int wrapColumn; int indentLevel; int special_exprkind; int * windowTList; int * windowClause; int namespaces; int buf; } ;
typedef TYPE_1__ deparse_context ;
typedef int TupleDesc ;
struct TYPE_17__ {int commandType; int rtable; } ;
typedef int StringInfo ;
typedef TYPE_2__ Query ;
typedef int List ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 () ;






 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_14(Query *VAR_3, StringInfo VAR_4, List *VAR_5,
     TupleDesc VAR_6,
     int VAR_7, int VAR_8, int VAR_9)
{
 deparse_context VAR_10;
 deparse_namespace VAR_11;


 FUNC_1();
 FUNC_3();
 FUNC_0(VAR_3, 0, 0);

 VAR_10.buf = VAR_4;
 VAR_10.namespaces = FUNC_10(&VAR_11, FUNC_11(VAR_5));
 VAR_10.windowClause = VAR_2;
 VAR_10.windowTList = VAR_2;
 VAR_10.varprefix = (VAR_5 != VAR_2 ||
       FUNC_12(VAR_3->rtable) != 1);
 VAR_10.prettyFlags = VAR_7;
 VAR_10.wrapColumn = VAR_8;
 VAR_10.indentLevel = VAR_9;
 VAR_10.special_exprkind = VAR_1;

 FUNC_13(&VAR_11, VAR_3, VAR_5);

 switch (VAR_3->commandType)
 {
  case 130:
   FUNC_7(VAR_3, &VAR_10, VAR_6);
   break;

  case 129:
   FUNC_8(VAR_3, &VAR_10);
   break;

  case 132:
   FUNC_6(VAR_3, &VAR_10);
   break;

  case 133:
   FUNC_5(VAR_3, &VAR_10);
   break;

  case 131:
   FUNC_2(VAR_4, "NOTHING");
   break;

  case 128:
   FUNC_9(VAR_3, &VAR_10);
   break;

  default:
   FUNC_4(VAR_0, "unrecognized query command type: %d",
     VAR_3->commandType);
   break;
 }
}
