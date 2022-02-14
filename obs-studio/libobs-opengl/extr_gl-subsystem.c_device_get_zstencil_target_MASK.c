
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_zstencil_t ;
struct TYPE_3__ {int * cur_zstencil_buffer; } ;
typedef TYPE_1__ gs_device_t ;



gs_zstencil_t *FUNC_0(const gs_device_t *VAR_0)
{
 return VAR_0->cur_zstencil_buffer;
}
