
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_request {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct pm_qos_request* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 struct pm_qos_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pm_qos_request*,long,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, struct file *VAR_6)
{
 long VAR_7;

 VAR_7 = FUNC_0(FUNC_1(VAR_5));
 if (VAR_7 >= VAR_3) {
  struct pm_qos_request *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_0;

  FUNC_3(VAR_8, VAR_7, VAR_4);
  VAR_6->private_data = VAR_8;

  return 0;
 }
 return -VAR_1;
}
