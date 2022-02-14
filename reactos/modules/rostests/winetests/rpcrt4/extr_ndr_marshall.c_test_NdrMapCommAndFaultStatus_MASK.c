
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int RPC_STATUS ;
typedef int RPC_MESSAGE ;
typedef int MIDL_STUB_MESSAGE ;




 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;



 int VAR_1 ;







 int FUNC_2 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    RPC_STATUS VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    RPC_MESSAGE VAR_4;

    FUNC_0(&VAR_4, &VAR_3, &VAR_0, 5);

    for (VAR_2 = 0; VAR_2 < 10000; VAR_2++)
    {
        RPC_STATUS VAR_5;
        ULONG VAR_6 = 0;
        ULONG VAR_7 = 0;
        ULONG VAR_8 = 0;
        ULONG VAR_9 = 0;
        VAR_5 = FUNC_1(&VAR_3, &VAR_6, &VAR_7, VAR_2);
        FUNC_2(VAR_5 == VAR_1, "NdrMapCommAndFaultStatus failed with error %d\n", VAR_5);
        switch (VAR_2)
        {
        case 138:
        case 135:
        case 130:
        case 131:
        case 132:
        case 137:
        case 133:
        case 129:
        case 128:
        case 134:
        case 139:
        case 136:
            VAR_8 = VAR_2;
            break;
        default:
            VAR_9 = VAR_2;
        }
        FUNC_2(VAR_6 == VAR_8, "NdrMapCommAndFaultStatus should have mapped %d to comm status %d instead of %d\n",
            VAR_2, VAR_8, VAR_6);
        FUNC_2(VAR_7 == VAR_9, "NdrMapCommAndFaultStatus should have mapped %d to fault status %d instead of %d\n",
            VAR_2, VAR_9, VAR_7);
    }
}
