
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct inet6_dev {scalar_t__ mc_ifc_count; } ;


 struct inet6_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 struct inet6_dev* VAR_0 ;
 int FUNC_1 (struct inet6_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct inet6_dev*,int ) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct inet6_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_3(VAR_3);
 if (VAR_3->mc_ifc_count) {
  VAR_3->mc_ifc_count--;
  if (VAR_3->mc_ifc_count)
   FUNC_2(VAR_3,
         FUNC_4(VAR_3));
 }
 FUNC_1(VAR_3);
}
