
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; } ;
struct address_space {int i_mmap_rwsem; int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_1, struct address_space *VAR_2)
{
 if (!FUNC_3(VAR_0, &VAR_2->flags)) {
  if (FUNC_2(VAR_0, &VAR_2->flags))
   FUNC_0();
  FUNC_1(&VAR_2->i_mmap_rwsem, &VAR_1->mmap_sem);
 }
}
