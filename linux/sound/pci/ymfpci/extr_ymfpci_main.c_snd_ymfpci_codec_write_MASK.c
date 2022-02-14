
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct snd_ymfpci {int dummy; } ;
struct snd_ac97 {struct snd_ymfpci* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct snd_ymfpci *VAR_5 = VAR_2->private_data;
 u32 VAR_6;

 FUNC_0(VAR_5, 0);
 VAR_6 = ((VAR_1 | VAR_3) << 16) | VAR_4;
 FUNC_1(VAR_5, VAR_0, VAR_6);
}
