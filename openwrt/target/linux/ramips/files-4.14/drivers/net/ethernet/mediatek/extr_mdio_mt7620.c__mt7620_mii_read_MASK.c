
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7620_gsw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mt7620_gsw*) ;
 int FUNC_1 (struct mt7620_gsw*,int ) ;
 int FUNC_2 (struct mt7620_gsw*,int,int ) ;

u32 FUNC_3(struct mt7620_gsw *VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (FUNC_0(VAR_6))
  return 0xffff;

 FUNC_2(VAR_6, VAR_0 | VAR_4 | VAR_2 |
  (VAR_8 << VAR_3) |
  (VAR_7 << VAR_1),
  VAR_5);

 if (FUNC_0(VAR_6))
  return 0xffff;

 VAR_9 = FUNC_1(VAR_6, VAR_5) & 0xffff;

 return VAR_9;
}
