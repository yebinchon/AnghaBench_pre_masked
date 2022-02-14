
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int p4d_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,struct vm_area_struct*) ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*,int *,int *,unsigned long,struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (struct mm_struct*,struct mm_struct*,int *,int *,struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int * FUNC_4 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct mm_struct *VAR_2, struct mm_struct *VAR_3,
  p4d_t *VAR_4, p4d_t *VAR_5, struct vm_area_struct *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 pud_t *VAR_9, *VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_4(VAR_2, VAR_4, VAR_7);
 if (!VAR_10)
  return -VAR_0;
 VAR_9 = FUNC_7(VAR_5, VAR_7);
 do {
  VAR_11 = FUNC_3(VAR_7, VAR_8);
  if (FUNC_8(*VAR_9) || FUNC_5(*VAR_9)) {
   int VAR_12;

   FUNC_0(VAR_11-VAR_7 != VAR_1, VAR_6);
   VAR_12 = FUNC_1(VAR_2, VAR_3,
         VAR_10, VAR_9, VAR_7, VAR_6);
   if (VAR_12 == -VAR_0)
    return -VAR_0;
   if (!VAR_12)
    continue;

  }
  if (FUNC_6(VAR_9))
   continue;
  if (FUNC_2(VAR_2, VAR_3, VAR_10, VAR_9,
      VAR_6, VAR_7, VAR_11))
   return -VAR_0;
 } while (VAR_10++, VAR_9++, VAR_7 = VAR_11, VAR_7 != VAR_8);
 return 0;
}
