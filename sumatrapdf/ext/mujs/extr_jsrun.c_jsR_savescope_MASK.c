
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ envtop; int * E; int ** envstack; } ;
typedef TYPE_1__ js_State ;
typedef int js_Environment ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_1, js_Environment *VAR_2)
{
 if (VAR_1->envtop + 1 >= VAR_0)
  FUNC_0(VAR_1);
 VAR_1->envstack[VAR_1->envtop++] = VAR_1->E;
 VAR_1->E = VAR_2;
}
