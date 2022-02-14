
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llcp_sock {scalar_t__ remote_miu; int remote_rw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct nfc_llcp_sock *VAR_2)
{
 VAR_2->remote_rw = VAR_0;
 VAR_2->remote_miu = VAR_1 + 1;
}
