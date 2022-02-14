
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 if (!FUNC_0(&VAR_2))
  return VAR_0 | VAR_1;
 FUNC_1(VAR_4, &VAR_3, VAR_5);
 if (!FUNC_0(&VAR_2))
  return VAR_0 | VAR_1;
 return 0;
}
