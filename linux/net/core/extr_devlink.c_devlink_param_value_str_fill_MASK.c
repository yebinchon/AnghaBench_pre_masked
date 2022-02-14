
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vstr; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ,char const*,size_t) ;

void FUNC_2(union devlink_param_value *VAR_1,
      const char *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_1(VAR_1->vstr, VAR_2, VAR_0);
 FUNC_0(VAR_3 >= VAR_0);
}
