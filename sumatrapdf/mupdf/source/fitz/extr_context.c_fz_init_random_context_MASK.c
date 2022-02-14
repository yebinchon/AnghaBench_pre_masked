
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* seed48; } ;
typedef TYPE_1__ fz_context ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->seed48[0] = 0;
 VAR_0->seed48[1] = 0;
 VAR_0->seed48[2] = 0;
 VAR_0->seed48[3] = 0xe66d;
 VAR_0->seed48[4] = 0xdeec;
 VAR_0->seed48[5] = 0x5;
 VAR_0->seed48[6] = 0xb;

 FUNC_0(VAR_0, (uint32_t)FUNC_1(((void*)0)));
}
