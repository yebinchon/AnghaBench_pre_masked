
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {int (* local_error ) (struct sk_buff*,int) ;} ;
struct sk_buff {scalar_t__ protocol; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct xfrm_state_afinfo* FUNC_3 (unsigned int) ;

void FUNC_4(struct sk_buff *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 struct xfrm_state_afinfo *VAR_7;

 if (VAR_4->protocol == FUNC_0(VAR_2))
  VAR_6 = VAR_0;
 else if (VAR_4->protocol == FUNC_0(VAR_3))
  VAR_6 = VAR_1;
 else
  return;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  VAR_7->local_error(VAR_4, VAR_5);
  FUNC_1();
 }
}
