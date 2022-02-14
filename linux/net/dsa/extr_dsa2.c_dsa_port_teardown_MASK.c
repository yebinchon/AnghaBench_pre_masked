
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_port {int dummy; } ;
struct dsa_port {int type; int * slave; int tag_ops; struct devlink_port devlink_port; } ;






 int FUNC_0 (struct devlink_port*) ;
 int FUNC_1 (struct dsa_port*) ;
 int FUNC_2 (struct dsa_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dsa_port *VAR_0)
{
 struct devlink_port *VAR_1 = &VAR_0->devlink_port;

 switch (VAR_0->type) {
 case 129:
  break;
 case 131:
  FUNC_1(VAR_0);
  FUNC_4(VAR_0->tag_ops);
  FUNC_0(VAR_1);
  FUNC_2(VAR_0);
  break;
 case 130:
  FUNC_1(VAR_0);
  FUNC_0(VAR_1);
  FUNC_2(VAR_0);
  break;
 case 128:
  FUNC_0(VAR_1);
  if (VAR_0->slave) {
   FUNC_3(VAR_0->slave);
   VAR_0->slave = ((void*)0);
  }
  break;
 }
}
