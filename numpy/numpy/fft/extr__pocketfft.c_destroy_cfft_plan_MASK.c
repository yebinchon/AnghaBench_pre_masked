
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* cfft_plan ;
struct TYPE_4__ {scalar_t__ packplan; scalar_t__ blueplan; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3 (cfft_plan VAR_0)
  {
  if (VAR_0->blueplan)
    FUNC_2(VAR_0->blueplan);
  if (VAR_0->packplan)
    FUNC_1(VAR_0->packplan);
  FUNC_0(VAR_0);
  }
