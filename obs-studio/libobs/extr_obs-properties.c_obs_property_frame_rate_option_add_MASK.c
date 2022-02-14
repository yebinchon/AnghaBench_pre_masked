
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_rate_option {void* description; void* name; } ;
struct TYPE_2__ {size_t num; } ;
struct frame_rate_data {TYPE_1__ extra_options; } ;
typedef int obs_property_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char const*) ;
 struct frame_rate_option* FUNC_1 (TYPE_1__) ;
 struct frame_rate_data* FUNC_2 (int *,int ) ;

size_t FUNC_3(obs_property_t *VAR_2, const char *VAR_3,
       const char *VAR_4)
{
 struct frame_rate_data *VAR_5 =
  FUNC_2(VAR_2, VAR_1);
 if (!VAR_5)
  return VAR_0;

 struct frame_rate_option *VAR_6 = FUNC_1(VAR_5->extra_options);

 VAR_6->name = FUNC_0(VAR_3);
 VAR_6->description = FUNC_0(VAR_4);

 return VAR_5->extra_options.num - 1;
}
