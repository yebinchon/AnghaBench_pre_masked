
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {scalar_t__ mc_dad_count; scalar_t__ mc_qrv; } ;


 int FUNC_0 (struct inet6_dev*,int ) ;
 int FUNC_1 (struct inet6_dev*) ;
 int FUNC_2 (struct inet6_dev*) ;

void FUNC_3(struct inet6_dev *VAR_0)
{
 VAR_0->mc_dad_count = VAR_0->mc_qrv;
 if (VAR_0->mc_dad_count) {
  FUNC_1(VAR_0);
  VAR_0->mc_dad_count--;
  if (VAR_0->mc_dad_count)
   FUNC_0(VAR_0,
         FUNC_2(VAR_0));
 }
}
