
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sw842_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sw842_param*,int*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sw842_param *VAR_1, u64 *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u64 VAR_5 = 0;
 int VAR_6;

 if (VAR_3 <= VAR_4) {
  FUNC_1("split_next_bits invalid n %u s %u\n", VAR_3, VAR_4);
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_3 - VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;
 *VAR_2 |= VAR_5 << VAR_4;
 return 0;
}
