
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int mc_qrv; int mc_ifc_count; } ;


 int FUNC_0 (struct inet6_dev*,int) ;
 scalar_t__ FUNC_1 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_2(struct inet6_dev *VAR_0)
{
 if (FUNC_1(VAR_0))
  return;
 VAR_0->mc_ifc_count = VAR_0->mc_qrv;
 FUNC_0(VAR_0, 1);
}
