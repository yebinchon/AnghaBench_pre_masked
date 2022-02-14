
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nfc_llcp_local {int sdreq_timeout_work; } ;


 struct nfc_llcp_local* FUNC_0 (int ,struct timer_list*,int ) ;
 struct nfc_llcp_local* VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct nfc_llcp_local *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(&VAR_3->sdreq_timeout_work);
}
