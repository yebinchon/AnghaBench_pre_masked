
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VFD_IMAGE_INFO ;
typedef int ULONG ;
struct TYPE_10__ {int * SecurityContext; scalar_t__ FileBuffer; scalar_t__ FileHandle; } ;
struct TYPE_9__ {int NameLength; scalar_t__ MediaType; scalar_t__ DiskType; } ;
struct TYPE_8__ {int Length; int EffectiveOnly; int ContextTrackingMode; int ImpersonationLevel; } ;
typedef TYPE_1__ SECURITY_QUALITY_OF_SERVICE ;
typedef int SECURITY_CLIENT_CONTEXT ;
typedef TYPE_2__* PVFD_IMAGE_INFO ;
typedef int * PSECURITY_CLIENT_CONTEXT ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

NTSTATUS
FUNC_6(
 PDEVICE_EXTENSION VAR_12,
 PVFD_IMAGE_INFO VAR_13,
 ULONG VAR_14)
{


 if (VAR_12->FileHandle ||
  VAR_12->FileBuffer) {

  FUNC_5(VAR_7, ("[VFD] image already opened.\n"));

  return VAR_3;
 }



 if (VAR_14 < sizeof(VFD_IMAGE_INFO) ||
  VAR_14 < sizeof(VFD_IMAGE_INFO) + VAR_13->NameLength)
 {
  return VAR_4;
 }



 if (VAR_13->MediaType == VAR_10 ||
  VAR_13->MediaType >= VAR_9) {

  FUNC_5(VAR_7, ("[VFD] invalid MediaType - %u.\n",
   VAR_13->MediaType));

  return VAR_4;
 }

 if (VAR_13->DiskType == VAR_8 &&
  VAR_13->NameLength == 0) {

  FUNC_5(VAR_7,
   ("[VFD] File name required for VFD_DISKTYPE_FILE.\n"));

  return VAR_4;
 }






 {
  SECURITY_QUALITY_OF_SERVICE VAR_15;

  if (VAR_12->SecurityContext != ((void*)0)) {
   FUNC_4(VAR_12->SecurityContext);
  }
  else {
   VAR_12->SecurityContext =
    (PSECURITY_CLIENT_CONTEXT)FUNC_0(
    VAR_1, sizeof(SECURITY_CLIENT_CONTEXT), VAR_11);
  }

  FUNC_2(&VAR_15, sizeof(SECURITY_QUALITY_OF_SERVICE));

  VAR_15.Length = sizeof(SECURITY_QUALITY_OF_SERVICE);
  VAR_15.ImpersonationLevel = VAR_6;
  VAR_15.ContextTrackingMode = VAR_2;
  VAR_15.EffectiveOnly = VAR_0;

  FUNC_3(
   FUNC_1(), &VAR_15, VAR_0,
   VAR_12->SecurityContext);
 }

 return VAR_5;
}
