
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ControlChannel; } ;
struct TYPE_5__ {TYPE_1__ Handle; } ;
typedef TYPE_2__* PTDI_REQUEST ;
typedef int PCONTROL_CHANNEL ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS FUNC_1(
  PTDI_REQUEST VAR_2)
{
  if (!VAR_2->Handle.ControlChannel) return VAR_0;

  FUNC_0((PCONTROL_CHANNEL)VAR_2->Handle.ControlChannel);

  VAR_2->Handle.ControlChannel = ((void*)0);

  return VAR_1;
}
