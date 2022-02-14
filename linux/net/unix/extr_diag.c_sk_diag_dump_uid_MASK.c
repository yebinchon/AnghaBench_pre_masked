
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct sock {int dummy; } ;
struct sk_buff {int sk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 uid_t VAR_3 = FUNC_0(FUNC_2(VAR_2->sk), FUNC_3(VAR_1));
 return FUNC_1(VAR_2, VAR_0, sizeof(uid_t), &VAR_3);
}
