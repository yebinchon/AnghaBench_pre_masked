
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int Id; int Flags; int Set; } ;
struct TYPE_10__ {TYPE_1__ Property; int PinId; } ;
struct TYPE_9__ {int FileObject; } ;
struct TYPE_8__ {int PinId; } ;
typedef int PVOID ;
typedef TYPE_2__* PKSPIN_CONNECT ;
typedef scalar_t__ PKSPIN_CINSTANCES ;
typedef TYPE_3__* PKSAUDIO_DEVICE_ENTRY ;
typedef int NTSTATUS ;
typedef TYPE_4__ KSP_PIN ;
typedef int KSPIN_CINSTANCES ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int,int *) ;

NTSTATUS
FUNC_2(
    PKSAUDIO_DEVICE_ENTRY VAR_5,
    PKSPIN_CINSTANCES VAR_6,
    PKSPIN_CONNECT VAR_7)
{
    KSP_PIN VAR_8;
    ULONG VAR_9;


    VAR_8.PinId = VAR_7->PinId;
    VAR_8.Property.Set = VAR_3;
    VAR_8.Property.Flags = VAR_2;
    VAR_8.Property.Id = VAR_1;
 FUNC_0(VAR_5->FileObject);
    return FUNC_1(VAR_5->FileObject, VAR_4, VAR_0, (PVOID)&VAR_8, sizeof(KSP_PIN), (PVOID)VAR_6, sizeof(KSPIN_CINSTANCES), &VAR_9);

}
