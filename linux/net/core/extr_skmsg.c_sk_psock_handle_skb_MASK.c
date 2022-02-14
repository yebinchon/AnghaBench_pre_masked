
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_psock {int sk; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_psock*,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_psock *VAR_0, struct sk_buff *VAR_1,
          u32 VAR_2, u32 VAR_3, bool VAR_4)
{
 if (VAR_4)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0->sk, VAR_1, VAR_2, VAR_3);
}
