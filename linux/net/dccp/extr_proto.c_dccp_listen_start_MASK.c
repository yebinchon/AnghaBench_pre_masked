
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_role; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dccp_sock*) ;
 struct dccp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_2, int VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_1(VAR_2);

 VAR_4->dccps_role = VAR_0;

 if (FUNC_0(VAR_4))
  return -VAR_1;
 return FUNC_2(VAR_2, VAR_3);
}
