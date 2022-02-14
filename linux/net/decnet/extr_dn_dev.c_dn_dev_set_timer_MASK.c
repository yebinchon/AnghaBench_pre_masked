
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dn_ptr; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int t2; int t3; } ;
struct dn_dev {TYPE_2__ timer; TYPE_1__ parms; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 struct dn_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct dn_dev *VAR_3 = FUNC_1(VAR_2->dn_ptr);

 if (VAR_3->parms.t2 > VAR_3->parms.t3)
  VAR_3->parms.t2 = VAR_3->parms.t3;

 VAR_3->timer.expires = VAR_1 + (VAR_3->parms.t2 * VAR_0);

 FUNC_0(&VAR_3->timer);
}
