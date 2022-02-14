
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fccType; scalar_t__ fccComp; } ;
typedef TYPE_1__* PACMDRVOPENDESCW ;
typedef int LPCSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_1(LPCSTR VAR_2, PACMDRVOPENDESCW VAR_3)
{
    FUNC_0("(%p, %p)\n", VAR_2, VAR_3);

    return (VAR_3 == ((void*)0)) ||
 (VAR_3->fccType == VAR_1 &&
  VAR_3->fccComp == VAR_0);
}
