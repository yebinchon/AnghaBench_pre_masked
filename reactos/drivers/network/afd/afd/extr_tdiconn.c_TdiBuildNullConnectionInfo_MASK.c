
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int TDI_CONNECTION_INFORMATION ;
typedef int * PTDI_CONNECTION_INFORMATION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;

NTSTATUS FUNC_6
( PTDI_CONNECTION_INFORMATION *VAR_5,
  ULONG VAR_6 )
{
    PTDI_CONNECTION_INFORMATION VAR_7;
    ULONG VAR_8;
    NTSTATUS VAR_9;

    VAR_8 = FUNC_4(VAR_6);
    if (!VAR_8) {
        FUNC_0(VAR_0,("Invalid parameter\n"));
        *VAR_5 = ((void*)0);
        return VAR_3;
    }

    VAR_7 = (PTDI_CONNECTION_INFORMATION)
        FUNC_1(VAR_1,
                              sizeof(TDI_CONNECTION_INFORMATION) + VAR_8,
                              VAR_4);
    if (!VAR_7) {
        *VAR_5 = ((void*)0);
        return VAR_2;
    }

    VAR_9 = FUNC_5( VAR_7, VAR_6 );

    if (!FUNC_3(VAR_9))
    {
        FUNC_2(VAR_7, VAR_4);
        VAR_7 = ((void*)0);
    }

    *VAR_5 = VAR_7;

    return VAR_9;
}
