
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int idLength; int * ids; } ;
typedef scalar_t__ INT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_1__ AsnObjectIdentifier ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static INT FUNC_2(AsnObjectIdentifier *VAR_0,
    AsnObjectIdentifier *VAR_1, UINT VAR_2, DWORD VAR_3)
{
    UINT VAR_4;
    BYTE *VAR_5;
    AsnObjectIdentifier VAR_6;
    INT VAR_7;

    VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_7)
    {
        VAR_6.idLength = 1;
        VAR_6.ids = &VAR_4;
        for (VAR_5 = (BYTE *)&VAR_3; VAR_7 && VAR_5 < (BYTE *)&VAR_3 + sizeof(DWORD);
         VAR_5++)
        {
            VAR_4 = *VAR_5;
            VAR_7 = FUNC_0(VAR_0, &VAR_6);
        }
    }
    return VAR_7;
}
