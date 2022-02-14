
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RpcPktHdr ;
typedef int RpcConnection ;
typedef int RPC_STATUS ;




 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int * FUNC_1 (int ,int ,int ,unsigned int) ;





 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static RpcPktHdr *FUNC_2(RpcConnection *VAR_9, RPC_STATUS VAR_10)
{
    unsigned int VAR_11;
    switch (VAR_10)
    {
    case 129:
        VAR_11 = VAR_5;
        break;
    case 133:
    case 131:
        VAR_11 = VAR_2;
        break;
    case 130:
        VAR_11 = VAR_3;
        break;
    case 128:
        VAR_11 = VAR_6;
        break;
    case 134:
        VAR_11 = VAR_1;
        break;
    default:
        FUNC_0("unexpected status value %d\n", VAR_10);

    case 132:
        VAR_11 = VAR_4;
        break;
    }
    return FUNC_1(VAR_0,
                                      VAR_7, VAR_8,
                                      VAR_11);
}
