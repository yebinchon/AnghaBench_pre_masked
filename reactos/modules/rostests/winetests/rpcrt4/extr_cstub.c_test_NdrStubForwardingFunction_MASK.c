
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int This ;
typedef int RPC_MESSAGE ;
typedef int IRpcStubBufferVtbl ;
typedef int IRpcStubBuffer ;
typedef int IRpcChannelBuffer ;
typedef int DWORD ;


 int FUNC_0 (void*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**,int,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    void *VAR_2[5];
    void *VAR_3;
    IRpcChannelBuffer *VAR_4 = (IRpcChannelBuffer*)0xdeadbeef;
    RPC_MESSAGE *VAR_5 = (RPC_MESSAGE*)0xcafebabe;
    DWORD *VAR_6 = (DWORD*)0x12345678;
    IRpcStubBufferVtbl *VAR_7 = &VAR_1;
    IRpcStubBuffer *VAR_8 = (IRpcStubBuffer*)&VAR_7;

    FUNC_1(VAR_2, 0xcc, sizeof(VAR_2));
    VAR_2[0] = VAR_8;
    VAR_3 = &VAR_2[1];

    FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6 );
    FUNC_2(VAR_0 == 1, "base_buffer_invoke called %d times\n", VAR_0);

}
