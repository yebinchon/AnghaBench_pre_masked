
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_service_info {int dummy; } ;
typedef int obs_data_t ;


 struct obs_service_info* FUNC_0 (char const*) ;
 int * FUNC_1 (struct obs_service_info const*) ;

obs_data_t *FUNC_2(const char *VAR_0)
{
 const struct obs_service_info *VAR_1 = FUNC_0(VAR_0);
 return (VAR_1) ? FUNC_1(VAR_1) : ((void*)0);
}
