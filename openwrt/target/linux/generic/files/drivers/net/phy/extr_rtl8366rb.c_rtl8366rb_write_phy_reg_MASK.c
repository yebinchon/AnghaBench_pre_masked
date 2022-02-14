
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl8366_smi*,int,int) ;

__attribute__((used)) static int FUNC_1(struct rtl8366_smi *VAR_10,
      u32 VAR_11, u32 VAR_12, u32 VAR_13, u32 VAR_14)
{
 u32 VAR_15;
 int VAR_16;

 if (VAR_11 > VAR_4)
  return -VAR_0;

 if (VAR_12 > VAR_7)
  return -VAR_0;

 if (VAR_13 > VAR_2)
  return -VAR_0;

 VAR_16 = FUNC_0(VAR_10, VAR_1,
        VAR_3);
 if (VAR_16)
  return VAR_16;

 VAR_15 = 0x8000 | (1 << (VAR_11 + VAR_5)) |
       ((VAR_12 << VAR_8) & VAR_6) |
       (VAR_13 & VAR_9);

 VAR_16 = FUNC_0(VAR_10, VAR_15, VAR_14);
 if (VAR_16)
  return VAR_16;

 return 0;
}
