
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int irq_callback_data; int (* irq_callback ) (int ,unsigned int) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct hw *VAR_5 = VAR_4;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (!VAR_6)
  return VAR_2;

 if (VAR_5->irq_callback)
  VAR_5->irq_callback(VAR_5->irq_callback_data, VAR_6);

 FUNC_1(VAR_5, VAR_0, VAR_6);
 return VAR_1;
}
