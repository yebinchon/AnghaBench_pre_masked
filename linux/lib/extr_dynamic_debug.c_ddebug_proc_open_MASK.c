
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct ddebug_iter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_1("called\n");
 return FUNC_0(VAR_2, &VAR_0,
    sizeof(struct ddebug_iter));
}
