
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct fw_scs1x {int output_idle; int idle_wait; } ;
struct TYPE_2__ {struct fw_scs1x* private_data; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct fw_scs1x *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_0(VAR_1->idle_wait, VAR_1->output_idle);
}
