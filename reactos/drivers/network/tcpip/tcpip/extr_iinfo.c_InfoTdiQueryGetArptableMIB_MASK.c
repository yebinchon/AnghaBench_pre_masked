
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TDI_STATUS ;
typedef int TDIEntityID ;
typedef int * PVOID ;
typedef int PUINT ;
typedef int * PNDIS_BUFFER ;
typedef int PIP_INTERFACE ;
typedef int * PIPARP_ENTRY ;
typedef int NTSTATUS ;
typedef int IPARP_ENTRY ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

TDI_STATUS FUNC_4(TDIEntityID VAR_3,
          PIP_INTERFACE VAR_4,
          PNDIS_BUFFER VAR_5,
          PUINT VAR_6) {
    NTSTATUS VAR_7;
    ULONG VAR_8 = FUNC_3( VAR_4, ((void*)0) );
    ULONG VAR_9 = VAR_8 * sizeof(IPARP_ENTRY);
    PIPARP_ENTRY VAR_10;

    if (VAR_9 != 0)
    {
        VAR_10 = FUNC_0( VAR_1, VAR_9, VAR_0 );
        if( !VAR_10 ) return VAR_2;

        FUNC_3( VAR_4, VAR_10 );

        VAR_7 = FUNC_2( (PVOID)VAR_10, VAR_9, VAR_5, VAR_6 );

        FUNC_1( VAR_10, VAR_0 );
    }
    else
    {
        VAR_7 = FUNC_2(((void*)0), 0, ((void*)0), VAR_6);
    }

    return VAR_7;
}
