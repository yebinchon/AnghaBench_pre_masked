
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inode {scalar_t__ i_private; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_1->i_private;

 FUNC_0(VAR_2,
      "Use genl command BATADV_CMD_GET_ORIGINATORS instead\n");
 return FUNC_1(VAR_2, VAR_0, VAR_3);
}
