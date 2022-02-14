
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t envtop; int * envstack; int E; } ;
typedef TYPE_1__ js_State ;



__attribute__((used)) static void FUNC_0(js_State *VAR_0)
{
 VAR_0->E = VAR_0->envstack[--VAR_0->envtop];
}
