
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_tun {int queue; int readq; } ;
struct file {struct qrtr_tun* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2, poll_table *VAR_3)
{
 struct qrtr_tun *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_0(VAR_2, &VAR_4->readq, VAR_3);

 if (!FUNC_1(&VAR_4->queue))
  VAR_5 |= VAR_0 | VAR_1;

 return VAR_5;
}
