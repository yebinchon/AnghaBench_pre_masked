
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int min_alloc_order; int * name; int * data; int algo; int chunks; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct gen_pool* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

struct gen_pool *FUNC_3(int VAR_2, int VAR_3)
{
 struct gen_pool *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct gen_pool), VAR_0, VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(&VAR_4->lock);
  FUNC_0(&VAR_4->chunks);
  VAR_4->min_alloc_order = VAR_2;
  VAR_4->algo = VAR_1;
  VAR_4->data = ((void*)0);
  VAR_4->name = ((void*)0);
 }
 return VAR_4;
}
