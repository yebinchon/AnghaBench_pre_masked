
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {scalar_t__ (* get_sset_count ) (struct dsa_switch*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_0(VAR_2);
 struct dsa_switch *VAR_5 = VAR_4->ds;

 if (VAR_3 == VAR_1) {
  int VAR_6;

  VAR_6 = 4;
  if (VAR_5->ops->get_sset_count)
   VAR_6 += VAR_5->ops->get_sset_count(VAR_5, VAR_4->index, VAR_3);

  return VAR_6;
 }

 return -VAR_0;
}
