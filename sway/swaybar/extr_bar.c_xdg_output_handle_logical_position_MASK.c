
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zxdg_output_v1 {int dummy; } ;
struct swaybar_output {void* output_y; void* output_x; } ;
typedef void* int32_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
  struct zxdg_output_v1 *VAR_1, int32_t VAR_2, int32_t VAR_3) {
 struct swaybar_output *VAR_4 = VAR_0;
 VAR_4->output_x = VAR_2;
 VAR_4->output_y = VAR_3;
}
