
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tei_entity; int tei_instance; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int PVOID ;
typedef TYPE_1__* PMIB_TCPROW ;
typedef scalar_t__ NTSTATUS ;
typedef int MIB_TCPROW ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__**,int*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,scalar_t__,int ,int ,int,int *,int*) ;

DWORD FUNC_9(void)
{
    DWORD VAR_6;
    TDIEntityID *VAR_7 = ((void*)0);
    HANDLE VAR_8;
    int VAR_9, VAR_10 = 0;
    NTSTATUS VAR_11;
    PMIB_TCPROW VAR_12 = ((void*)0);
    DWORD VAR_13;

    FUNC_2("called.\n");

    VAR_11 = FUNC_5( &VAR_8, VAR_1 );
    if( !FUNC_1(VAR_11) ) {
        FUNC_0("openTcpFile returned 0x%08lx\n", VAR_11);
        return 0;
    }

    VAR_11 = FUNC_7( VAR_8, &VAR_7, &VAR_6 );

    for( VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ ) {
        if( VAR_7[VAR_9].tei_entity == VAR_0 &&
     FUNC_4( VAR_8, &VAR_7[VAR_9] ) ) {

     VAR_11 = FUNC_8( VAR_8,
     VAR_2,
     VAR_3,
     VAR_4,
     VAR_0,
     VAR_7[VAR_9].tei_instance,
     0,
     sizeof(MIB_TCPROW),
     (PVOID *)&VAR_12,
     &VAR_13 );

     if( VAR_11 == VAR_5 ) VAR_10 += VAR_13;
  if( VAR_12 ) {
   FUNC_6( VAR_12 );
   VAR_12 = ((void*)0);
  }
 }
    }

    FUNC_3( VAR_8 );
    if( VAR_7 ) FUNC_6( VAR_7 );
    return VAR_10;
}
