
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cache_detail {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 struct cache_detail* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int *,struct cache_detail*) ;
 int FUNC_2 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_0, poll_table *VAR_1)
{
 struct cache_detail *VAR_2 = FUNC_0(FUNC_2(VAR_0));

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
