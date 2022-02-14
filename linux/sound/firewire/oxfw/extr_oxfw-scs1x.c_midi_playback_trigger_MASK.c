
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct fw_scs1x {int output_bytes; int output_escaped; int output_idle; int error; int output; int work; scalar_t__ transaction_bytes; scalar_t__ output_status; } ;
struct TYPE_2__ {struct fw_scs1x* private_data; } ;


 int FUNC_0 (int ,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct fw_scs1x *VAR_2 = VAR_0->rmidi->private_data;

 if (VAR_1) {
  VAR_2->output_status = 0;
  VAR_2->output_bytes = 1;
  VAR_2->output_escaped = 0;
  VAR_2->output_idle = 0;
  VAR_2->transaction_bytes = 0;
  VAR_2->error = 0;

  FUNC_0(VAR_2->output, VAR_0);
  FUNC_1(&VAR_2->work);
 } else {
  FUNC_0(VAR_2->output, ((void*)0));
 }
}
