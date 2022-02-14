
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct GenericTable {int dummy; } ;
typedef int UINT ;
struct TYPE_14__ {int dwLocalPort; int dwLocalAddr; } ;
struct TYPE_13__ {TYPE_6__* table; } ;
struct TYPE_12__ {int idLength; int * ids; } ;
struct TYPE_11__ {int name; } ;
typedef TYPE_1__ SnmpVarBind ;
typedef int MIB_UDPROW ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_2__ AsnObjectIdentifier ;
typedef int AsnInteger32 ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int *,TYPE_2__*,int,int,struct GenericTable*,int,int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ,TYPE_6__*,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,TYPE_2__*,int ,int ) ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static BOOL FUNC_10(BYTE VAR_9, SnmpVarBind *VAR_10,
    AsnInteger32 *VAR_11)
{
    AsnObjectIdentifier VAR_12 = FUNC_0(VAR_5);
    BOOL VAR_13 = VAR_3;

    FUNC_5("(0x%02x, %s, %p)\n", VAR_9, FUNC_4(&VAR_10->name),
        VAR_11);

    switch (VAR_9)
    {
    case 130:
    case 129:
        if (!VAR_8)
            *VAR_11 = VAR_1;
        else
        {
            UINT VAR_14 = 0, VAR_15 = 0;

            *VAR_11 = FUNC_7(&VAR_10->name, &VAR_12,
                5, VAR_9, (struct GenericTable *)VAR_8,
                sizeof(MIB_UDPROW), VAR_7, VAR_4, &VAR_15,
                &VAR_14);
            if (!*VAR_11)
            {
                FUNC_6(VAR_14);
                FUNC_6(VAR_15);
                *VAR_11 = FUNC_8(VAR_6,
                    FUNC_1(VAR_6),
                    &VAR_8->table[VAR_14 - 1], VAR_15, VAR_10);
                if (!*VAR_11 && VAR_9 == 129)
                {
                    AsnObjectIdentifier VAR_16;

                    VAR_13 = FUNC_9(&VAR_10->name, &VAR_12, VAR_15,
                        VAR_8->table[VAR_14 - 1].dwLocalAddr);
                    if (VAR_13)
                    {
                        VAR_16.idLength = 1;
                        VAR_16.ids = &VAR_8->table[VAR_14 - 1].dwLocalPort;
                        VAR_13 = FUNC_3(&VAR_10->name, &VAR_16);
                    }
                }
            }
        }
        break;
    case 128:
        *VAR_11 = VAR_2;
        VAR_13 = VAR_0;
        break;
    default:
        FUNC_2("0x%02x: unsupported PDU type\n", VAR_9);
        *VAR_11 = VAR_1;
    }
    return VAR_13;
}
