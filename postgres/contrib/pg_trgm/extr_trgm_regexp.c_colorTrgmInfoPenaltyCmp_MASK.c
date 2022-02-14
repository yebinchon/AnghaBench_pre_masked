
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ float4 ;
struct TYPE_2__ {scalar_t__ penalty; } ;
typedef TYPE_1__ ColorTrgmInfo ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 float4 VAR_2 = ((const ColorTrgmInfo *) VAR_0)->penalty;
 float4 VAR_3 = ((const ColorTrgmInfo *) VAR_1)->penalty;

 if (VAR_2 < VAR_3)
  return 1;
 else if (VAR_2 == VAR_3)
  return 0;
 else
  return -1;
}
