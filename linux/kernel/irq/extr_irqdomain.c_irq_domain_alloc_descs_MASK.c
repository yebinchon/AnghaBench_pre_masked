
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity_desc {int dummy; } ;
typedef unsigned int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,unsigned int,int,int ,struct irq_affinity_desc const*) ;
 unsigned int VAR_1 ;

int FUNC_1(int VAR_2, unsigned int VAR_3, irq_hw_number_t VAR_4,
      int VAR_5, const struct irq_affinity_desc *VAR_6)
{
 unsigned int VAR_7;

 if (VAR_2 >= 0) {
  VAR_2 = FUNC_0(VAR_2, VAR_2, VAR_3, VAR_5, VAR_0,
      VAR_6);
 } else {
  VAR_7 = VAR_4 % VAR_1;
  if (VAR_7 == 0)
   VAR_7++;
  VAR_2 = FUNC_0(-1, VAR_7, VAR_3, VAR_5, VAR_0,
      VAR_6);
  if (VAR_2 <= 0 && VAR_7 > 1) {
   VAR_2 = FUNC_0(-1, 1, VAR_3, VAR_5, VAR_0,
       VAR_6);
  }
 }

 return VAR_2;
}
