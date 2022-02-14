
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int CurrentCount; } ;
struct TYPE_6__ {int Id; int Flags; int Set; } ;
struct TYPE_8__ {TYPE_1__ Property; int PinId; scalar_t__ Reserved; } ;
struct TYPE_7__ {scalar_t__ (* Control ) (int ,int ,int ,int,int ,int,int *) ;} ;
typedef int PVOID ;
typedef TYPE_2__* PMIXER_CONTEXT ;
typedef scalar_t__ MIXER_STATUS ;
typedef TYPE_3__ KSP_PIN ;
typedef TYPE_4__ KSPIN_CINSTANCES ;
typedef int HANDLE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,int,int *) ;

ULONG
FUNC_2(
    PMIXER_CONTEXT VAR_5,
    HANDLE VAR_6,
    ULONG VAR_7)
{
    KSP_PIN VAR_8;
    KSPIN_CINSTANCES VAR_9;
    ULONG VAR_10;
    MIXER_STATUS VAR_11;


    VAR_8.Reserved = 0;
    VAR_8.PinId = VAR_7;
    VAR_8.Property.Set = VAR_3;
    VAR_8.Property.Flags = VAR_2;
    VAR_8.Property.Id = VAR_1;

    VAR_11 = VAR_5->Control(VAR_6, VAR_0, (PVOID)&VAR_8, sizeof(KSP_PIN), (PVOID)&VAR_9, sizeof(KSPIN_CINSTANCES), &VAR_10);
    FUNC_0(VAR_11 == VAR_4);
    return VAR_9.CurrentCount;
}
