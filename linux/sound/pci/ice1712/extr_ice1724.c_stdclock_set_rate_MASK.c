
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4] == VAR_3) {
   FUNC_2(VAR_4, FUNC_1(VAR_2, VAR_0));
   return;
  }
 }
}
