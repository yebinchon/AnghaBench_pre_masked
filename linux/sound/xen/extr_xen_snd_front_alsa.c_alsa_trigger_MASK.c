
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_pcm_stream_info {TYPE_1__* evt_pair; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int req; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xen_snd_front_pcm_stream_info* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct xen_snd_front_pcm_stream_info *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_3;
  break;

 case 131:
  VAR_8 = VAR_2;
  break;

 case 129:
  VAR_8 = VAR_4;
  break;

 case 128:
  VAR_8 = VAR_1;
  break;

 default:
  return -VAR_0;
 }

 return FUNC_1(&VAR_7->evt_pair->req, VAR_8);
}
