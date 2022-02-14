
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw_notifier_head {int dummy; } ;
struct dsa_port {TYPE_2__* ds; } ;
struct TYPE_4__ {TYPE_1__* dst; } ;
struct TYPE_3__ {struct raw_notifier_head nh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_notifier_head*,unsigned long,void*) ;

__attribute__((used)) static int FUNC_2(const struct dsa_port *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct raw_notifier_head *VAR_3 = &VAR_0->ds->dst->nh;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

 return FUNC_0(VAR_4);
}
