
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


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_11__ {scalar_t__* data; } ;
struct TYPE_12__ {TYPE_2__ payload; } ;
struct TYPE_13__ {TYPE_3__ data_container; } ;
struct TYPE_16__ {TYPE_4__ ptp; } ;
struct TYPE_15__ {int Filename; void* SequenceNumber; void* AssociationDesc; void* AssociationType; void* ParentObject; void* ImageBitDepth; void* ImagePixHeight; void* ImagePixWidth; void* ThumbPixHeight; void* ThumbPixWidth; void* ThumbCompressedSize; void* ThumbFormat; void* ObjectCompressedSize; void* ProtectionStatus; void* ObjectFormat; void* StorageID; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_ObjectInfoTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 void* FUNC_0 (scalar_t__*) ;
 void* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*,int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;

__attribute__((used)) static void FUNC_3 (USBH_HandleTypeDef *VAR_16, PTP_ObjectInfoTypedef *VAR_17)
{
  MTP_HandleTypeDef *VAR_18 = VAR_16->pActiveClass->pData;
  uint8_t *VAR_19 = VAR_18->ptp.data_container.payload.data;
  uint16_t VAR_20;

  VAR_17->StorageID=FUNC_1(&VAR_19[VAR_10]);
  VAR_17->ObjectFormat=FUNC_0(&VAR_19[VAR_6]);
  VAR_17->ProtectionStatus=FUNC_0(&VAR_19[VAR_8]);
  VAR_17->ObjectCompressedSize=FUNC_1(&VAR_19[VAR_5]);


  if ((VAR_19[VAR_15] == 0) && (VAR_19[VAR_15+4] != 0))
  {
    VAR_19 += 4;
  }
  VAR_17->ThumbFormat=FUNC_0(&VAR_19[VAR_12]);
  VAR_17->ThumbCompressedSize=FUNC_1(&VAR_19[VAR_11]);
  VAR_17->ThumbPixWidth=FUNC_1(&VAR_19[VAR_14]);
  VAR_17->ThumbPixHeight=FUNC_1(&VAR_19[VAR_13]);
  VAR_17->ImagePixWidth=FUNC_1(&VAR_19[VAR_4]);
  VAR_17->ImagePixHeight=FUNC_1(&VAR_19[VAR_3]);
  VAR_17->ImageBitDepth=FUNC_1(&VAR_19[VAR_2]);
  VAR_17->ParentObject=FUNC_1(&VAR_19[VAR_7]);
  VAR_17->AssociationType=FUNC_0(&VAR_19[VAR_1]);
  VAR_17->AssociationDesc=FUNC_1(&VAR_19[VAR_0]);
  VAR_17->SequenceNumber=FUNC_1(&VAR_19[VAR_9]);
  FUNC_2(VAR_17->Filename, &VAR_19[VAR_15], &VAR_20);
}
