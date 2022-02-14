
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int min_size; } ;
struct rhashtable {TYPE_1__ p; int nelems; int tbl; } ;
struct bucket_table {unsigned int size; int future_tbl; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct rhashtable*,struct bucket_table*,unsigned int) ;
 struct bucket_table* FUNC_2 (int ,struct rhashtable*) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct rhashtable *VAR_1)
{
 struct bucket_table *VAR_2 = FUNC_2(VAR_1->tbl, VAR_1);
 unsigned int VAR_3 = FUNC_0(&VAR_1->nelems);
 unsigned int VAR_4 = 0;

 if (VAR_3)
  VAR_4 = FUNC_3(VAR_3 * 3 / 2);
 if (VAR_4 < VAR_1->p.min_size)
  VAR_4 = VAR_1->p.min_size;

 if (VAR_2->size <= VAR_4)
  return 0;

 if (FUNC_2(VAR_2->future_tbl, VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_4);
}
