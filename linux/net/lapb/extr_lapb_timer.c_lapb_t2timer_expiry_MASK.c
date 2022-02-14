
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lapb_cb {int condition; } ;


 int VAR_0 ;
 struct lapb_cb* FUNC_0 (int ,struct timer_list*,int ) ;
 struct lapb_cb* VAR_1 ;
 int FUNC_1 (struct lapb_cb*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 struct lapb_cb *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 if (VAR_4->condition & VAR_0) {
  VAR_4->condition &= ~VAR_0;
  FUNC_1(VAR_4);
 }
}
