
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* seed; } ;
typedef TYPE_1__ rand_state ;



__attribute__((used)) static void
FUNC_0(rand_state *VAR_0)
{
  VAR_0->seed[0] = 123456789;
  VAR_0->seed[1] = 362436069;
  VAR_0->seed[2] = 521288629;

  VAR_0->seed[3] = 88675123;

}
