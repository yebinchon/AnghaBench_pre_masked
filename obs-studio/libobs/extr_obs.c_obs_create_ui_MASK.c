
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_modeless_ui {void* (* create ) (void*,void*) ;} ;


 struct obs_modeless_ui* FUNC_0 (char const*,char const*,char const*) ;
 int VAR_0 ;
 void* FUNC_1 (void*,void*) ;

void *FUNC_2(const char *VAR_1, const char *VAR_2, const char *VAR_3,
      void *VAR_4, void *VAR_5)
{
 struct obs_modeless_ui *VAR_6;

 if (!VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_6 ? VAR_6->create(VAR_4, VAR_5) : ((void*)0);
}
