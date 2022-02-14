
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 if (VAR_2 & ~(FUNC_1(FUNC_0(VAR_1))))
  return -VAR_0;
 return 0;
}
