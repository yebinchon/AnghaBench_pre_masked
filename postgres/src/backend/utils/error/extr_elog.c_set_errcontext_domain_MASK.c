
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* context_domain; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 char const* FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

int
FUNC_2(const char *VAR_2)
{
 ErrorData *VAR_3 = &VAR_0[VAR_1];


 FUNC_0();


 VAR_3->context_domain = VAR_2 ? VAR_2 : FUNC_1("postgres");

 return 0;
}
