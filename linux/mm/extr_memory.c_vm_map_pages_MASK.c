
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct vm_area_struct*,struct page**,unsigned long,int ) ;

int FUNC_1(struct vm_area_struct *VAR_0, struct page **VAR_1,
    unsigned long VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->vm_pgoff);
}
