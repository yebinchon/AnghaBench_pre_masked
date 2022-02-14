
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; int card; } ;







 int FUNC_0 (int ,char*,struct hdspm*,void (*) (struct snd_info_entry*,struct snd_info_buffer*)) ;
 void FUNC_1 (struct snd_info_entry*,struct snd_info_buffer*) ;
 void FUNC_2 (struct snd_info_entry*,struct snd_info_buffer*) ;
 void FUNC_3 (struct snd_info_entry*,struct snd_info_buffer*) ;
 void FUNC_4 (struct snd_info_entry*,struct snd_info_buffer*) ;
 void FUNC_5 (struct snd_info_entry*,struct snd_info_buffer*) ;
 void FUNC_6 (struct snd_info_entry*,struct snd_info_buffer*) ;

__attribute__((used)) static void FUNC_7(struct hdspm *VAR_0)
{
 void (*VAR_1)(struct snd_info_entry *, struct snd_info_buffer *) = ((void*)0);

 switch (VAR_0->io_type) {
 case 132:
  VAR_1 = FUNC_3;
  break;
 case 130:
  VAR_1 = FUNC_5;
  break;
 case 129:

  break;
 case 128:
  VAR_1 = FUNC_6;
  break;
 case 131:
  break;
 }

 FUNC_0(VAR_0->card, "hdspm", VAR_0, VAR_1);
 FUNC_0(VAR_0->card, "ports.in", VAR_0,
        FUNC_1);
 FUNC_0(VAR_0->card, "ports.out", VAR_0,
        FUNC_2);






}
