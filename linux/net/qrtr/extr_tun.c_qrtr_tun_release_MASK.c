
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qrtr_tun {int queue; int ep; } ;
struct inode {int dummy; } ;
struct file {struct qrtr_tun* private_data; } ;


 int FUNC_0 (struct qrtr_tun*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct qrtr_tun *VAR_2 = VAR_1->private_data;
 struct sk_buff *VAR_3;

 FUNC_2(&VAR_2->ep);


 while (!FUNC_4(&VAR_2->queue)) {
  VAR_3 = FUNC_3(&VAR_2->queue);
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_2);

 return 0;
}
