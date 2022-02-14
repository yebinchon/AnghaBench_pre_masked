
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {unsigned int* pro_volumes; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2->pro_volumes[VAR_3];
 unsigned short VAR_5 = 0;

 VAR_5 |= (VAR_4 & 0x8000) == 0 ? (96 - (VAR_4 & 0x7f)) : 0x7f;
 VAR_5 |= ((VAR_4 & 0x80000000) == 0 ? (96 - ((VAR_4 >> 16) & 0x7f)) : 0x7f) << 8;
 FUNC_1(VAR_3, FUNC_0(VAR_2, VAR_0));
 FUNC_2(VAR_5, FUNC_0(VAR_2, VAR_1));
}
