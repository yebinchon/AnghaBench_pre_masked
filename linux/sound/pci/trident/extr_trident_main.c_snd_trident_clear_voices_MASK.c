
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_trident * VAR_4, unsigned short VAR_5, unsigned short VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9[2] = { 0, 0 };

 if (FUNC_3(VAR_5 > 63 || VAR_6 > 63))
  return;
 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++)
  VAR_9[VAR_7 >> 5] |= 1 << (VAR_7 & 0x1f);
 if (VAR_9[0]) {
  FUNC_2(VAR_9[0], FUNC_0(VAR_4, VAR_2));
  VAR_8 = FUNC_1(FUNC_0(VAR_4, VAR_0));
  FUNC_2(VAR_8 & ~VAR_9[0], FUNC_0(VAR_4, VAR_0));
 }
 if (VAR_9[1]) {
  FUNC_2(VAR_9[1], FUNC_0(VAR_4, VAR_3));
  VAR_8 = FUNC_1(FUNC_0(VAR_4, VAR_1));
  FUNC_2(VAR_8 & ~VAR_9[1], FUNC_0(VAR_4, VAR_1));
 }
}
