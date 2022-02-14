
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sock*,int,struct in6_addr const*) ;
 int FUNC_2 (struct sock*,int,struct in6_addr const*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_0, bool VAR_1,
     const struct in6_addr *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0();

 FUNC_3(VAR_0);
 if (VAR_1)
  VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);
 FUNC_4(VAR_0);

 return VAR_4;
}
