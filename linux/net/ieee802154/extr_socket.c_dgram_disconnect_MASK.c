
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dgram_sock {scalar_t__ connected; } ;


 struct dgram_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct dgram_sock *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_2->connected = 0;
 FUNC_2(VAR_0);

 return 0;
}
