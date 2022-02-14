
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int card; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_ice1712*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->card,
    FUNC_2(&VAR_0[VAR_2], VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
