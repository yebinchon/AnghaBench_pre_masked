
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Status; } ;
struct TYPE_7__ {TYPE_2__* UserIosb; int * UserEvent; } ;
typedef int PVOID ;
typedef int * PKEVENT ;
typedef TYPE_1__* PIRP ;
typedef TYPE_2__* PIO_STATUS_BLOCK ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef int KEVENT ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ,int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*) ;
 int VAR_10 ;

NTSTATUS FUNC_7(
    PIRP VAR_11,
    PDEVICE_OBJECT VAR_12,
    PIO_STATUS_BLOCK VAR_13,
    BOOLEAN VAR_14)
{
 KEVENT VAR_15;
 PKEVENT VAR_16[2];
 NTSTATUS VAR_17;
 VAR_16[0] = &VAR_9;
 VAR_16[1] = &VAR_15;

 FUNC_2(&VAR_15, VAR_5, VAR_1);
 VAR_11->UserEvent = &VAR_15;
 VAR_11->UserIosb = VAR_13;

 VAR_17 = FUNC_0(VAR_12, VAR_11);

 if (VAR_17 == VAR_7)
  {
   if (VAR_14)
    {
     VAR_17 = FUNC_4(2, (PVOID)VAR_16, VAR_10, VAR_0, VAR_2, VAR_1, ((void*)0), ((void*)0));

     if (FUNC_3(&VAR_9) != 0)
      {
       if (FUNC_1(VAR_11))
        {
         FUNC_6(VAR_3, ("Cancelled IRP.\n"));
        }
       else
        {
         FUNC_6(VAR_4, ("Could not cancel IRP.\n"));
        }
       return VAR_6;
      }
    }
   else
    VAR_17 = FUNC_5(&VAR_15, VAR_0, VAR_2, VAR_1, ((void*)0));
  }

 return (VAR_17 == VAR_8)? VAR_13->Status : VAR_8;
}
