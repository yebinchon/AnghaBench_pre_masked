
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct unix_diag_req {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_buff*,struct unix_diag_req*,int ,int ,int ,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1, struct unix_diag_req *VAR_2,
  u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_0);
 VAR_6 = FUNC_1(VAR_0);
 FUNC_3(VAR_0);

 if (!VAR_6)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
