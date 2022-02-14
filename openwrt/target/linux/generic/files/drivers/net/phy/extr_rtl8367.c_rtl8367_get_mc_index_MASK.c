
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_3, int VAR_4, int *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_3, FUNC_1(VAR_4), &VAR_6);

 *VAR_5 = (VAR_6 >> FUNC_2(VAR_4)) &
        VAR_2;

 return 0;
}
