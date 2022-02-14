
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_sock {scalar_t__ sk_reclen; scalar_t__ sk_tcplen; } ;


 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct svc_sock*) ;
 int FUNC_2 (struct svc_sock*) ;

__attribute__((used)) static void FUNC_3(struct svc_sock *VAR_0)
{

 FUNC_0("svc: TCP %s record (%d bytes)\n",
  FUNC_1(VAR_0) ? "final" : "nonfinal",
  FUNC_2(VAR_0));
 VAR_0->sk_tcplen = 0;
 VAR_0->sk_reclen = 0;
}
