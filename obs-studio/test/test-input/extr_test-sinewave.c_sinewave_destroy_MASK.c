
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sinewave_data {int event; int thread; scalar_t__ initialized_thread; } ;


 int FUNC_0 (struct sinewave_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void**) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct sinewave_data *VAR_1 = VAR_0;

 if (VAR_1) {
  if (VAR_1->initialized_thread) {
   void *VAR_2;
   FUNC_2(VAR_1->event);
   FUNC_3(VAR_1->thread, &VAR_2);
  }

  FUNC_1(VAR_1->event);
  FUNC_0(VAR_1);
 }
}
