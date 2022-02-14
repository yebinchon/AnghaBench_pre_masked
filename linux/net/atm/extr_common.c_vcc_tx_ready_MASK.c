
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sndbuf; } ;
struct atm_vcc {int dummy; } ;


 int FUNC_0 (struct atm_vcc*,unsigned int) ;
 int FUNC_1 (char*,scalar_t__,unsigned int,int ) ;
 struct sock* FUNC_2 (struct atm_vcc*) ;
 scalar_t__ FUNC_3 (struct sock*) ;

__attribute__((used)) static bool FUNC_4(struct atm_vcc *VAR_0, unsigned int VAR_1)
{
 struct sock *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_2) && !FUNC_0(VAR_0, VAR_1)) {
  FUNC_1("Sorry: wmem_alloc = %d, size = %d, sndbuf = %d\n",
    FUNC_3(VAR_2), VAR_1, VAR_2->sk_sndbuf);
  return 0;
 }
 return 1;
}
