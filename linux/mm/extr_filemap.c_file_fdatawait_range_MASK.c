
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct address_space*,int ,int ) ;
 int FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2)
{
 struct address_space *VAR_3 = VAR_0->f_mapping;

 FUNC_0(VAR_3, VAR_1, VAR_2);
 return FUNC_1(VAR_0);
}
