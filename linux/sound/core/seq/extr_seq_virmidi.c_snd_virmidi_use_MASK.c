
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi_dev {int flags; TYPE_1__* card; } ;
struct snd_seq_port_subscribe {int dummy; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2,
      struct snd_seq_port_subscribe *VAR_3)
{
 struct snd_virmidi_dev *VAR_4;

 VAR_4 = VAR_2;
 if (!FUNC_0(VAR_4->card->module))
  return -VAR_0;
 VAR_4->flags |= VAR_1;
 return 0;
}
