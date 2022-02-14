
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t obs_key_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 char const** VAR_2 ;

const char *FUNC_1(obs_key_t VAR_3)
{
 if (VAR_3 >= VAR_1) {
  FUNC_0(VAR_0,
       "obs-hotkey.c: queried unknown key "
       "with code %d",
       (int)VAR_3);
  return "";
 }

 return VAR_2[VAR_3];
}
