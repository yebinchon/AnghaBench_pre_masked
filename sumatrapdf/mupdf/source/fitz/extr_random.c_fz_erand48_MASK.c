
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_3__ {int seed48; } ;
typedef TYPE_1__ fz_context ;


 int FUNC_0 (int *,int ) ;

double FUNC_1(fz_context *VAR_0, uint16_t VAR_1[3])
{
 union {
  uint64_t u;
  double f;
 } VAR_2 = { 0x3ff0000000000000ULL | FUNC_0(VAR_1, VAR_0->seed48+3)<<4 };
 return VAR_2.f - 1.0;
}
