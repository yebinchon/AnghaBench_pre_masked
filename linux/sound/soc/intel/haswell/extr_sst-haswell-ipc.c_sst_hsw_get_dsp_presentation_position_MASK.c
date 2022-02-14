
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int presentation_position_register_address; } ;
struct sst_hsw_stream {TYPE_1__ reply; } ;
struct sst_hsw {int dsp; } ;
typedef int ppos ;


 int FUNC_0 (int ,int *,int ,int) ;

u64 FUNC_1(struct sst_hsw *VAR_0,
 struct sst_hsw_stream *VAR_1)
{
 u64 VAR_2;

 FUNC_0(VAR_0->dsp, &VAR_2,
  VAR_1->reply.presentation_position_register_address,
  sizeof(VAR_2));

 return VAR_2;
}
