
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {scalar_t__ BufferLength; } ;
struct TYPE_7__ {int SyntaxGUID; } ;
struct TYPE_8__ {TYPE_1__ ActiveInterface; } ;
typedef int RpcPktCommonHdr ;
typedef TYPE_2__ RpcConnection ;
typedef int RpcAuthVerifier ;
typedef int RPC_STATUS ;
typedef TYPE_3__ RPC_MESSAGE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static RPC_STATUS FUNC_2(RpcConnection *VAR_3,
                                       RpcPktCommonHdr *VAR_4,
                                       RPC_MESSAGE *VAR_5,
                                       unsigned char *VAR_6,
                                       ULONG VAR_7)
{
    RPC_STATUS VAR_8;

    if (FUNC_1(&VAR_3->ActiveInterface.SyntaxGUID, &VAR_8) ||
        !VAR_7 || VAR_5->BufferLength != 0)
        VAR_8 = VAR_2;
    else
    {
        VAR_8 = FUNC_0(VAR_3, VAR_0,
                                             (RpcAuthVerifier *)VAR_6,
                                             VAR_7, ((void*)0), ((void*)0));
    }





    return VAR_1;
}
