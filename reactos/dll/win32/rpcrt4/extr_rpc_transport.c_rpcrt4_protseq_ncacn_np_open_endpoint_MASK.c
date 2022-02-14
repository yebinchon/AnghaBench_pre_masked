
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int generated_endpoint ;
typedef int ULONG ;
struct TYPE_9__ {TYPE_1__* protseq; int protseq_entry; int Endpoint; } ;
struct TYPE_8__ {void* listen_pipe; } ;
struct TYPE_7__ {int cs; int listeners; int Protseq; } ;
typedef TYPE_1__ RpcServerProtseq ;
typedef TYPE_2__ RpcConnection_np ;
typedef TYPE_3__ RpcConnection ;
typedef scalar_t__ RPC_STATUS ;
typedef int LONG ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__**,int ,int ,int *,char const*,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int ,...) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,int,char*,int,int) ;

__attribute__((used)) static RPC_STATUS FUNC_9(RpcServerProtseq *VAR_2, const char *VAR_3)
{
  RPC_STATUS VAR_4;
  RpcConnection *VAR_5;
  char VAR_6[26];

  if (!VAR_3)
  {
    static LONG VAR_7;
    DWORD VAR_8 = FUNC_1();
    ULONG VAR_9 = FUNC_2(&VAR_7, 1 );
    FUNC_8(VAR_6, sizeof(VAR_6),
             "\\\\pipe\\\\%08x.%03x", VAR_8, VAR_9);
    VAR_3 = VAR_6;
  }

  VAR_4 = FUNC_4(&VAR_5, VAR_1, VAR_2->Protseq, ((void*)0),
                              VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_4 != VAR_0)
    return VAR_4;




  ((RpcConnection_np*)VAR_5)->listen_pipe = FUNC_6(VAR_5->Endpoint);

  VAR_4 = FUNC_7(VAR_5);

  FUNC_0(&VAR_2->cs);
  FUNC_5(&VAR_2->listeners, &VAR_5->protseq_entry);
  VAR_5->protseq = VAR_2;
  FUNC_3(&VAR_2->cs);

  return VAR_4;
}
