
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_msg {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_msg*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_msg *VAR_1,
          u32 VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_0);
 return VAR_5;
}
