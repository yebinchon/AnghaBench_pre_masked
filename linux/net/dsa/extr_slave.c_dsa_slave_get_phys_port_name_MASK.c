
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_port {int index; TYPE_1__* ds; } ;
struct TYPE_2__ {scalar_t__ devlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 size_t FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
     char *VAR_3, size_t VAR_4)
{
 struct dsa_port *VAR_5 = FUNC_0(VAR_2);





 if (VAR_5->ds->devlink)
  return -VAR_1;

 if (FUNC_1(VAR_3, VAR_4, "p%d", VAR_5->index) >= VAR_4)
  return -VAR_0;

 return 0;
}
