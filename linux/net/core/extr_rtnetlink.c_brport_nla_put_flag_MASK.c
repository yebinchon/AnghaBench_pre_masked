
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, u32 VAR_1, u32 VAR_2,
          unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_2 & VAR_4)
  return FUNC_0(VAR_0, VAR_3, !!(VAR_1 & VAR_4));
 return 0;
}
