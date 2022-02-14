
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t num; int * array; } ;
struct vt_h264_encoder {TYPE_1__ extra_data; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 struct vt_h264_encoder *VAR_3 = (struct vt_h264_encoder *)VAR_0;
 *VAR_1 = VAR_3->extra_data.array;
 *VAR_2 = VAR_3->extra_data.num;
 return 1;
}
