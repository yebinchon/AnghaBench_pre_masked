
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* funcname; int show_funcname; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

int
FUNC_1(const char *VAR_2)
{
 ErrorData *VAR_3 = &VAR_0[VAR_1];


 FUNC_0();

 VAR_3->funcname = VAR_2;
 VAR_3->show_funcname = 1;

 return 0;
}
