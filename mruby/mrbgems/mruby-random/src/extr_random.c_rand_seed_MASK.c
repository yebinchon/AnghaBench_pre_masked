
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * seed; } ;
typedef TYPE_1__ rand_state ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint32_t
FUNC_1(rand_state *VAR_1, uint32_t VAR_2)
{
  uint32_t VAR_3 = VAR_1->seed[VAR_0];
  FUNC_0(VAR_1);
  VAR_1->seed[VAR_0] = VAR_2;
  return VAR_3;
}
