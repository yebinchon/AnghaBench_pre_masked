
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ float4 ;
typedef double Selectivity ;



__attribute__((used)) static Selectivity
FUNC_0(float4 *VAR_0, int VAR_1)
{
 Selectivity VAR_2 = 0.0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_2 += VAR_0[VAR_3];
 }

 return VAR_2;
}
