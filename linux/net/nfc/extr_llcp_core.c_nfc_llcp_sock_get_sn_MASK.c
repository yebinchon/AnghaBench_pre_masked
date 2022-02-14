
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_llcp_sock {int sk; } ;
struct nfc_llcp_local {int dummy; } ;


 struct nfc_llcp_sock* FUNC_0 (struct nfc_llcp_local*,int *,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfc_llcp_sock *FUNC_2(struct nfc_llcp_local *VAR_0,
        u8 *VAR_1, size_t VAR_2)
{
 struct nfc_llcp_sock *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_3->sk);

 return VAR_3;
}
