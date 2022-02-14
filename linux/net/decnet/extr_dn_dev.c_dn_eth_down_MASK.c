
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dn_ptr; } ;
struct TYPE_2__ {scalar_t__ forwarding; } ;
struct dn_dev {TYPE_1__ parms; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dn_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct dn_dev *VAR_3 = FUNC_1(VAR_2->dn_ptr);

 if (VAR_3->parms.forwarding == 0)
  FUNC_0(VAR_2, VAR_0);
 else
  FUNC_0(VAR_2, VAR_1);
}
