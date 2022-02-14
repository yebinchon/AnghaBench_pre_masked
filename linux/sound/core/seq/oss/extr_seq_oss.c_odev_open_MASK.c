
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct file*,int) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_4) == VAR_0)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 FUNC_1(&VAR_3);
 VAR_7 = FUNC_3(VAR_5, VAR_6);
 FUNC_2(&VAR_3);

 return VAR_7;
}
