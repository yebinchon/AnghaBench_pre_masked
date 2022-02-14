
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* tp_dummy; size_t destTape; int* tp_fib; int tapeRange; int Level; } ;
typedef TYPE_1__ Tuplesortstate ;



__attribute__((used)) static void
FUNC_0(Tuplesortstate *VAR_0)
{
 int VAR_1;
 int VAR_2;


 if (VAR_0->tp_dummy[VAR_0->destTape] < VAR_0->tp_dummy[VAR_0->destTape + 1])
 {
  VAR_0->destTape++;
  return;
 }
 if (VAR_0->tp_dummy[VAR_0->destTape] != 0)
 {
  VAR_0->destTape = 0;
  return;
 }


 VAR_0->Level++;
 VAR_2 = VAR_0->tp_fib[0];
 for (VAR_1 = 0; VAR_1 < VAR_0->tapeRange; VAR_1++)
 {
  VAR_0->tp_dummy[VAR_1] = VAR_2 + VAR_0->tp_fib[VAR_1 + 1] - VAR_0->tp_fib[VAR_1];
  VAR_0->tp_fib[VAR_1] = VAR_2 + VAR_0->tp_fib[VAR_1 + 1];
 }
 VAR_0->destTape = 0;
}
