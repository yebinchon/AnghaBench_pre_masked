
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_hash_bucket {int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct futex_hash_bucket *VAR_0, struct futex_hash_bucket *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 if (VAR_0 != VAR_1)
  FUNC_0(&VAR_1->lock);
}
