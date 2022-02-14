
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dev_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct device*) ;
 struct irq_desc* FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

void FUNC_3(int VAR_1, struct device *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_1(VAR_1);
 const char *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4)
  VAR_3->dev_name = FUNC_2(VAR_4, VAR_0);
}
