
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi_dev {TYPE_1__* card; int flags; } ;
struct snd_seq_port_subscribe {int dummy; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1,
        struct snd_seq_port_subscribe *VAR_2)
{
 struct snd_virmidi_dev *VAR_3;

 VAR_3 = VAR_1;
 VAR_3->flags &= ~VAR_0;
 FUNC_0(VAR_3->card->module);
 return 0;
}
