
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {struct snd_line6_midi* private_data; } ;
struct snd_line6_midi {int midibuf_out; int midibuf_in; } ;


 int FUNC_0 (struct snd_line6_midi*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi *VAR_0)
{
 struct snd_line6_midi *VAR_1 = VAR_0->private_data;

 FUNC_1(&VAR_1->midibuf_in);
 FUNC_1(&VAR_1->midibuf_out);
 FUNC_0(VAR_1);
}
