
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {scalar_t__ addr; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 unsigned long FUNC_0 (struct vm_struct*) ;
 int FUNC_1 (unsigned long,unsigned long,int ,struct page**) ;

int FUNC_2(struct vm_struct *VAR_0, pgprot_t VAR_1, struct page **VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_0->addr;
 unsigned long VAR_4 = VAR_3 + FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2);

 return VAR_5 > 0 ? 0 : VAR_5;
}
