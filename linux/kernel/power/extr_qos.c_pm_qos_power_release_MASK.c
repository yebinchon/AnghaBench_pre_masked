
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_request {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct pm_qos_request* private_data; } ;


 int FUNC_0 (struct pm_qos_request*) ;
 int FUNC_1 (struct pm_qos_request*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct pm_qos_request *VAR_2;

 VAR_2 = VAR_1->private_data;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}
