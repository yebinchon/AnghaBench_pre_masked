
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct mmu_notifier_range {scalar_t__ start; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,int,int *) ;
 int FUNC_1 (struct vm_area_struct*,int *,unsigned long,int ,int) ;
 unsigned long FUNC_2 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mmu_notifier_range*) ;
 int FUNC_7 (struct mmu_notifier_range*) ;
 int FUNC_8 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_14(struct vm_area_struct *VAR_4,
  pud_t *VAR_5, unsigned long VAR_6, unsigned long VAR_7,
  pgprot_t VAR_8, int VAR_9, int VAR_10)
{
 pmd_t *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13 = 0;
 unsigned long VAR_14 = 0;
 struct mmu_notifier_range VAR_15;

 VAR_15.start = 0;

 VAR_11 = FUNC_12(VAR_5, VAR_6);
 do {
  unsigned long VAR_16;

  VAR_12 = FUNC_9(VAR_6, VAR_7);
  if (!FUNC_5(*VAR_11) && !FUNC_13(*VAR_11) && !FUNC_10(*VAR_11)
    && FUNC_11(VAR_11))
   goto next;


  if (!VAR_15.start) {
   FUNC_8(&VAR_15,
    VAR_2, 0,
    VAR_4, VAR_4->vm_mm, VAR_6, VAR_7);
   FUNC_7(&VAR_15);
  }

  if (FUNC_5(*VAR_11) || FUNC_13(*VAR_11) || FUNC_10(*VAR_11)) {
   if (VAR_12 - VAR_6 != VAR_1) {
    FUNC_0(VAR_4, VAR_11, VAR_6, 0, ((void*)0));
   } else {
    int VAR_17 = FUNC_1(VAR_4, VAR_11, VAR_6,
      VAR_8, VAR_10);

    if (VAR_17) {
     if (VAR_17 == VAR_0) {
      VAR_13 += VAR_0;
      VAR_14++;
     }


     goto next;
    }
   }

  }
  VAR_16 = FUNC_2(VAR_4, VAR_11, VAR_6, VAR_12, VAR_8,
     VAR_9, VAR_10);
  VAR_13 += VAR_16;
next:
  FUNC_3();
 } while (VAR_11++, VAR_6 = VAR_12, VAR_6 != VAR_7);

 if (VAR_15.start)
  FUNC_6(&VAR_15);

 if (VAR_14)
  FUNC_4(VAR_3, VAR_14);
 return VAR_13;
}
