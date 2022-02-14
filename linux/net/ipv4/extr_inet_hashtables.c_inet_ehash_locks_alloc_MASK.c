
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_hashinfo {unsigned int ehash_locks_mask; int * ehash_locks; scalar_t__ ehash_mask; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int * FUNC_0 (unsigned int,unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,scalar_t__) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inet_hashinfo *VAR_3)
{
 unsigned int VAR_4 = sizeof(spinlock_t);
 unsigned int VAR_5, VAR_6 = 1;

 if (VAR_4 != 0) {

  VAR_6 = FUNC_1(2U * VAR_2 / VAR_4, 1U);
  VAR_6 = FUNC_4(VAR_6 * FUNC_3());


  VAR_6 = FUNC_2(VAR_6, VAR_3->ehash_mask + 1);

  VAR_3->ehash_locks = FUNC_0(VAR_6, VAR_4, VAR_1);
  if (!VAR_3->ehash_locks)
   return -VAR_0;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_5(&VAR_3->ehash_locks[VAR_5]);
 }
 VAR_3->ehash_locks_mask = VAR_6 - 1;
 return 0;
}
