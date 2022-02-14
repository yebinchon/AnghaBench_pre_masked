
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag {int run_display; scalar_t__ display; } ;


 int FUNC_0 (struct swaynag*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct swaynag *VAR_0) {
 VAR_0->run_display = 1;
 FUNC_0(VAR_0);
 while (VAR_0->run_display
   && FUNC_2(VAR_0->display) != -1) {

 }

 if (VAR_0->display) {
  FUNC_1(VAR_0->display);
 }
}
