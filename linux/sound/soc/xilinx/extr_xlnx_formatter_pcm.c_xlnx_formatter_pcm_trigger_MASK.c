
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xlnx_pcm_stream_param {scalar_t__ mmio; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct xlnx_pcm_stream_param* private_data; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
          int VAR_3)
{
 u32 VAR_4;
 struct xlnx_pcm_stream_param *VAR_5 =
   VAR_2->runtime->private_data;

 switch (VAR_3) {
 case 130:
 case 132:
 case 131:
  VAR_4 = FUNC_0(VAR_5->mmio + VAR_1);
  VAR_4 |= VAR_0;
  FUNC_1(VAR_4, VAR_5->mmio + VAR_1);
  break;
 case 129:
 case 133:
 case 128:
  VAR_4 = FUNC_0(VAR_5->mmio + VAR_1);
  VAR_4 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_5->mmio + VAR_1);
  break;
 }

 return 0;
}
