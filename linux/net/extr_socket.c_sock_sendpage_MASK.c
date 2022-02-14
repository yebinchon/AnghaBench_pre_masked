
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct page {int dummy; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct page*,int,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_2, struct page *VAR_3,
        int VAR_4, size_t VAR_5, loff_t *VAR_6, int VAR_7)
{
 struct socket *VAR_8;
 int VAR_9;

 VAR_8 = VAR_2->private_data;

 VAR_9 = (VAR_2->f_flags & VAR_1) ? VAR_0 : 0;

 VAR_9 |= VAR_7;

 return FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_9);
}
