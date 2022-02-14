
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {void* iOffset; void* iExternalAttr; void* iInternalAttr; void* iDiskStart; void* nComment; void* nExtra; void* nFile; void* szUncompressed; void* szCompressed; void* crc32; void* mDate; void* mTime; void* iCompression; void* flags; void* iVersionExtract; void* iVersionMadeBy; } ;
typedef TYPE_1__ ZipfileCDS ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_5, ZipfileCDS *VAR_6){
  u8 *VAR_7 = VAR_5;
  u32 VAR_8 = FUNC_2(VAR_7);
  int VAR_9 = VAR_1;
  if( VAR_8!=VAR_4 ){
    VAR_9 = VAR_0;
  }else{
    VAR_6->iVersionMadeBy = FUNC_1(VAR_7);
    VAR_6->iVersionExtract = FUNC_1(VAR_7);
    VAR_6->flags = FUNC_1(VAR_7);
    VAR_6->iCompression = FUNC_1(VAR_7);
    VAR_6->mTime = FUNC_1(VAR_7);
    VAR_6->mDate = FUNC_1(VAR_7);
    VAR_6->crc32 = FUNC_2(VAR_7);
    VAR_6->szCompressed = FUNC_2(VAR_7);
    VAR_6->szUncompressed = FUNC_2(VAR_7);
    FUNC_0( VAR_7==&VAR_5[VAR_3] );
    VAR_6->nFile = FUNC_1(VAR_7);
    VAR_6->nExtra = FUNC_1(VAR_7);
    VAR_6->nComment = FUNC_1(VAR_7);
    VAR_6->iDiskStart = FUNC_1(VAR_7);
    VAR_6->iInternalAttr = FUNC_1(VAR_7);
    VAR_6->iExternalAttr = FUNC_2(VAR_7);
    VAR_6->iOffset = FUNC_2(VAR_7);
    FUNC_0( VAR_7==&VAR_5[VAR_2] );
  }

  return VAR_9;
}
