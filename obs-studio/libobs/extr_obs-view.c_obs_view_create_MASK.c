
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_view {int dummy; } ;
typedef struct obs_view obs_view_t ;


 int FUNC_0 (struct obs_view*) ;
 struct obs_view* FUNC_1 (int) ;
 int FUNC_2 (struct obs_view*) ;

obs_view_t *FUNC_3(void)
{
 struct obs_view *VAR_0 = FUNC_1(sizeof(struct obs_view));

 if (!FUNC_2(VAR_0)) {
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
 }

 return VAR_0;
}
