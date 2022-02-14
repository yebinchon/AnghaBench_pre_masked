
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * volume_register_address; } ;
struct sst_hsw_stream {TYPE_1__ reply; } ;
struct sst_hsw {int dsp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int ,int) ;

int FUNC_1(struct sst_hsw *VAR_1, struct sst_hsw_stream *VAR_2,
 u32 VAR_3, u32 VAR_4, u32 *VAR_5)
{
 if (VAR_4 > 1)
  return -VAR_0;

 FUNC_0(VAR_1->dsp, VAR_5,
  VAR_2->reply.volume_register_address[VAR_4],
  sizeof(*VAR_5));

 return 0;
}
