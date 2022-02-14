
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* report ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*,char const*) ;

void FUNC_1(js_State *VAR_0, const char *VAR_1)
{
 if (VAR_0->report)
  VAR_0->report(VAR_0, VAR_1);
}
