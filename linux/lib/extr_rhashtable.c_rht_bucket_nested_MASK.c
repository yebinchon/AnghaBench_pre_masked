
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhash_lock_head {int dummy; } ;
struct bucket_table {int dummy; } ;


 int FUNC_0 (struct rhash_lock_head*) ;
 scalar_t__ FUNC_1 (struct bucket_table const*,unsigned int) ;

struct rhash_lock_head **FUNC_2(const struct bucket_table *VAR_0,
        unsigned int VAR_1)
{
 static struct rhash_lock_head *VAR_2;

 if (!VAR_2)
  FUNC_0(VAR_2);
 return FUNC_1(VAR_0, VAR_1) ?: &VAR_2;
}
