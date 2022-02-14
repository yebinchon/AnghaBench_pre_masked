
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_7__ {unsigned int auth_type; int auth_context_id; int auth_level; } ;
struct TYPE_6__ {int * AuthInfo; int auth_context_id; int ctx; } ;
typedef TYPE_1__ RpcConnection ;
typedef TYPE_2__ RpcAuthVerifier ;
typedef scalar_t__ RPC_STATUS ;
typedef int CredHandle ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 unsigned char* FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned char*) ;
 scalar_t__ FUNC_6 (unsigned int,int *,int *,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int ,unsigned int,int ,int ,int,int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,scalar_t__,unsigned char*,int,unsigned char*,unsigned int*) ;

RPC_STATUS FUNC_12(RpcConnection* VAR_4,
                                       BOOL VAR_5,
                                       RpcAuthVerifier *VAR_6,
                                       ULONG VAR_7,
                                       unsigned char **VAR_8,
                                       ULONG *VAR_9)
{
    unsigned char *VAR_10;
    unsigned int VAR_11;
    RPC_STATUS VAR_12;

    if (VAR_5)
    {

        if (VAR_4->AuthInfo)
        {
            FUNC_8(VAR_4->AuthInfo);
            VAR_4->AuthInfo = ((void*)0);
        }
        if (FUNC_10(&VAR_4->ctx))
        {
            FUNC_0(&VAR_4->ctx);
            FUNC_9(&VAR_4->ctx);
        }
        if (VAR_7 >= sizeof(RpcAuthVerifier))
        {
            CredHandle VAR_13;
            TimeStamp VAR_14;
            ULONG VAR_15;

            VAR_12 = FUNC_6(
                VAR_6->auth_type, &VAR_13, &VAR_14, &VAR_15);
            if (VAR_12 != VAR_0)
            {
                FUNC_1("unknown authentication service %u\n", VAR_6->auth_type);
                return VAR_12;
            }

            VAR_12 = FUNC_7(VAR_6->auth_level,
                                        VAR_6->auth_type, VAR_13, VAR_14,
                                        VAR_15, ((void*)0), &VAR_4->AuthInfo);
            if (VAR_12 != VAR_0)
            {
                FUNC_2(&VAR_13);
                return VAR_12;
            }


            VAR_4->auth_context_id = VAR_6->auth_context_id;
        }
    }

    if (VAR_7 < sizeof(RpcAuthVerifier))
        return VAR_0;

    if (!VAR_4->AuthInfo)

        return VAR_2;

    VAR_12 = FUNC_11(
        VAR_4, VAR_5, (unsigned char *)(VAR_6 + 1),
        VAR_7 - sizeof(RpcAuthVerifier), ((void*)0), &VAR_11);
    if (VAR_12) return VAR_12;

    VAR_10 = FUNC_4(FUNC_3(), 0, VAR_11);
    if (!VAR_10) return VAR_1;

    VAR_12 = FUNC_11(
        VAR_4, VAR_5, (unsigned char *)(VAR_6 + 1),
        VAR_7 - sizeof(RpcAuthVerifier), VAR_10, &VAR_11);
    if (VAR_12 != VAR_0)
    {
        FUNC_5(FUNC_3(), 0, VAR_10);
        return VAR_12;
    }

    if (VAR_11 && !VAR_9)
    {
        FUNC_1("expected authentication to be complete but SSP returned data of "
            "%u bytes to be sent back to client\n", VAR_11);
        FUNC_5(FUNC_3(), 0, VAR_10);
        return VAR_3;
    }
    else
    {
        *VAR_8 = VAR_10;
        *VAR_9 = VAR_11;
    }

    return VAR_12;
}
