
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct mmu_gather {int dummy; } ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,struct zap_details*) ;

__attribute__((used)) static inline unsigned long FUNC_4(struct mmu_gather *VAR_0,
    struct vm_area_struct *VAR_1, pgd_t *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    struct zap_details *VAR_5)
{
 p4d_t *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 do {
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (FUNC_1(VAR_6))
   continue;
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6, VAR_3, VAR_7, VAR_5);
 } while (VAR_6++, VAR_3 = VAR_7, VAR_3 != VAR_4);

 return VAR_3;
}
