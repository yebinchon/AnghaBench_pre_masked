
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us122l {int card_index; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 struct us122l* FUNC_0 (struct snd_card*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_2)
{
 struct us122l *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_3->card_index;
 if (VAR_4 >= 0 && VAR_4 < VAR_0)
  VAR_1[VAR_4] = 0;
}
