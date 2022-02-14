
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int Information; } ;
struct TYPE_5__ {int FileObject; int DeviceObject; } ;
typedef int PVOID ;
typedef int * PULONG ;
typedef int PIRP ;
typedef TYPE_1__* PIO_STACK_LOCATION ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_2__ IO_STATUS_BLOCK ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,TYPE_2__*,int ) ;

NTSTATUS FUNC_5(
    PFILE_OBJECT VAR_3,
    ULONG VAR_4,
    PVOID VAR_5,
    ULONG VAR_6,
    PVOID VAR_7,
    ULONG VAR_8,
    PULONG VAR_9)
{
 PDEVICE_OBJECT VAR_10;
 PIO_STACK_LOCATION VAR_11;
 IO_STATUS_BLOCK VAR_12;
 NTSTATUS VAR_13;
 PIRP VAR_14;

 VAR_10 = FUNC_2(VAR_3);
 VAR_14 = FUNC_0(VAR_4, VAR_10, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_0, ((void*)0), ((void*)0));

 if (!VAR_14)
  {
   FUNC_3(VAR_1, ("IoBuildDeviceIoControlRequest() failed.\n"));
   return VAR_2;
  }

 VAR_11 = FUNC_1(VAR_14);
 VAR_11->DeviceObject = VAR_10;
 VAR_11->FileObject = VAR_3;
 VAR_13 = FUNC_4(VAR_14, VAR_10, &VAR_12, VAR_0);

 if (VAR_9)
  *VAR_9 = VAR_12.Information;

 return VAR_13;
}
