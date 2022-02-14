
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int alpha2; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct regulatory_request *VAR_0)
{
 if (FUNC_1(VAR_0->alpha2) == 0)
  return 1;

 if (FUNC_0(VAR_0->alpha2) == 0)
  return 1;

 return 0;
}
