
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_txoptions {int opt_flen; int opt_nflen; } ;
struct ipv6_pinfo {int opt; } ;


 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct ipv6_txoptions* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_0(VAR_0);
 struct ipv6_txoptions *VAR_2;
 int VAR_3 = 0;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->opt);
 if (VAR_2)
  VAR_3 = VAR_2->opt_flen + VAR_2->opt_nflen;

 FUNC_3();
 return VAR_3;
}
