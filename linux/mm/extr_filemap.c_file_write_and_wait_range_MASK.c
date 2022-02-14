
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,int ,int ) ;
 int FUNC_1 (struct address_space*,int ,int ,int ) ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct address_space*) ;

int FUNC_4(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct address_space *VAR_7 = VAR_2->f_mapping;

 if (FUNC_3(VAR_7)) {
  VAR_5 = FUNC_1(VAR_7, VAR_3, VAR_4,
       VAR_1);

  if (VAR_5 != -VAR_0)
   FUNC_0(VAR_7, VAR_3, VAR_4);
 }
 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_5)
  VAR_5 = VAR_6;
 return VAR_5;
}
