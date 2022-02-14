
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit; } ;
struct qrtr_tun {TYPE_1__ ep; int readq; int queue; } ;
struct inode {int dummy; } ;
struct file {struct qrtr_tun* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct qrtr_tun* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 struct qrtr_tun *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_6->queue);
 FUNC_0(&VAR_6->readq);

 VAR_6->ep.xmit = VAR_3;

 VAR_5->private_data = VAR_6;

 return FUNC_2(&VAR_6->ep, VAR_2);
}
