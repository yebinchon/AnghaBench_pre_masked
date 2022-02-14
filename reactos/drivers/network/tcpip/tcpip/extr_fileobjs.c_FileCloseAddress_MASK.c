
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ Listener; int Sharers; } ;
struct TYPE_8__ {TYPE_3__* AddressHandle; } ;
struct TYPE_9__ {TYPE_1__ Handle; } ;
typedef TYPE_2__* PTDI_REQUEST ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

NTSTATUS FUNC_6(
  PTDI_REQUEST VAR_3)
{
  PADDRESS_FILE VAR_4 = VAR_3->Handle.AddressHandle;
  KIRQL VAR_5;

  if (!VAR_3->Handle.AddressHandle) return VAR_1;

  FUNC_2(VAR_4, &VAR_5);

  if (FUNC_1(&VAR_4->Sharers) != 0)
  {

      FUNC_5(VAR_4, VAR_5);
      return VAR_2;
  }


  if( VAR_4->Listener )
  {
      FUNC_3( VAR_4->Listener );
  }

  FUNC_5(VAR_4, VAR_5);

  FUNC_0(VAR_4);

  FUNC_4(VAR_0, ("Leaving.\n"));

  return VAR_2;
}
