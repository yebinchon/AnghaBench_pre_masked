
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int sum ;
struct sk_buff {int dummy; } ;
typedef int __wsum ;
typedef int __sum16 ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int *,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, const u32 *VAR_1,
     __wsum VAR_2, __wsum VAR_3, int VAR_4)
{
 __sum16 VAR_5;

 if (FUNC_1(VAR_0, VAR_4, &VAR_5, sizeof(VAR_5)) < 0)
  return -1;

 FUNC_0(&VAR_5, VAR_2, VAR_3);
 if (FUNC_2(VAR_0, VAR_4 + sizeof(VAR_5)) ||
     FUNC_3(VAR_0, VAR_4, &VAR_5, sizeof(VAR_5)) < 0)
  return -1;

 return 0;
}
