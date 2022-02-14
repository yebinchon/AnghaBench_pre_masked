
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_m3*) ;
 int FUNC_1 (struct snd_m3*,int) ;
 int FUNC_2 (struct snd_m3*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_m3 *VAR_1)
{
 u16 VAR_2;

 if (FUNC_0(VAR_1))
  return 1;

 FUNC_2(VAR_1, 0x80 | (VAR_0 & 0x7f), 0x30);

 if (FUNC_0(VAR_1))
  return 1;

 VAR_2 = FUNC_1(VAR_1, 0x32);

 return (VAR_2 == 0) || (VAR_2 == 0xffff);
}
