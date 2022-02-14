
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_0,
    ((void*)0), 0);
 if (VAR_6)
  return VAR_6;

 VAR_3->sk_state = VAR_2;

 return 0;
}
