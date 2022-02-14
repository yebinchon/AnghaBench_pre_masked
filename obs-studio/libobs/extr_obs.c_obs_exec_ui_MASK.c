
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_modal_ui {int (* exec ) (void*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct obs_modal_ui* FUNC_0 (char const*,char const*,char const*) ;
 int VAR_3 ;
 int FUNC_1 (void*,void*) ;

int FUNC_2(const char *VAR_4, const char *VAR_5, const char *VAR_6,
  void *VAR_7, void *VAR_8)
{
 struct obs_modal_ui *VAR_9;
 int VAR_10 = VAR_1;

 if (!VAR_3)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_9) {
  bool VAR_11 = VAR_9->exec(VAR_7, VAR_8);
  VAR_10 = VAR_11 ? VAR_2 : VAR_0;
 }

 return VAR_10;
}
