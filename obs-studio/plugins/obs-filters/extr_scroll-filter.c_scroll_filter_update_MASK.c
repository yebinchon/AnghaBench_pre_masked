
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {float x; float y; } ;
struct TYPE_3__ {float x; float y; } ;
struct scroll_filter_data {TYPE_2__ offset; TYPE_1__ scroll_speed; int sampler; void* loop; void* cy; void* cx; void* limit_cy; void* limit_cx; } ;
struct gs_sampler_info {int address_v; int address_u; int filter; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gs_sampler_info*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_3, obs_data_t *VAR_4)
{
 struct scroll_filter_data *VAR_5 = VAR_3;

 VAR_5->limit_cx = FUNC_2(VAR_4, "limit_cx");
 VAR_5->limit_cy = FUNC_2(VAR_4, "limit_cy");
 VAR_5->cx = (uint32_t)FUNC_4(VAR_4, "cx");
 VAR_5->cy = (uint32_t)FUNC_4(VAR_4, "cy");

 VAR_5->scroll_speed.x =
  (float)FUNC_3(VAR_4, "speed_x");
 VAR_5->scroll_speed.y =
  (float)FUNC_3(VAR_4, "speed_y");

 VAR_5->loop = FUNC_2(VAR_4, "loop");

 struct gs_sampler_info VAR_6 = {
  .filter = VAR_2,
  .address_u = VAR_5->loop ? VAR_1 : VAR_0,
  .address_v = VAR_5->loop ? VAR_1 : VAR_0,
 };

 FUNC_5();
 FUNC_1(VAR_5->sampler);
 VAR_5->sampler = FUNC_0(&VAR_6);
 FUNC_6();

 if (VAR_5->scroll_speed.x == 0.0f)
  VAR_5->offset.x = 0.0f;
 if (VAR_5->scroll_speed.y == 0.0f)
  VAR_5->offset.y = 0.0f;
}
