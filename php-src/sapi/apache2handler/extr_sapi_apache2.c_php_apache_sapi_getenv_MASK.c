
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* r; } ;
typedef TYPE_2__ php_struct ;
struct TYPE_4__ {int subprocess_env; } ;


 TYPE_2__* FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1, size_t VAR_2)
{
 php_struct *VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4;

 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_3->r->subprocess_env, VAR_1);

 return (char *) VAR_4;
}
