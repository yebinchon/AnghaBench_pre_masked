
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int tbl; } ;
struct rhash_lock_head {int dummy; } ;
struct bucket_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rhashtable*,struct rhash_lock_head**,unsigned int) ;
 struct rhash_lock_head** FUNC_1 (struct bucket_table*,unsigned int) ;
 struct bucket_table* FUNC_2 (int ,struct rhashtable*) ;
 int FUNC_3 (struct bucket_table*,struct rhash_lock_head**) ;
 int FUNC_4 (struct bucket_table*,struct rhash_lock_head**) ;

__attribute__((used)) static int FUNC_5(struct rhashtable *VAR_1,
        unsigned int VAR_2)
{
 struct bucket_table *VAR_3 = FUNC_2(VAR_1->tbl, VAR_1);
 struct rhash_lock_head **VAR_4 = FUNC_1(VAR_3, VAR_2);
 int VAR_5;

 if (!VAR_4)
  return 0;
 FUNC_3(VAR_3, VAR_4);

 while (!(VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_2)))
  ;

 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 FUNC_4(VAR_3, VAR_4);

 return VAR_5;
}
