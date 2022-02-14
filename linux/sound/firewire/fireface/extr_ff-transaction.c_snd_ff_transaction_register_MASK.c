
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ff {int * rx_midi_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct snd_ff*,int) ;
 int FUNC_2 (struct snd_ff*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct snd_ff *VAR_4)
{
 int VAR_5, VAR_6;





 for (VAR_5 = 0; VAR_5 < 0xffff; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6 != -VAR_1 && VAR_6 != -VAR_0)
   break;
 }
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(&VAR_4->rx_midi_work[0], VAR_2);
 FUNC_0(&VAR_4->rx_midi_work[1], VAR_3);

 return 0;
}
