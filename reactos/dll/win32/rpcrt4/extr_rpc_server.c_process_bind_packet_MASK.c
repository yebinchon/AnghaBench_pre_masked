
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RpcPktHdr ;
typedef int RpcPktBindHdr ;
typedef int RpcConnection ;
typedef scalar_t__ RPC_STATUS ;
typedef int RPC_MESSAGE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ,unsigned char*,int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int *,unsigned char*,int ,int **,unsigned char**,int *) ;

__attribute__((used)) static RPC_STATUS FUNC_4(RpcConnection *VAR_2, RpcPktBindHdr *VAR_3,
                                      RPC_MESSAGE *VAR_4,
                                      unsigned char *VAR_5,
                                      ULONG VAR_6)
{
    RPC_STATUS VAR_7;
    RpcPktHdr *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);
    ULONG VAR_10 = 0;

    VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                                         &VAR_8, &VAR_9,
                                         &VAR_10);
    if (VAR_7 != VAR_1)
        VAR_8 = FUNC_2(VAR_2, VAR_7);
    if (VAR_8)
        VAR_7 = FUNC_1(VAR_2, VAR_8, ((void*)0), 0, VAR_9, VAR_10);
    else
        VAR_7 = VAR_0;
    FUNC_0(VAR_8);

    return VAR_7;
}
