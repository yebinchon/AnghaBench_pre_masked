
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFlags; } ;
typedef int MIDIMAPDATA ;
typedef TYPE_1__* LPMIDIHDR ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_1(MIDIMAPDATA* VAR_5, LPMIDIHDR VAR_6, DWORD_PTR VAR_7)
{
    if (FUNC_0(VAR_5)) return VAR_2;
    if (VAR_6->dwFlags & (VAR_0|VAR_1))
 return VAR_3;

    VAR_6->dwFlags |= VAR_1;
    return VAR_4;
}
