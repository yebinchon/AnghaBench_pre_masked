
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int tc_index; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, void *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = *(u16 *)VAR_1;

 VAR_0->tc_index = FUNC_0(VAR_3);
 return 0;
}
