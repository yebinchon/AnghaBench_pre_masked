
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int nExtra; int iVersionExtract; int flags; int iCompression; int mTime; int mDate; scalar_t__ nFile; int zFile; int szUncompressed; int szCompressed; int crc32; } ;
struct TYPE_4__ {int mUnixTime; TYPE_2__ cds; } ;
typedef TYPE_1__ ZipfileEntry ;
typedef TYPE_2__ ZipfileCDS ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(ZipfileEntry *VAR_3, u8 *VAR_4){
  ZipfileCDS *VAR_5 = &VAR_3->cds;
  u8 *VAR_6 = VAR_4;

  VAR_5->nExtra = 9;


  FUNC_3(VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_5->iVersionExtract);
  FUNC_2(VAR_6, VAR_5->flags);
  FUNC_2(VAR_6, VAR_5->iCompression);
  FUNC_2(VAR_6, VAR_5->mTime);
  FUNC_2(VAR_6, VAR_5->mDate);
  FUNC_3(VAR_6, VAR_5->crc32);
  FUNC_3(VAR_6, VAR_5->szCompressed);
  FUNC_3(VAR_6, VAR_5->szUncompressed);
  FUNC_2(VAR_6, (u16)VAR_5->nFile);
  FUNC_2(VAR_6, VAR_5->nExtra);
  FUNC_0( VAR_6==&VAR_4[VAR_1] );


  FUNC_1(VAR_6, VAR_5->zFile, (int)VAR_5->nFile);
  VAR_6 += (int)VAR_5->nFile;


  FUNC_2(VAR_6, VAR_0);
  FUNC_2(VAR_6, 5);
  *VAR_6++ = 0x01;
  FUNC_3(VAR_6, VAR_3->mUnixTime);

  return VAR_6-VAR_4;
}
