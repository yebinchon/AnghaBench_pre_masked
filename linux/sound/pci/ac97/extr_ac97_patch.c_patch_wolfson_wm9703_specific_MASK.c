
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_2)
{




 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if ((VAR_3 = FUNC_3(VAR_2->bus->card, FUNC_1(&VAR_1[VAR_4], VAR_2))) < 0)
   return VAR_3;
 }
 FUNC_2(VAR_2, VAR_0, 0x0808);
 return 0;
}
