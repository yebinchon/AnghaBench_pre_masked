
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_tun {int ep; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {struct qrtr_tun* private_data; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,size_t,struct iov_iter*) ;
 size_t FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int *,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct file *VAR_5 = VAR_3->ki_filp;
 struct qrtr_tun *VAR_6 = VAR_5->private_data;
 size_t VAR_7 = FUNC_1(VAR_4);
 ssize_t VAR_8;
 void *VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (!FUNC_0(VAR_9, VAR_7, VAR_4)) {
  FUNC_2(VAR_9);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(&VAR_6->ep, VAR_9, VAR_7);

 FUNC_2(VAR_9);
 return VAR_8 < 0 ? VAR_8 : VAR_7;
}
