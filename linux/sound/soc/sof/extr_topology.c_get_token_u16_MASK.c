
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_soc_tplg_vendor_value_elem {int value; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct snd_soc_tplg_vendor_value_elem *VAR_4 = VAR_0;
 u16 *VAR_5 = (u16 *)((u8 *)VAR_1 + VAR_2);

 *VAR_5 = (u16)FUNC_0(VAR_4->value);
 return 0;
}
