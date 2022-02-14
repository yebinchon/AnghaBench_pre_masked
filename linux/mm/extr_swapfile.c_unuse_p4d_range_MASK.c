
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned int,int,unsigned long*) ;

__attribute__((used)) static inline int FUNC_4(struct vm_area_struct *VAR_0, pgd_t *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    unsigned int VAR_4, bool VAR_5,
    unsigned long *VAR_6)
{
 p4d_t *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 do {
  VAR_8 = FUNC_0(VAR_2, VAR_3);
  if (FUNC_1(VAR_7))
   continue;
  VAR_9 = FUNC_3(VAR_0, VAR_7, VAR_2, VAR_8, VAR_4,
          VAR_5, VAR_6);
  if (VAR_9)
   return VAR_9;
 } while (VAR_7++, VAR_2 = VAR_8, VAR_2 != VAR_3);
 return 0;
}
