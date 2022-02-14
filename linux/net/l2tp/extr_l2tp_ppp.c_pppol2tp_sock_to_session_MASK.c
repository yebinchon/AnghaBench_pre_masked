
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_user_data; } ;
struct l2tp_session {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static inline struct l2tp_session *FUNC_3(struct sock *VAR_1)
{
 struct l2tp_session *VAR_2;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1);
 VAR_2 = (struct l2tp_session *)(VAR_1->sk_user_data);
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_1);
  goto out;
 }

 FUNC_0(VAR_2->magic != VAR_0);

out:
 return VAR_2;
}
