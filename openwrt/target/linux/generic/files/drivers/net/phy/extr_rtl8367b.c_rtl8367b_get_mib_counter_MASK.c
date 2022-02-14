
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtl8366_smi {int dummy; } ;
struct rtl8366_mib_counter {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rtl8366_mib_counter* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_10, int VAR_11,
        int VAR_12, unsigned long long *VAR_13)
{
 struct rtl8366_mib_counter *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 u32 VAR_18, VAR_19;
 u64 VAR_20;

 if (VAR_12 > VAR_8 ||
     VAR_11 >= VAR_7)
  return -VAR_1;

 VAR_14 = &VAR_9[VAR_11];
 VAR_18 = VAR_4 * VAR_12 + VAR_14->offset;





 FUNC_1(VAR_10, VAR_3, VAR_18 >> 2);


 FUNC_0(VAR_10, FUNC_3(0), &VAR_19);

 if (VAR_19 & VAR_5)
  return -VAR_0;

 if (VAR_19 & VAR_6)
  return -VAR_2;

 if (VAR_14->length == 4)
  VAR_15 = 3;
 else
  VAR_15 = (VAR_14->offset + 1) % 4;

 VAR_20 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_14->length; VAR_16++) {
  FUNC_0(VAR_10, FUNC_2(VAR_15 - VAR_16), &VAR_19);
  VAR_20 = (VAR_20 << 16) | (VAR_19 & 0xFFFF);
 }

 *VAR_13 = VAR_20;
 return 0;
}
