
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct hstate {int dummy; } ;


 struct hstate* FUNC_0 (struct vm_area_struct*) ;
 unsigned long FUNC_1 (struct hstate*) ;

__attribute__((used)) static unsigned long FUNC_2(struct vm_area_struct *VAR_0)
{
 struct hstate *VAR_1 = FUNC_0(VAR_0);

 return 1UL << FUNC_1(VAR_1);
}
