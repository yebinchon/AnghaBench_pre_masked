
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcm_wd_sz; } ;
struct TYPE_4__ {TYPE_1__ pcm_params; } ;
struct sst_byt_stream {TYPE_2__ request; } ;
struct sst_byt {int dummy; } ;



int FUNC_0(struct sst_byt *VAR_0, struct sst_byt_stream *VAR_1,
       int VAR_2)
{
 VAR_1->request.pcm_params.pcm_wd_sz = VAR_2;
 return 0;
}
