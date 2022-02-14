
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int UINT_PTR ;
struct TYPE_10__ {int * pFormatTypes; } ;
struct TYPE_9__ {int BufferLength; scalar_t__ BufferStart; scalar_t__ Buffer; TYPE_1__* RpcMsg; } ;
struct TYPE_8__ {scalar_t__ Buffer; } ;
typedef int RPC_MESSAGE ;
typedef TYPE_2__ MIDL_STUB_MESSAGE ;
typedef TYPE_3__ MIDL_STUB_DESC ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,unsigned char const*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_5 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(void)
{
    RPC_MESSAGE VAR_2;
    MIDL_STUB_MESSAGE VAR_3;
    MIDL_STUB_DESC VAR_4;
    char VAR_5 = 0xde;

    static const unsigned char VAR_6[] =
    {
        0x12, 0x8,
        0x2,
        0x5c,
    };

    VAR_4 = VAR_0;
    VAR_4.pFormatTypes = ((void*)0);

    FUNC_3(
                           &VAR_2,
                           &VAR_3,
                           &VAR_4,
                           0);

    VAR_3.BufferLength = 8;
    VAR_3.RpcMsg->Buffer = VAR_3.BufferStart = VAR_3.Buffer = FUNC_1(FUNC_0(), 0, VAR_3.BufferLength);
    FUNC_4(&VAR_3, (unsigned char*)&VAR_5, VAR_6);
    FUNC_5(VAR_3.Buffer == VAR_3.BufferStart + 5, "%p %p\n", VAR_3.Buffer, VAR_3.BufferStart);

    VAR_1 = (*(unsigned int *)VAR_3.BufferStart != (UINT_PTR)&VAR_5);
    FUNC_6("Pointer marshalling using %s\n", VAR_1 ? "pointer ids" : "pointer value");

    FUNC_2(FUNC_0(), 0, VAR_3.BufferStart);
}
