
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_common {scalar_t__* service; } ;
typedef int obs_data_t ;
typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,scalar_t__*) ;
 int * FUNC_3 (int *,scalar_t__*,int *) ;
 int * FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(struct rtmp_common *VAR_1, json_t *VAR_2,
         obs_data_t *VAR_3,
         obs_data_t *VAR_4)
{
 json_t *VAR_5 = FUNC_3(VAR_2, VAR_1->service, ((void*)0));
 json_t *VAR_6;

 if (!VAR_5) {
  if (VAR_1->service && *VAR_1->service)
   FUNC_2(VAR_0,
        "rtmp-common.c: [initialize_output] "
        "Could not find service '%s'",
        VAR_1->service);
  return;
 }

 VAR_6 = FUNC_4(VAR_5, "recommended");
 if (!VAR_6)
  return;

 if (VAR_3)
  FUNC_1(VAR_3, VAR_6);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_6);
}
