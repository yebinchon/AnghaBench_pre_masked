
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_hotkey_id ;
typedef int obs_hotkey_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,char const*,char const*,int ,void*) ;
 int FUNC_2 () ;

obs_hotkey_id FUNC_3(const char *VAR_2,
        const char *VAR_3,
        obs_hotkey_func VAR_4, void *VAR_5)
{
 if (!FUNC_0())
  return VAR_1;

 obs_hotkey_id VAR_6 = FUNC_1(
  VAR_0, ((void*)0), ((void*)0), VAR_2, VAR_3,
  VAR_4, VAR_5);

 FUNC_2();
 return VAR_6;
}
