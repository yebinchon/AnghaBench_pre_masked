
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int removeType; int concurrent; } ;
typedef TYPE_1__ DropStmt ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(DropStmt *VAR_0, bool VAR_1)
{
 switch (VAR_0->removeType)
 {
  case 132:
   if (VAR_0->concurrent)
    FUNC_0(VAR_1,
            "DROP INDEX CONCURRENTLY");


  case 129:
  case 130:
  case 128:
  case 131:
  case 133:
   FUNC_2(VAR_0);
   break;
  default:
   FUNC_1(VAR_0);
   break;
 }
}
