
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_port {int volume_atten; TYPE_1__* oss_arg; scalar_t__ drum_flags; int port_mode; } ;
struct TYPE_2__ {int event_passing; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct snd_emux_port *VAR_5, int VAR_6)
{
 if (VAR_6) {
  VAR_5->port_mode = VAR_1;
  VAR_5->drum_flags = VAR_0;
  VAR_5->volume_atten = 0;
  VAR_5->oss_arg->event_passing = VAR_4;
 } else {
  VAR_5->port_mode = VAR_2;
  VAR_5->drum_flags = 0;
  VAR_5->volume_atten = 32;
  VAR_5->oss_arg->event_passing = VAR_3;
 }
}
