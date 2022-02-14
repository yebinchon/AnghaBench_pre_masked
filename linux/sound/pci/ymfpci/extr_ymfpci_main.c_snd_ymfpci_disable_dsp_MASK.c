
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ymfpci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ymfpci *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = 1000;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_2, VAR_0, 0x00000000);
 while (VAR_4-- > 0) {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if ((VAR_3 & 0x00000002) == 0)
   break;
 }
}
