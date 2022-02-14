
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ a; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef TYPE_1__ D3DXCOLOR ;
typedef int BOOL ;


 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(D3DXCOLOR VAR_0, D3DXCOLOR VAR_1, float VAR_2)
{
  return (FUNC_0(VAR_0.r - VAR_1.r) < VAR_2 && FUNC_0(VAR_0.g - VAR_1.g) < VAR_2 && FUNC_0(VAR_0.b - VAR_1.b) < VAR_2 &&
          FUNC_0(VAR_0.a - VAR_1.a) < VAR_2);
}
