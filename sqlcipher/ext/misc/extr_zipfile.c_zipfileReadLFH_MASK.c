
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {void* nExtra; void* nFile; void* szUncompressed; void* szCompressed; void* crc32; void* mDate; void* mTime; void* iCompression; void* flags; void* iVersionExtract; } ;
typedef TYPE_1__ ZipfileLFH ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  u8 *VAR_3,
  ZipfileLFH *VAR_4
){
  u8 *VAR_5 = VAR_3;
  int VAR_6 = VAR_1;

  u32 VAR_7 = FUNC_1(VAR_5);
  if( VAR_7!=VAR_2 ){
    VAR_6 = VAR_0;
  }else{
    VAR_4->iVersionExtract = FUNC_0(VAR_5);
    VAR_4->flags = FUNC_0(VAR_5);
    VAR_4->iCompression = FUNC_0(VAR_5);
    VAR_4->mTime = FUNC_0(VAR_5);
    VAR_4->mDate = FUNC_0(VAR_5);
    VAR_4->crc32 = FUNC_1(VAR_5);
    VAR_4->szCompressed = FUNC_1(VAR_5);
    VAR_4->szUncompressed = FUNC_1(VAR_5);
    VAR_4->nFile = FUNC_0(VAR_5);
    VAR_4->nExtra = FUNC_0(VAR_5);
  }
  return VAR_6;
}
