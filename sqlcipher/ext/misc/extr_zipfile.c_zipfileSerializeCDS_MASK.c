
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int nExtra; int iVersionMadeBy; int iVersionExtract; int flags; int iCompression; int mTime; int mDate; int nFile; int nComment; int iDiskStart; int iInternalAttr; int zFile; int iOffset; int iExternalAttr; int szUncompressed; int szCompressed; int crc32; } ;
struct TYPE_4__ {int mUnixTime; int aExtra; TYPE_2__ cds; } ;
typedef TYPE_1__ ZipfileEntry ;
typedef TYPE_2__ ZipfileCDS ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(ZipfileEntry *VAR_3, u8 *VAR_4){
  u8 *VAR_5 = VAR_4;
  ZipfileCDS *VAR_6 = &VAR_3->cds;

  if( VAR_3->aExtra==0 ){
    VAR_6->nExtra = 9;
  }

  FUNC_3(VAR_5, VAR_2);
  FUNC_2(VAR_5, VAR_6->iVersionMadeBy);
  FUNC_2(VAR_5, VAR_6->iVersionExtract);
  FUNC_2(VAR_5, VAR_6->flags);
  FUNC_2(VAR_5, VAR_6->iCompression);
  FUNC_2(VAR_5, VAR_6->mTime);
  FUNC_2(VAR_5, VAR_6->mDate);
  FUNC_3(VAR_5, VAR_6->crc32);
  FUNC_3(VAR_5, VAR_6->szCompressed);
  FUNC_3(VAR_5, VAR_6->szUncompressed);
  FUNC_0( VAR_5==&VAR_4[VAR_0] );
  FUNC_2(VAR_5, VAR_6->nFile);
  FUNC_2(VAR_5, VAR_6->nExtra);
  FUNC_2(VAR_5, VAR_6->nComment);
  FUNC_2(VAR_5, VAR_6->iDiskStart);
  FUNC_2(VAR_5, VAR_6->iInternalAttr);
  FUNC_3(VAR_5, VAR_6->iExternalAttr);
  FUNC_3(VAR_5, VAR_6->iOffset);

  FUNC_1(VAR_5, VAR_6->zFile, VAR_6->nFile);
  VAR_5 += VAR_6->nFile;

  if( VAR_3->aExtra ){
    int VAR_7 = (int)VAR_6->nExtra + (int)VAR_6->nComment;
    FUNC_1(VAR_5, VAR_3->aExtra, VAR_7);
    VAR_5 += VAR_7;
  }else{
    FUNC_0( VAR_6->nExtra==9 );
    FUNC_2(VAR_5, VAR_1);
    FUNC_2(VAR_5, 5);
    *VAR_5++ = 0x01;
    FUNC_3(VAR_5, VAR_3->mUnixTime);
  }

  return VAR_5-VAR_4;
}
