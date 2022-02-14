
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data {int ref; } ;
typedef struct obs_data obs_data_t ;


 struct obs_data* FUNC_0 (int) ;

obs_data_t *FUNC_1()
{
 struct obs_data *VAR_0 = FUNC_0(sizeof(struct obs_data));
 VAR_0->ref = 1;

 return VAR_0;
}
