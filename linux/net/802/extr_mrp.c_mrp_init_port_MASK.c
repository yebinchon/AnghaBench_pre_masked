
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mrp_port; } ;
struct mrp_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mrp_port* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct mrp_port*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct mrp_port *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(VAR_2->mrp_port, VAR_3);
 return 0;
}
