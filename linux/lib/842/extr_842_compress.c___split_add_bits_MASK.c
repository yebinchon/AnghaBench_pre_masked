
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sw842_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct sw842_param*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sw842_param *VAR_1, u64 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (VAR_3 <= VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2 >> VAR_4, VAR_3 - VAR_4);
 if (VAR_5)
  return VAR_5;
 return FUNC_1(VAR_1, VAR_2 & FUNC_0(VAR_4 - 1, 0), VAR_4);
}
