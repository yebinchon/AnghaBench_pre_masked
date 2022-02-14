
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_11__ {int * data; } ;
struct TYPE_12__ {TYPE_2__ payload; } ;
struct TYPE_13__ {TYPE_3__ data_container; } ;
struct TYPE_16__ {TYPE_4__ ptp; } ;
struct TYPE_15__ {int VolumeLabel; int StorageDescription; int FreeSpaceInImages; void* FreeSpaceInBytes; void* MaxCapability; void* AccessCapability; void* FilesystemType; void* StorageType; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_StorageInfoTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_4 (USBH_HandleTypeDef *VAR_7, uint32_t VAR_8, PTP_StorageInfoTypedef *VAR_9)
{
  MTP_HandleTypeDef *VAR_10 = VAR_7->pActiveClass->pData;
  uint8_t *VAR_11 = VAR_10->ptp.data_container.payload.data;

  uint16_t VAR_12;

  VAR_9->StorageType=FUNC_0(&VAR_11[VAR_6]);
  VAR_9->FilesystemType=FUNC_0(&VAR_11[VAR_1]);
  VAR_9->AccessCapability=FUNC_0(&VAR_11[VAR_0]);
  VAR_9->MaxCapability=FUNC_2(&VAR_11[VAR_4]);
  VAR_9->FreeSpaceInBytes=FUNC_2(&VAR_11[VAR_2]);
  VAR_9->FreeSpaceInImages=FUNC_1(&VAR_11[VAR_3]);

  FUNC_3(VAR_9->StorageDescription, &VAR_11[VAR_5], &VAR_12);
  FUNC_3(VAR_9->VolumeLabel, &VAR_11[VAR_5+VAR_12*2+1], &VAR_12);
}
