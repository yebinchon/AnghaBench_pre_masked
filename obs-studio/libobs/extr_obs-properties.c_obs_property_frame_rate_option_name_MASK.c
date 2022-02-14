
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct frame_rate_data {TYPE_2__ extra_options; } ;
typedef int obs_property_t ;
struct TYPE_3__ {char const* name; } ;


 int VAR_0 ;
 struct frame_rate_data* FUNC_0 (int *,int ) ;

const char *FUNC_1(obs_property_t *VAR_1, size_t VAR_2)
{
 struct frame_rate_data *VAR_3 =
  FUNC_0(VAR_1, VAR_0);
 return VAR_3 && VAR_3->extra_options.num > VAR_2
         ? VAR_3->extra_options.array[VAR_2].name
         : ((void*)0);
}
