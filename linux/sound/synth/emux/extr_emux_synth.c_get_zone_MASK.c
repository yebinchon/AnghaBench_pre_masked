
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_zone {int dummy; } ;
struct snd_midi_channel {int midi_program; } ;
struct snd_emux_port {int* ctrls; } ;
struct snd_emux {int sflist; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_emux_port*,struct snd_midi_channel*) ;
 int FUNC_2 (int ,int*,int,int,int,int,int,struct snd_sf_zone**,int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_emux *VAR_3, struct snd_emux_port *VAR_4,
  int *VAR_5, int VAR_6, struct snd_midi_channel *VAR_7,
  struct snd_sf_zone **VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_4, VAR_7);
 VAR_9 = VAR_7->midi_program;

 if (FUNC_0(VAR_10)) {
  VAR_11 = VAR_4->ctrls[VAR_1];
  VAR_12 = VAR_10;
 } else {
  VAR_11 = VAR_9;
  VAR_12 = VAR_4->ctrls[VAR_0];
 }

 return FUNC_2(VAR_3->sflist, VAR_5, VAR_6, VAR_9, VAR_10,
      VAR_11, VAR_12,
      VAR_8, VAR_2);
}
