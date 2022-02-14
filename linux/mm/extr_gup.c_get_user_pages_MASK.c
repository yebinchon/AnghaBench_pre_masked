
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_3__ {int mm; } ;


 unsigned int VAR_0 ;
 long FUNC_0 (TYPE_1__*,int ,unsigned long,unsigned long,struct page**,struct vm_area_struct**,unsigned int) ;
 TYPE_1__* VAR_1 ;

long FUNC_1(unsigned long VAR_2, unsigned long VAR_3,
  unsigned int VAR_4, struct page **VAR_5,
  struct vm_area_struct **VAR_6)
{
 return FUNC_0(VAR_1, VAR_1->mm, VAR_2, VAR_3,
         VAR_5, VAR_6, VAR_4 | VAR_0);
}
