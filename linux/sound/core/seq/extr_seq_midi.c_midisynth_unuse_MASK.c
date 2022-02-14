
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct TYPE_2__ {int output; } ;
struct seq_midisynth {TYPE_1__ output_rfile; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct snd_seq_port_subscribe *VAR_2)
{
 struct seq_midisynth *VAR_3 = VAR_1;

 if (FUNC_0(!VAR_3->output_rfile.output))
  return -VAR_0;
 FUNC_1(VAR_3->output_rfile.output);
 return FUNC_2(&VAR_3->output_rfile);
}
