
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int iolock; } ;
struct sock {int sk_peek_off; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct unix_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, int VAR_2)
{
 struct unix_sock *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(&VAR_3->iolock))
  return -VAR_0;

 VAR_1->sk_peek_off = VAR_2;
 FUNC_1(&VAR_3->iolock);

 return 0;
}
