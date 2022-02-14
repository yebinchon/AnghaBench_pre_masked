
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {scalar_t__ ac97; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_0)
{
 if (VAR_0->ac97)


  FUNC_1(VAR_0->ac97, 0x5a,
   FUNC_0(VAR_0->ac97, 0x5a) & ~0x8000);
 return 0;
}
