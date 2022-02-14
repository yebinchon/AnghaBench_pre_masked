
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Information; } ;
struct TYPE_6__ {int NewAddress; int NewNetmask; int NteContext; } ;
typedef int * PULONG ;
typedef int NTSTATUS ;
typedef TYPE_1__ IP_SET_DATA ;
typedef int IPMask ;
typedef int IPAddr ;
typedef TYPE_2__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int Data ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,TYPE_2__*,int ,TYPE_1__*,int,TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;

NTSTATUS FUNC_6( IPAddr VAR_3, IPMask VAR_4, DWORD VAR_5,
                       PULONG VAR_6, PULONG VAR_7 )
{
  HANDLE VAR_8;
  NTSTATUS VAR_9 = FUNC_5( &VAR_8, VAR_0 | VAR_1 );
  IP_SET_DATA VAR_10;
  IO_STATUS_BLOCK VAR_11;

  FUNC_3("Called.\n");

  if( !FUNC_1(VAR_9) ) return VAR_9;

  VAR_10.NteContext = VAR_5;
  VAR_10.NewAddress = VAR_3;
  VAR_10.NewNetmask = VAR_4;

  VAR_9 = FUNC_2( VAR_8,
                                  ((void*)0),
                                  ((void*)0),
                                  ((void*)0),
                                  &VAR_11,
                                  VAR_2,
                                  &VAR_10,
                                  sizeof(VAR_10),
                                  &VAR_10,
                                  sizeof(VAR_10) );

  FUNC_4( VAR_8 );

  if( FUNC_1(VAR_9) ) {
      *VAR_6 = VAR_11.Information;
      *VAR_7 = VAR_10.NewAddress;
  }

  if (!FUNC_1(VAR_9)) {
      FUNC_0("addIPAddress for if %d returning 0x%lx\n", VAR_5, VAR_9);
  }

  return VAR_9;

}
