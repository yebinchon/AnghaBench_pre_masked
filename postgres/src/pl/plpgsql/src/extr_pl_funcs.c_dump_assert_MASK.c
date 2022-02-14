
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * message; int * cond; } ;
typedef TYPE_1__ PLpgSQL_stmt_assert ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_assert *VAR_1)
{
 FUNC_1();
 FUNC_2("ASSERT ");
 FUNC_0(VAR_1->cond);
 FUNC_2("\n");

 VAR_0 += 2;
 if (VAR_1->message != ((void*)0))
 {
  FUNC_1();
  FUNC_2("    MESSAGE = ");
  FUNC_0(VAR_1->message);
  FUNC_2("\n");
 }
 VAR_0 -= 2;
}
