
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int msg ;
struct TYPE_4__ {int iMethod; scalar_t__ Buffer; int dataRepresentation; } ;
typedef TYPE_1__ RPCOLEMESSAGE ;
typedef int IUnknown ;
typedef int ITypeLibVtbl ;
typedef int IRpcStubBuffer ;
typedef int IRpcChannelBufferVtbl ;
typedef int IRpcChannelBuffer ;
typedef int IPSFactoryBuffer ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_4 (int *,int *,int *,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(IPSFactoryBuffer *VAR_6)
{
    ITypeLibVtbl *VAR_7 = &VAR_4;
    IUnknown *VAR_8 = (IUnknown*)&VAR_7;
    IRpcStubBuffer *VAR_9 = FUNC_4(VAR_6, &VAR_1, VAR_8, VAR_3);
    IRpcChannelBufferVtbl *VAR_10 = &VAR_5;
    IRpcChannelBuffer *VAR_11 = (IRpcChannelBuffer *)&VAR_10;
    HRESULT VAR_12 = VAR_0;
    RPCOLEMESSAGE VAR_13;

    FUNC_5(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.dataRepresentation = VAR_2;
    VAR_13.iMethod = 3;
    VAR_12 = FUNC_2(VAR_9, &VAR_13, VAR_11);
    FUNC_6(VAR_12 == VAR_3, "ret %08x\n", VAR_12);
    if(VAR_12 == VAR_3)
    {
        FUNC_6(*(DWORD*)VAR_13.Buffer == 0xabcdef, "buf[0] %08x\n", *(DWORD*)VAR_13.Buffer);
        FUNC_6(*((DWORD*)VAR_13.Buffer + 1) == VAR_3, "buf[1] %08x\n", *((DWORD*)VAR_13.Buffer + 1));
    }

    FUNC_1(FUNC_0(), 0, VAR_13.Buffer);
    FUNC_3(VAR_9);
}
