
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct GenericTable {int dummy; } ;
typedef int UINT ;
struct TYPE_8__ {TYPE_3__* table; } ;
struct TYPE_7__ {int dwForwardDest; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ SnmpVarBind ;
typedef int MIB_IPFORWARDROW ;
typedef int BYTE ;
typedef int BOOL ;
typedef int AsnObjectIdentifier ;
typedef int AsnInteger32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int,int,struct GenericTable*,int,int ,int ,int *,int *) ;
 TYPE_5__* VAR_5 ;
 int FUNC_7 (int ,int ,TYPE_3__*,int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_9(BYTE VAR_9, SnmpVarBind *VAR_10,
    AsnInteger32 *VAR_11)
{
    AsnObjectIdentifier VAR_12 = FUNC_0(VAR_6);
    UINT VAR_13 = 0, VAR_14 = 0;
    BOOL VAR_15 = VAR_3;

    FUNC_4("(0x%02x, %s, %p)\n", VAR_9, FUNC_3(&VAR_10->name),
        VAR_11);

    switch (VAR_9)
    {
    case 130:
    case 129:
        *VAR_11 = FUNC_6(&VAR_10->name,
            &VAR_12, 4, VAR_9, (struct GenericTable *)VAR_5,
            sizeof(MIB_IPFORWARDROW), VAR_8, VAR_4,
            &VAR_14, &VAR_13);
        if (!*VAR_11)
        {
            FUNC_5(VAR_13);
            FUNC_5(VAR_14);
            *VAR_11 = FUNC_7(VAR_7,
                FUNC_1(VAR_7),
                &VAR_5->table[VAR_13 - 1], VAR_14, VAR_10);
            if (!*VAR_11 && VAR_9 == 129)
                VAR_15 = FUNC_8(&VAR_10->name, &VAR_12, VAR_14,
                    VAR_5->table[VAR_13 - 1].dwForwardDest);
        }
        break;
    case 128:
        *VAR_11 = VAR_2;
        VAR_15 = VAR_0;
        break;
    default:
        FUNC_2("0x%02x: unsupported PDU type\n", VAR_9);
        *VAR_11 = VAR_1;
    }
    return VAR_15;
}
