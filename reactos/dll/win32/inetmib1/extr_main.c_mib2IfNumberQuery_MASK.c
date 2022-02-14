
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dwNumEntries; } ;
struct TYPE_9__ {int idLength; } ;
struct TYPE_8__ {int name; int value; } ;
typedef TYPE_1__ SnmpVarBind ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_2__ AsnObjectIdentifier ;
typedef int AsnInteger32 ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ,int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *) ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_8(BYTE VAR_7, SnmpVarBind *VAR_8,
    AsnInteger32 *VAR_9)
{
    AsnObjectIdentifier VAR_10 = FUNC_0(VAR_6);
    BOOL VAR_11 = VAR_4;

    FUNC_6("(0x%02x, %s, %p)\n", VAR_7, FUNC_5(&VAR_8->name),
        VAR_9);

    switch (VAR_7)
    {
    case 130:
    case 129:
        if ((VAR_7 == 130 &&
            !FUNC_4(&VAR_8->name, &VAR_10, VAR_10.idLength))
            || FUNC_4(&VAR_8->name, &VAR_10, VAR_10.idLength)
            < 0)
        {
            DWORD VAR_12 = VAR_5 ? VAR_5->dwNumEntries : 0;

            FUNC_7(&VAR_8->value, &VAR_12);
            if (VAR_7 == 129)
            {
                FUNC_3(&VAR_8->name);
                FUNC_2(&VAR_8->name, &VAR_10);
            }
            *VAR_9 = VAR_1;
        }
        else
        {
            *VAR_9 = VAR_2;



        }
        break;
    case 128:
        *VAR_9 = VAR_3;
        VAR_11 = VAR_0;
        break;
    default:
        FUNC_1("0x%02x: unsupported PDU type\n", VAR_7);
        *VAR_9 = VAR_2;
    }
    return VAR_11;
}
