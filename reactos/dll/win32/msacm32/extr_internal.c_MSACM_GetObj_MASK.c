
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINE_ACMOBJ ;
struct TYPE_4__ {scalar_t__ dwType; } ;
typedef TYPE_1__* PWINE_ACMOBJ ;
typedef int HACMOBJ ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;

PWINE_ACMOBJ FUNC_1(HACMOBJ VAR_1, DWORD VAR_2)
{
    PWINE_ACMOBJ VAR_3 = (PWINE_ACMOBJ)VAR_1;

    if (VAR_3 == ((void*)0) || FUNC_0(VAR_3, sizeof(WINE_ACMOBJ)) ||
 ((VAR_2 != VAR_0) && (VAR_2 != VAR_3->dwType)))
 return ((void*)0);
    return VAR_3;
}
