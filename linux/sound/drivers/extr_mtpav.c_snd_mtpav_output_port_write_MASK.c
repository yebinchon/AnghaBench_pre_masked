
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct mtpav_port {int hwport; int running_status; } ;
struct mtpav {int outmidihwport; } ;


 int FUNC_0 (struct mtpav*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_2(struct mtpav *VAR_0,
     struct mtpav_port *VAR_1,
     struct snd_rawmidi_substream *VAR_2)
{
 u8 VAR_3;



 if (FUNC_1(VAR_2, &VAR_3, 1) != 1)
  return;



 if (VAR_1->hwport != VAR_0->outmidihwport) {
  VAR_0->outmidihwport = VAR_1->hwport;

  FUNC_0(VAR_0, 0xf5);
  FUNC_0(VAR_0, VAR_1->hwport);




  if (!(VAR_3 & 0x80) && VAR_1->running_status)
   FUNC_0(VAR_0, VAR_1->running_status);
 }



 do {
  if (VAR_3 & 0x80)
   VAR_1->running_status = VAR_3;

  FUNC_0(VAR_0, VAR_3);
 } while (FUNC_1(VAR_2, &VAR_3, 1) == 1);
}
