
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct irq_desc*) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ,unsigned long,char const*,void*) ;
 int FUNC_3 (unsigned int,int *,int ,unsigned long,char const*,void*) ;

int FUNC_4(unsigned int VAR_5, irq_handler_t VAR_6,
       unsigned long VAR_7, const char *VAR_8, void *VAR_9)
{
 struct irq_desc *VAR_10;
 int VAR_11;

 if (VAR_5 == VAR_4)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_5);
 if (!VAR_10)
  return -VAR_0;

 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_3(VAR_5, ((void*)0), VAR_6,
        VAR_7, VAR_8, VAR_9);
  return !VAR_11 ? VAR_3 : VAR_11;
 }

 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 return !VAR_11 ? VAR_2 : VAR_11;
}
