
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int RefCount; int Free; int Lock; int ListEntry; } ;
struct TYPE_7__ {TYPE_3__* ControlChannel; } ;
struct TYPE_8__ {TYPE_1__ Handle; } ;
typedef TYPE_2__* PTDI_REQUEST ;
typedef TYPE_3__* PCONTROL_CHANNEL ;
typedef int NTSTATUS ;
typedef int CONTROL_CHANNEL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;

NTSTATUS FUNC_5(
    PTDI_REQUEST VAR_8)
{
  PCONTROL_CHANNEL VAR_9;
  FUNC_4(VAR_3, ("Called.\n"));

  VAR_9 = FUNC_0(VAR_5, sizeof(*VAR_9),
                                         VAR_0);

  if (!VAR_9) {
    FUNC_4(VAR_4, ("Insufficient resources.\n"));
    return VAR_6;
  }

  FUNC_3(VAR_9, sizeof(CONTROL_CHANNEL));






  FUNC_1(&VAR_9->ListEntry);


  FUNC_2(&VAR_9->Lock);

  VAR_9->RefCount = 1;
  VAR_9->Free = VAR_1;


  VAR_8->Handle.ControlChannel = VAR_9;

  FUNC_4(VAR_2, ("Leaving.\n"));

  return VAR_7;
}
