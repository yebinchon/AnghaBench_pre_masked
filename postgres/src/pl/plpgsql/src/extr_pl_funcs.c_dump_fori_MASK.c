
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int body; scalar_t__ step; scalar_t__ upper; scalar_t__ lower; scalar_t__ reverse; TYPE_1__* var; } ;
struct TYPE_4__ {char* refname; } ;
typedef TYPE_2__ PLpgSQL_stmt_fori ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_stmt_fori *VAR_1)
{
 FUNC_1();
 FUNC_3("FORI %s %s\n", VAR_1->var->refname, (VAR_1->reverse) ? "REVERSE" : "NORMAL");

 VAR_0 += 2;
 FUNC_1();
 FUNC_3("    lower = ");
 FUNC_0(VAR_1->lower);
 FUNC_3("\n");
 FUNC_1();
 FUNC_3("    upper = ");
 FUNC_0(VAR_1->upper);
 FUNC_3("\n");
 if (VAR_1->step)
 {
  FUNC_1();
  FUNC_3("    step = ");
  FUNC_0(VAR_1->step);
  FUNC_3("\n");
 }
 VAR_0 -= 2;

 FUNC_2(VAR_1->body);

 FUNC_1();
 FUNC_3("    ENDFORI\n");
}
