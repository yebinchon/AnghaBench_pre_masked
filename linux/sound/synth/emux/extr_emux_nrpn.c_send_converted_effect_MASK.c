
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int dummy; } ;
struct snd_emux_port {int dummy; } ;
struct nrpn_conv_table {int control; int (* convert ) (int) ;int effect; } ;


 int FUNC_0 (struct snd_emux_port*,struct snd_midi_channel*,int ,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct nrpn_conv_table *VAR_0,
     int VAR_1,
     struct snd_emux_port *VAR_2,
     struct snd_midi_channel *VAR_3,
     int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_0[VAR_7].control == VAR_4) {
   VAR_8 = VAR_0[VAR_7].convert(VAR_5);
   FUNC_0(VAR_2, VAR_3, VAR_0[VAR_7].effect,
          VAR_8, VAR_6);
   return 1;
  }
 }
 return 0;
}
