
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_10__ {int * pWriteFd; } ;
typedef TYPE_4__ ZipfileTab ;
struct TYPE_9__ {TYPE_2__* pVtab; } ;
struct TYPE_11__ {int iId; TYPE_3__ base; TYPE_1__* pCurrent; int * pFile; } ;
typedef TYPE_5__ ZipfileCsr ;
struct TYPE_12__ {char* zFile; int iExternalAttr; int szUncompressed; int iCompression; int szCompressed; int nFile; } ;
typedef TYPE_6__ ZipfileCDS ;
struct TYPE_8__ {int zErrMsg; } ;
struct TYPE_7__ {int mUnixTime; char* aData; int iDataOff; TYPE_6__ cds; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int,int) ;
 int FUNC_9 (int *,char*,int,int ,int *) ;

__attribute__((used)) static int FUNC_10(
  sqlite3_vtab_cursor *VAR_5,
  sqlite3_context *VAR_6,
  int VAR_7
){
  ZipfileCsr *VAR_8 = (ZipfileCsr*)VAR_5;
  ZipfileCDS *VAR_9 = &VAR_8->pCurrent->cds;
  int VAR_10 = VAR_1;
  switch( VAR_7 ){
    case 0:
      FUNC_6(VAR_6, VAR_9->zFile, -1, VAR_3);
      break;
    case 1:


      FUNC_4(VAR_6, VAR_9->iExternalAttr >> 16);
      break;
    case 2: {
      FUNC_5(VAR_6, VAR_8->pCurrent->mUnixTime);
      break;
    }
    case 3: {
      if( FUNC_7(VAR_6)==0 ){
        FUNC_5(VAR_6, VAR_9->szUncompressed);
      }
      break;
    }
    case 4:
      if( FUNC_7(VAR_6) ) break;
    case 5: {
      if( VAR_7==4 || VAR_9->iCompression==0 || VAR_9->iCompression==8 ){
        int VAR_11 = VAR_9->szCompressed;
        int VAR_12 = VAR_9->szUncompressed;
        if( VAR_12>0 ){
          u8 *VAR_13;
          u8 *VAR_14 = 0;
          if( VAR_8->pCurrent->aData ){
            VAR_13 = VAR_8->pCurrent->aData;
          }else{
            VAR_13 = VAR_14 = FUNC_2(VAR_11);
            if( VAR_13==0 ){
              VAR_10 = VAR_0;
            }else{
              FILE *VAR_15 = VAR_8->pFile;
              if( VAR_15==0 ){
                VAR_15 = ((ZipfileTab*)(VAR_8->base.pVtab))->pWriteFd;
              }
              VAR_10 = FUNC_9(VAR_15, VAR_13, VAR_11, VAR_8->pCurrent->iDataOff,
                  &VAR_8->base.pVtab->zErrMsg
              );
            }
          }
          if( VAR_10==VAR_1 ){
            if( VAR_7==5 && VAR_9->iCompression ){
              FUNC_8(VAR_6, VAR_13, VAR_11, VAR_12);
            }else{
              FUNC_3(VAR_6, VAR_13, VAR_11, VAR_3);
            }
          }
          FUNC_1(VAR_14);
        }else{



          u32 VAR_16 = VAR_9->iExternalAttr >> 16;
          if( !(VAR_16 & VAR_4) && VAR_9->zFile[VAR_9->nFile-1]!='/' ){
            FUNC_3(VAR_6, "", 0, VAR_2);
          }
        }
      }
      break;
    }
    case 6:
      FUNC_4(VAR_6, VAR_9->iCompression);
      break;
    default:
      FUNC_0( VAR_7==7 );
      FUNC_5(VAR_6, VAR_8->iId);
      break;
  }

  return VAR_10;
}
