
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_rb; } ;
struct rb_root {int dummy; } ;


 int FUNC_0 (int *,struct rb_root*,int *) ;
 int FUNC_1 (struct rb_root*,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct vm_area_struct *VAR_1,
     struct rb_root *VAR_2)
{

 FUNC_1(VAR_2, ((void*)0));

 FUNC_0(&VAR_1->vm_rb, VAR_2, &VAR_0);
}
