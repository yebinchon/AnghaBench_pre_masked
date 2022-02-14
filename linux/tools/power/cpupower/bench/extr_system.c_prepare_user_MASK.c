
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {unsigned int rounds; int cycles; unsigned int sleep; unsigned int sleep_step; int load; unsigned int load_step; scalar_t__ output; scalar_t__ verbose; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;

void FUNC_1(const struct config *VAR_1)
{
 unsigned long VAR_2 = 0;
 unsigned long VAR_3 = 0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->rounds; VAR_4++) {
  VAR_2 += 2 * VAR_1->cycles *
   (VAR_1->sleep + VAR_1->sleep_step * VAR_4);
  VAR_3 += 2 * VAR_1->cycles *
   (VAR_1->load + VAR_1->load_step * VAR_4) +
   (VAR_1->load + VAR_1->load_step * VAR_4 * 4);
 }

 if (VAR_1->verbose || VAR_1->output != VAR_0)
  FUNC_0("approx. test duration: %im\n",
         (int)((VAR_2 + VAR_3) / 60000000));
}
