
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * strings; } ;
typedef TYPE_1__ js_State ;


 int * FUNC_0 (TYPE_1__*,int *,char const*,char const**) ;
 int VAR_0 ;

const char *FUNC_1(js_State *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 if (!VAR_1->strings)
  VAR_1->strings = &VAR_0;
 VAR_1->strings = FUNC_0(VAR_1, VAR_1->strings, VAR_2, &VAR_3);
 return VAR_3;
}
