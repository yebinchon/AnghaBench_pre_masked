
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int ZipfileTab ;
struct TYPE_6__ {TYPE_1__* pCurrent; } ;
typedef TYPE_2__ ZipfileCsr ;
struct TYPE_7__ {scalar_t__ iOffset; scalar_t__ iExternalAttr; scalar_t__ iInternalAttr; scalar_t__ iDiskStart; scalar_t__ nComment; scalar_t__ nExtra; scalar_t__ nFile; scalar_t__ szUncompressed; scalar_t__ szCompressed; scalar_t__ crc32; scalar_t__ mDate; scalar_t__ mTime; scalar_t__ iCompression; scalar_t__ flags; scalar_t__ iVersionExtract; scalar_t__ iVersionMadeBy; } ;
typedef TYPE_3__ ZipfileCDS ;
struct TYPE_5__ {TYPE_3__ cds; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  ZipfileCsr *VAR_4;
  ZipfileTab *VAR_5 = (ZipfileTab*)FUNC_5(VAR_1);
  FUNC_0( VAR_2>0 );

  VAR_4 = FUNC_7(VAR_5, FUNC_6(VAR_3[0]));
  if( VAR_4 ){
    ZipfileCDS *VAR_6 = &VAR_4->pCurrent->cds;
    char *VAR_7 = FUNC_2("{"
        "\"version-made-by\" : %u, "
        "\"version-to-extract\" : %u, "
        "\"flags\" : %u, "
        "\"compression\" : %u, "
        "\"time\" : %u, "
        "\"date\" : %u, "
        "\"crc32\" : %u, "
        "\"compressed-size\" : %u, "
        "\"uncompressed-size\" : %u, "
        "\"file-name-length\" : %u, "
        "\"extra-field-length\" : %u, "
        "\"file-comment-length\" : %u, "
        "\"disk-number-start\" : %u, "
        "\"internal-attr\" : %u, "
        "\"external-attr\" : %u, "
        "\"offset\" : %u }",
        (u32)VAR_6->iVersionMadeBy, (u32)VAR_6->iVersionExtract,
        (u32)VAR_6->flags, (u32)VAR_6->iCompression,
        (u32)VAR_6->mTime, (u32)VAR_6->mDate,
        (u32)VAR_6->crc32, (u32)VAR_6->szCompressed,
        (u32)VAR_6->szUncompressed, (u32)VAR_6->nFile,
        (u32)VAR_6->nExtra, (u32)VAR_6->nComment,
        (u32)VAR_6->iDiskStart, (u32)VAR_6->iInternalAttr,
        (u32)VAR_6->iExternalAttr, (u32)VAR_6->iOffset
    );

    if( VAR_7==0 ){
      FUNC_3(VAR_1);
    }else{
      FUNC_4(VAR_1, VAR_7, -1, VAR_0);
      FUNC_1(VAR_7);
    }
  }
}
