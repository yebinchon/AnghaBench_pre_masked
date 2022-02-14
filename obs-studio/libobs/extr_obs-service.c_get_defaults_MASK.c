
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_service_info {int (* get_defaults ) (int *) ;} ;
typedef int obs_data_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline obs_data_t *FUNC_2(const struct obs_service_info *VAR_0)
{
 obs_data_t *VAR_1 = FUNC_0();
 if (VAR_0->get_defaults)
  VAR_0->get_defaults(VAR_1);
 return VAR_1;
}
