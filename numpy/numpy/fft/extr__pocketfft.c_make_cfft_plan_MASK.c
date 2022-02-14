
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* cfft_plan ;
struct TYPE_5__ {void* packplan; scalar_t__ blueplan; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (int) ;
 scalar_t__ FUNC_4 (size_t) ;
 void* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (size_t) ;

__attribute__((used)) static cfft_plan FUNC_8 (size_t VAR_1)
  {
  if (VAR_1==0) return ((void*)0);
  cfft_plan VAR_2 = FUNC_1(VAR_0,1);
  if (!VAR_2) return ((void*)0);
  VAR_2->blueplan=0;
  VAR_2->packplan=0;
  if ((VAR_1<50) || (FUNC_4(VAR_1)<=FUNC_7(VAR_1)))
    {
    VAR_2->packplan=FUNC_5(VAR_1);
    if (!VAR_2->packplan) { FUNC_0(VAR_2); return ((void*)0); }
    return VAR_2;
    }
  double VAR_3 = FUNC_2(VAR_1);
  double VAR_4 = 2*FUNC_2(FUNC_3(2*VAR_1-1));
  VAR_4*=1.5;
  if (VAR_4<VAR_3)
    {
    VAR_2->blueplan=FUNC_6(VAR_1);
    if (!VAR_2->blueplan) { FUNC_0(VAR_2); return ((void*)0); }
    }
  else
    {
    VAR_2->packplan=FUNC_5(VAR_1);
    if (!VAR_2->packplan) { FUNC_0(VAR_2); return ((void*)0); }
    }
  return VAR_2;
  }
