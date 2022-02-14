
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_devinfo {int cseq; int file_mode; scalar_t__ writeq; scalar_t__ readq; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct file*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,struct file*,int *) ;

__poll_t
FUNC_4(struct seq_oss_devinfo *VAR_4, struct file *VAR_5, poll_table * VAR_6)
{
 __poll_t VAR_7 = 0;


 if (VAR_4->readq && FUNC_0(VAR_4->file_mode)) {
  if (FUNC_3(VAR_4->readq, VAR_5, VAR_6))
   VAR_7 |= VAR_0 | VAR_2;
 }


 if (VAR_4->writeq && FUNC_1(VAR_4->file_mode)) {
  if (FUNC_2(VAR_4->cseq, VAR_5, VAR_6))
   VAR_7 |= VAR_1 | VAR_3;
 }
 return VAR_7;
}
