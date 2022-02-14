
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity {unsigned int pre_vectors; unsigned int post_vectors; scalar_t__ calc_sets; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 () ;

unsigned int FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
           const struct irq_affinity *VAR_3)
{
 unsigned int VAR_4 = VAR_3->pre_vectors + VAR_3->post_vectors;
 unsigned int VAR_5;

 if (VAR_4 > VAR_1)
  return 0;

 if (VAR_3->calc_sets) {
  VAR_5 = VAR_2 - VAR_4;
 } else {
  FUNC_1();
  VAR_5 = FUNC_0(VAR_0);
  FUNC_3();
 }

 return VAR_4 + FUNC_2(VAR_5, VAR_2 - VAR_4);
}
