
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcov {int lock; int refcount; int mode; } ;
struct inode {int dummy; } ;
struct file {struct kcov* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kcov* FUNC_0 (int,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct kcov *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->mode = VAR_2;
 FUNC_2(&VAR_5->refcount, 1);
 FUNC_3(&VAR_5->lock);
 VAR_4->private_data = VAR_5;
 return FUNC_1(VAR_3, VAR_4);
}
