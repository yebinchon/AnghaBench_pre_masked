
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {size_t size; void* offset; } ;
struct TYPE_3__ {size_t size; void* offset; } ;
struct snd_sof_dev {TYPE_2__ host_box; TYPE_1__ dsp_box; } ;



int FUNC_0(struct snd_sof_dev *VAR_0, u32 VAR_1,
        size_t VAR_2, u32 VAR_3,
        size_t VAR_4)
{
 VAR_0->dsp_box.offset = VAR_1;
 VAR_0->dsp_box.size = VAR_2;
 VAR_0->host_box.offset = VAR_3;
 VAR_0->host_box.size = VAR_4;
 return 0;
}
