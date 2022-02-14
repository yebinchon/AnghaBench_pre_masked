
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* seed; } ;
typedef TYPE_1__ rand_state ;



__attribute__((used)) static uint32_t
FUNC_0(rand_state *VAR_0)
{
  uint32_t *VAR_1 = VAR_0->seed;
  uint32_t VAR_2 = VAR_1[0];
  uint32_t VAR_3 = VAR_1[1];
  uint32_t VAR_4 = VAR_1[2];
  uint32_t VAR_5;

  VAR_5 = (VAR_2 ^ (VAR_2 << 3)) ^ (VAR_3 ^ (VAR_3 >> 19)) ^ (VAR_4 ^ (VAR_4 << 6));
  VAR_2 = VAR_3; VAR_3 = VAR_4; VAR_4 = VAR_5;
  VAR_1[0] = VAR_2;
  VAR_1[1] = VAR_3;
  VAR_1[2] = VAR_4;

  return VAR_4;
}
