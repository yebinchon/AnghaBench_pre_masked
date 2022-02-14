
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * pFormatTypes; } ;
struct TYPE_10__ {int BufferLength; int BufferStart; int Buffer; TYPE_1__* RpcMsg; } ;
struct TYPE_9__ {int Buffer; } ;
typedef int RPC_MESSAGE ;
typedef TYPE_2__ MIDL_STUB_MESSAGE ;
typedef TYPE_3__ MIDL_STUB_DESC ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_6 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    RPC_MESSAGE VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    MIDL_STUB_DESC VAR_4;
    LONG VAR_5, VAR_6 = 0;

    VAR_4 = VAR_1;
    VAR_4.pFormatTypes = ((void*)0);

    FUNC_3(
                           &VAR_2,
                           &VAR_3,
                           &VAR_4,
                           0);

    VAR_3.BufferLength = 16;
    VAR_3.RpcMsg->Buffer = VAR_3.BufferStart = VAR_3.Buffer = FUNC_1(FUNC_0(), 0, VAR_3.BufferLength);
    VAR_5 = 0xcafebabe;
    FUNC_4(&VAR_3, (unsigned char*)&VAR_5, VAR_0);
    FUNC_6(VAR_3.Buffer == VAR_3.BufferStart + 4, "%p %p\n", VAR_3.Buffer, VAR_3.BufferStart);
    FUNC_6(*(LONG*)VAR_3.BufferStart == VAR_5, "%d\n", *(LONG*)VAR_3.BufferStart);

    VAR_3.Buffer = VAR_3.BufferStart + 1;
    FUNC_4(&VAR_3, (unsigned char*)&VAR_5, VAR_0);
    FUNC_6(VAR_3.Buffer == VAR_3.BufferStart + 8, "%p %p\n", VAR_3.Buffer, VAR_3.BufferStart);
    FUNC_6(*(LONG*)(VAR_3.BufferStart + 4) == VAR_5, "%d\n", *(LONG*)VAR_3.BufferStart);

    VAR_3.Buffer = VAR_3.BufferStart + 1;
    FUNC_5(&VAR_3, (unsigned char*)&VAR_6, VAR_0);
    FUNC_6(VAR_3.Buffer == VAR_3.BufferStart + 8, "%p %p\n", VAR_3.Buffer, VAR_3.BufferStart);
    FUNC_6(VAR_6 == VAR_5, "%d\n", VAR_6);

    FUNC_2(FUNC_0(), 0, VAR_3.BufferStart);
}
