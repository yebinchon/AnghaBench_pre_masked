
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
 int VAR_10 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_11,
     u32 VAR_12, u32 VAR_13, u32 VAR_14, u32 *VAR_15)
{
 u32 VAR_16;
 int VAR_17;

 if (VAR_12 > VAR_5)
  return -VAR_0;

 if (VAR_13 > VAR_8)
  return -VAR_0;

 if (VAR_14 > VAR_3)
  return -VAR_0;

 VAR_17 = FUNC_1(VAR_11, VAR_1,
        VAR_4);
 if (VAR_17)
  return VAR_17;

 VAR_16 = 0x8000 | (1 << (VAR_12 + VAR_6)) |
       ((VAR_13 << VAR_9) & VAR_7) |
       (VAR_14 & VAR_10);

 VAR_17 = FUNC_1(VAR_11, VAR_16, 0);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_0(VAR_11, VAR_2, VAR_15);
 if (VAR_17)
  return VAR_17;

 return 0;
}
