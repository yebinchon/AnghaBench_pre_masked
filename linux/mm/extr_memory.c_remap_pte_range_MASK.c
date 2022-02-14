
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int * FUNC_5 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_10(struct mm_struct *VAR_3, pmd_t *VAR_4,
   unsigned long VAR_5, unsigned long VAR_6,
   unsigned long VAR_7, pgprot_t VAR_8)
{
 pte_t *VAR_9;
 spinlock_t *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, &VAR_10);
 if (!VAR_9)
  return -VAR_1;
 FUNC_1();
 do {
  FUNC_0(!FUNC_7(*VAR_9));
  if (!FUNC_3(VAR_7, VAR_8)) {
   VAR_11 = -VAR_0;
   break;
  }
  FUNC_9(VAR_3, VAR_5, VAR_9, FUNC_6(FUNC_4(VAR_7, VAR_8)));
  VAR_7++;
 } while (VAR_9++, VAR_5 += VAR_2, VAR_5 != VAR_6);
 FUNC_2();
 FUNC_8(VAR_9 - 1, VAR_10);
 return VAR_11;
}
