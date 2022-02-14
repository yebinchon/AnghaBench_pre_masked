
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_info {int (* get_defaults ) (int *) ;int type_data; int (* get_defaults2 ) (int ,int *) ;} ;
typedef int obs_data_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline obs_data_t *FUNC_3(const struct obs_source_info *VAR_0)
{
 obs_data_t *VAR_1 = FUNC_0();
 if (VAR_0->get_defaults2)
  VAR_0->get_defaults2(VAR_0->type_data, VAR_1);
 else if (VAR_0->get_defaults)
  VAR_0->get_defaults(VAR_1);
 return VAR_1;
}
