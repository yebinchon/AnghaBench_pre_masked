
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int dwNumEntries; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ SnmpVarBind ;
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
 int FUNC_6 (int *,int *,int,int *,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_7 (int ,int ,TYPE_3__*,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *,int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_9(BYTE VAR_7, SnmpVarBind *VAR_8,
    AsnInteger32 *VAR_9)
{
    AsnObjectIdentifier VAR_10 = FUNC_0(VAR_5);
    BOOL VAR_11 = VAR_3;

    FUNC_4("(0x%02x, %s, %p)\n", VAR_7, FUNC_3(&VAR_8->name),
        VAR_9);

    switch (VAR_7)
    {
    case 130:
    case 129:
        if (!VAR_4)
            *VAR_9 = VAR_1;
        else
        {
            UINT VAR_12 = 0, VAR_13 = 0;

            *VAR_9 = FUNC_6(&VAR_8->name,
                &VAR_10, VAR_7, &VAR_13, &VAR_12);
            if (!*VAR_9)
            {
                FUNC_5(VAR_12);
                FUNC_5(VAR_13);
                if (VAR_12 > VAR_4->dwNumEntries)
                    *VAR_9 = VAR_1;
                else
                {
                    *VAR_9 = FUNC_7(VAR_6,
                        FUNC_1(VAR_6),
                        &VAR_4[VAR_12 - 1], VAR_13, VAR_8);
                    if (!*VAR_9 && VAR_7 == 129)
                        VAR_11 = FUNC_8(&VAR_8->name, &VAR_10,
                            VAR_13, VAR_12);
                }
            }
        }
        break;
    case 128:
        *VAR_9 = VAR_2;
        VAR_11 = VAR_0;
        break;
    default:
        FUNC_2("0x%02x: unsupported PDU type\n", VAR_7);
        *VAR_9 = VAR_1;
    }
    return VAR_11;
}
