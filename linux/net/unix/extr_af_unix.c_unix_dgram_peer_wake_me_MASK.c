
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*,struct sock*) ;
 int FUNC_2 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sock *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);






 if (FUNC_3(VAR_2) && !FUNC_0(VAR_2, VAR_0))
  return 1;

 if (VAR_3)
  FUNC_2(VAR_1, VAR_2);

 return 0;
}
