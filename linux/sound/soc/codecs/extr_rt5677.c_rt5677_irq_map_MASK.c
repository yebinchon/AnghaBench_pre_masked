
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5677_priv {int dummy; } ;
struct irq_domain {struct rt5677_priv* host_data; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,struct rt5677_priv*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_1, unsigned int VAR_2,
     irq_hw_number_t VAR_3)
{
 struct rt5677_priv *VAR_4 = VAR_1->host_data;

 FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_2, &VAR_0);
 FUNC_2(VAR_2, 1);
 FUNC_3(VAR_2);
 return 0;
}
