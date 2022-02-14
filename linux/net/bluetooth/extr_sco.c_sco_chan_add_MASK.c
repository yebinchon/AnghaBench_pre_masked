
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sco_conn {scalar_t__ sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct sco_conn*,struct sock*,struct sock*) ;
 int FUNC_1 (struct sco_conn*) ;
 int FUNC_2 (struct sco_conn*) ;

__attribute__((used)) static int FUNC_3(struct sco_conn *VAR_1, struct sock *VAR_2,
   struct sock *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_1);
 if (VAR_1->sk)
  VAR_4 = -VAR_0;
 else
  FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_1);
 return VAR_4;
}
