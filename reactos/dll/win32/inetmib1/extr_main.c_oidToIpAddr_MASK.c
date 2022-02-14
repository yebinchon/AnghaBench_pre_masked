
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idLength; scalar_t__* ids; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_1__ AsnObjectIdentifier ;


 int FUNC_0 (int ) ;

__attribute__((used)) static DWORD FUNC_1(AsnObjectIdentifier *VAR_0)
{
    FUNC_0(VAR_0 && VAR_0->idLength >= 4);

    return (BYTE)VAR_0->ids[3] << 24 | (BYTE)VAR_0->ids[2] << 16 |
        (BYTE)VAR_0->ids[1] << 8 | (BYTE)VAR_0->ids[0];
}
