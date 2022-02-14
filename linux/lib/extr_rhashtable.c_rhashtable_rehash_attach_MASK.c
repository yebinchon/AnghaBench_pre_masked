
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct bucket_table {int future_tbl; } ;


 int VAR_0 ;
 int * FUNC_0 (struct bucket_table**,int *,struct bucket_table*) ;

__attribute__((used)) static int FUNC_1(struct rhashtable *VAR_1,
        struct bucket_table *VAR_2,
        struct bucket_table *VAR_3)
{






 if (FUNC_0((struct bucket_table **)&VAR_2->future_tbl, ((void*)0),
      VAR_3) != ((void*)0))
  return -VAR_0;

 return 0;
}
