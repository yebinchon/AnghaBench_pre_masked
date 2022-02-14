
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct llc_shdlc {int sm_work; } ;


 struct llc_shdlc* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 struct llc_shdlc* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct llc_shdlc *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1("SoftIRQ: need to retransmit\n");

 FUNC_2(&VAR_3->sm_work);
}
