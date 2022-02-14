
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_file; } ;
struct hugepage_subpool {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hugepage_subpool* FUNC_1 (int ) ;

__attribute__((used)) static inline struct hugepage_subpool *FUNC_2(struct vm_area_struct *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0->vm_file));
}
