
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TDIEntityID ;
typedef int PVOID ;
typedef int PDWORD ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int,int *,int ) ;

NTSTATUS FUNC_1( HANDLE VAR_4,
                            TDIEntityID **VAR_5,
                            PDWORD VAR_6 ) {
    NTSTATUS VAR_7 = FUNC_0( VAR_4,
                                         VAR_2,
                                         VAR_3,
                                         VAR_0,
                                         VAR_1,
                                         0,
                                         0,
                                         sizeof(TDIEntityID),
                                         (PVOID *)VAR_5,
                                         VAR_6 );

    return VAR_7;
}
