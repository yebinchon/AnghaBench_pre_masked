
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int obs_data_t ;
struct TYPE_5__ {void* color_range; void* framerate; void* resolution; void* dv_timing; void* standard; void* pixfmt; void* input; scalar_t__ device_id; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_1, obs_data_t *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_6(VAR_0);

 if (VAR_0->device_id)
  FUNC_1(VAR_0->device_id);

 VAR_0->device_id = FUNC_2(FUNC_4(VAR_2, "device_id"));
 VAR_0->input = FUNC_3(VAR_2, "input");
 VAR_0->pixfmt = FUNC_3(VAR_2, "pixelformat");
 VAR_0->standard = FUNC_3(VAR_2, "standard");
 VAR_0->dv_timing = FUNC_3(VAR_2, "dv_timing");
 VAR_0->resolution = FUNC_3(VAR_2, "resolution");
 VAR_0->framerate = FUNC_3(VAR_2, "framerate");
 VAR_0->color_range = FUNC_3(VAR_2, "color_range");

 FUNC_7(VAR_0, VAR_2);

 FUNC_5(VAR_0);
}
