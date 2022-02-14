
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7620_gsw {int dummy; } ;


 int FUNC_0 (struct mt7620_gsw*,int,int,int) ;

void FUNC_1(struct mt7620_gsw *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0, 0x1f, 0x1f, (VAR_1 >> 6) & 0x3ff);
 FUNC_0(VAR_0, 0x1f, (VAR_1 >> 2) & 0xf, VAR_2 & 0xffff);
 FUNC_0(VAR_0, 0x1f, 0x10, VAR_2 >> 16);
}
