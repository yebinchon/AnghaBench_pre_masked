
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ConnectionContext; } ;
struct TYPE_5__ {TYPE_1__ Handle; } ;
typedef TYPE_2__* PTDI_REQUEST ;
typedef int * PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

NTSTATUS FUNC_2(
  PTDI_REQUEST VAR_4)
{
  PCONNECTION_ENDPOINT VAR_5;

  FUNC_1(VAR_1, ("Called.\n"));

  VAR_5 = VAR_4->Handle.ConnectionContext;

  if (!VAR_5) return VAR_2;

  FUNC_0( VAR_5 );

  VAR_4->Handle.ConnectionContext = ((void*)0);

  FUNC_1(VAR_0, ("Leaving.\n"));

  return VAR_3;
}
