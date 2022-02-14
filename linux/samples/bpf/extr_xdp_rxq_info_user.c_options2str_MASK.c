
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cfg_options_flags { ____Placeholder_cfg_options_flags } cfg_options_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static char* FUNC_2(enum cfg_options_flags VAR_5)
{
 if (VAR_5 == VAR_1)
  return "no_touch";
 if (VAR_5 & VAR_3)
  return "swapmac";
 if (VAR_5 & VAR_2)
  return "read";
 FUNC_1(VAR_4, "ERR: Unknown config option flags");
 FUNC_0(VAR_0);
}
