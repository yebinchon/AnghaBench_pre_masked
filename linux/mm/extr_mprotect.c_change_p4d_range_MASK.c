
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 scalar_t__ FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,int,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_4(struct vm_area_struct *VAR_0,
  pgd_t *VAR_1, unsigned long VAR_2, unsigned long VAR_3,
  pgprot_t VAR_4, int VAR_5, int VAR_6)
{
 p4d_t *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = 0;

 VAR_7 = FUNC_3(VAR_1, VAR_2);
 do {
  VAR_8 = FUNC_1(VAR_2, VAR_3);
  if (FUNC_2(VAR_7))
   continue;
  VAR_9 += FUNC_0(VAR_0, VAR_7, VAR_2, VAR_8, VAR_4,
     VAR_5, VAR_6);
 } while (VAR_7++, VAR_2 = VAR_8, VAR_2 != VAR_3);

 return VAR_9;
}
