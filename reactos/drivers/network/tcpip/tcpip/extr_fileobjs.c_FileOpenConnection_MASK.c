
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ConnectionContext; } ;
struct TYPE_5__ {TYPE_1__ Handle; } ;
typedef int PVOID ;
typedef TYPE_2__* PTDI_REQUEST ;
typedef scalar_t__ PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;

NTSTATUS FUNC_5(
  PTDI_REQUEST VAR_7,
  PVOID VAR_8)
{
  NTSTATUS VAR_9;
  PCONNECTION_ENDPOINT VAR_10;

  FUNC_4(VAR_3, ("Called.\n"));

  VAR_10 = FUNC_2( VAR_8 );

  if( !VAR_10 ) return VAR_5;

  VAR_9 = FUNC_3( VAR_10, VAR_0, VAR_4, VAR_1 );

  if( !FUNC_1(VAR_9) ) {
      FUNC_0( VAR_10 );
      return VAR_9;
  }


  VAR_7->Handle.ConnectionContext = VAR_10;

  FUNC_4(VAR_2, ("Leaving.\n"));

  return VAR_6;
}
