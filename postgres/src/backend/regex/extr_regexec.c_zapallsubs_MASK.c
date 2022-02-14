
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;



__attribute__((used)) static void
FUNC_0(regmatch_t *VAR_0,
     size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = VAR_1 - 1; VAR_2 > 0; VAR_2--)
 {
  VAR_0[VAR_2].rm_so = -1;
  VAR_0[VAR_2].rm_eo = -1;
 }
}
