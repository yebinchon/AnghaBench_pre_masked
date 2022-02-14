
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int card; } ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_ice1712*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_1(VAR_2->card,
     FUNC_2(&VAR_0[VAR_3],
       VAR_2));
  if (VAR_5 < 0)
   return VAR_5;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_5 = FUNC_1(VAR_2->card,
     FUNC_2(&VAR_1[VAR_3], VAR_2));
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
