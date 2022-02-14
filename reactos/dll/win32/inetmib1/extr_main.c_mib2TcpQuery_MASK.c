
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int name; } ;
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
 int FUNC_5 (int *,int *,int,int *) ;
 int FUNC_6 (int ,int ,int *,int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_8(BYTE VAR_7, SnmpVarBind *VAR_8,
    AsnInteger32 *VAR_9)
{
    AsnObjectIdentifier VAR_10 = FUNC_0(VAR_4);
    UINT VAR_11 = 0;
    BOOL VAR_12 = VAR_3;

    FUNC_4("(0x%02x, %s, %p)\n", VAR_7, FUNC_3(&VAR_8->name),
        VAR_9);

    switch (VAR_7)
    {
    case 130:
    case 129:
        *VAR_9 = FUNC_5(&VAR_8->name, &VAR_10, VAR_7,
            &VAR_11);
        if (!*VAR_9)
        {
            *VAR_9 = FUNC_6(VAR_5,
                FUNC_1(VAR_5), &VAR_6, VAR_11, VAR_8);
            if (!*VAR_9 && VAR_7 == 129)
                VAR_12 = FUNC_7(&VAR_8->name, &VAR_10, VAR_11);
        }
        break;
    case 128:
        *VAR_9 = VAR_2;
        VAR_12 = VAR_0;
        break;
    default:
        FUNC_2("0x%02x: unsupported PDU type\n", VAR_7);
        *VAR_9 = VAR_1;
    }
    return VAR_12;
}
