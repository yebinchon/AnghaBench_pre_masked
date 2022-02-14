
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_1, u8 VAR_2, int VAR_3)
{
 u8 VAR_4 = FUNC_1(FUNC_0(VAR_1, VAR_0));
 if (VAR_3)
  VAR_4 &= ~VAR_2;
 else
  VAR_4 |= VAR_2;
 FUNC_2(VAR_4, FUNC_0(VAR_1, VAR_0));
}
