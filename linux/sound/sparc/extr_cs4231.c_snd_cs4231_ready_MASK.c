
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int dummy; } ;


 int FUNC_0 (struct snd_cs4231*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_cs4231*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_cs4231 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 250; VAR_3 > 0; VAR_3--) {
  int VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_1));
  if ((VAR_4 & VAR_0) == 0)
   break;
  FUNC_2(100);
 }
}
