
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nfc_llcp_local {int timeout_work; } ;


 struct nfc_llcp_local* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct nfc_llcp_local* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct nfc_llcp_local *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1("SYMM timeout\n");

 FUNC_2(&VAR_3->timeout_work);
}
