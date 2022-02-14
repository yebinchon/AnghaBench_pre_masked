
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity_desc {int is_managed; int mask; } ;
struct irq_affinity {unsigned int pre_vectors; unsigned int post_vectors; unsigned int nr_sets; unsigned int* set_size; int (* calc_sets ) (struct irq_affinity*,unsigned int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct irq_affinity*,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,struct irq_affinity_desc*) ;
 int VAR_2 ;
 struct irq_affinity_desc* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct irq_affinity_desc*) ;
 int FUNC_6 (struct irq_affinity*,unsigned int) ;

struct irq_affinity_desc *
FUNC_7(unsigned int VAR_3, struct irq_affinity *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 struct irq_affinity_desc *VAR_9 = ((void*)0);







 if (VAR_3 > VAR_4->pre_vectors + VAR_4->post_vectors)
  VAR_5 = VAR_3 - VAR_4->pre_vectors - VAR_4->post_vectors;
 else
  VAR_5 = 0;





 if (!VAR_4->calc_sets)
  VAR_4->calc_sets = FUNC_2;


 VAR_4->calc_sets(VAR_4, VAR_5);

 if (FUNC_0(VAR_4->nr_sets > VAR_1))
  return ((void*)0);


 if (!VAR_5)
  return ((void*)0);

 VAR_9 = FUNC_4(VAR_3, sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_4->pre_vectors; VAR_6++)
  FUNC_1(&VAR_9[VAR_6].mask, VAR_2);





 for (VAR_8 = 0, VAR_7 = 0; VAR_8 < VAR_4->nr_sets; VAR_8++) {
  unsigned int VAR_10 = VAR_4->set_size[VAR_8];
  int VAR_11;

  VAR_11 = FUNC_3(VAR_6, VAR_10,
            VAR_6, VAR_9);
  if (VAR_11) {
   FUNC_5(VAR_9);
   return ((void*)0);
  }
  VAR_6 += VAR_10;
  VAR_7 += VAR_10;
 }


 if (VAR_7 >= VAR_5)
  VAR_6 = VAR_4->pre_vectors + VAR_5;
 else
  VAR_6 = VAR_4->pre_vectors + VAR_7;
 for (; VAR_6 < VAR_3; VAR_6++)
  FUNC_1(&VAR_9[VAR_6].mask, VAR_2);


 for (VAR_8 = VAR_4->pre_vectors; VAR_8 < VAR_3 - VAR_4->post_vectors; VAR_8++)
  VAR_9[VAR_8].is_managed = 1;

 return VAR_9;
}
