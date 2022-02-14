
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bDescr; scalar_t__ dwDescrLen; } ;
typedef TYPE_1__* PMIB_IFROW ;
typedef int DWORD ;
typedef int BYTE ;
typedef int AsnAny ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static DWORD FUNC_2(AsnAny *VAR_5, void *VAR_6)
{
    PMIB_IFROW VAR_7 = (PMIB_IFROW)((BYTE *)VAR_6 -
                                  FUNC_0(VAR_1, VAR_4));
    DWORD VAR_8;

    if (VAR_7->dwDescrLen)
    {
        FUNC_1(VAR_5, VAR_0, VAR_7->dwDescrLen, VAR_7->bDescr);
        VAR_8 = VAR_2;
    }
    else
        VAR_8 = VAR_3;
    return VAR_8;
}
