
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_rate_option {void* description; void* name; } ;
struct frame_rate_data {int extra_options; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 struct frame_rate_option* FUNC_1 (int ,size_t) ;
 struct frame_rate_data* FUNC_2 (int *,int ) ;

void FUNC_3(obs_property_t *VAR_1, size_t VAR_2,
        const char *VAR_3,
        const char *VAR_4)
{
 struct frame_rate_data *VAR_5 =
  FUNC_2(VAR_1, VAR_0);
 if (!VAR_5)
  return;

 struct frame_rate_option *VAR_6 = FUNC_1(VAR_5->extra_options, VAR_2);

 VAR_6->name = FUNC_0(VAR_3);
 VAR_6->description = FUNC_0(VAR_4);
}
