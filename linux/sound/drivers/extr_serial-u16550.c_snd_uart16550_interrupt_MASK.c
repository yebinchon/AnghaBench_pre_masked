
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {scalar_t__ filemode; int open_lock; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_uart16550*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct snd_uart16550 *VAR_6;

 VAR_6 = VAR_5;
 FUNC_2(&VAR_6->open_lock);
 if (VAR_6->filemode == VAR_2) {
  FUNC_3(&VAR_6->open_lock);
  return VAR_1;
 }

 FUNC_0(VAR_6->base + VAR_3);
 FUNC_1(VAR_6);
 FUNC_3(&VAR_6->open_lock);
 return VAR_0;
}
