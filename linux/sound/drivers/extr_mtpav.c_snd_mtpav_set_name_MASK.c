
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int number; int name; } ;
struct mtpav {int num_ports; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct mtpav *VAR_0,
          struct snd_rawmidi_substream *VAR_1)
{
 if (VAR_1->number >= 0 && VAR_1->number < VAR_0->num_ports)
  FUNC_0(VAR_1->name, "MTP direct %d", (VAR_1->number % VAR_0->num_ports) + 1);
 else if (VAR_1->number >= 8 && VAR_1->number < VAR_0->num_ports * 2)
  FUNC_0(VAR_1->name, "MTP remote %d", (VAR_1->number % VAR_0->num_ports) + 1);
 else if (VAR_1->number == VAR_0->num_ports * 2)
  FUNC_1(VAR_1->name, "MTP computer");
 else if (VAR_1->number == VAR_0->num_ports * 2 + 1)
  FUNC_1(VAR_1->name, "MTP ADAT");
 else
  FUNC_1(VAR_1->name, "MTP broadcast");
}
