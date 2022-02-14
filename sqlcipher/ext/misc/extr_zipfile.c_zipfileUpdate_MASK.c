
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
typedef void* u16 ;
typedef int sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int i64 ;
struct TYPE_16__ {int zErrMsg; } ;
struct TYPE_17__ {scalar_t__ pWriteFd; TYPE_4__* pCsrList; scalar_t__ szCurrent; int db; TYPE_3__* pFirstEntry; TYPE_1__ base; } ;
typedef TYPE_2__ ZipfileTab ;
struct TYPE_20__ {char const* zFile; int crc32; int szCompressed; int szUncompressed; int iExternalAttr; int iOffset; void* nFile; void* iCompression; int flags; int iVersionExtract; int iVersionMadeBy; } ;
struct TYPE_18__ {int mUnixTime; struct TYPE_18__* pNext; TYPE_9__ cds; } ;
typedef TYPE_3__ ZipfileEntry ;
struct TYPE_19__ {int bNoop; TYPE_3__* pCurrent; struct TYPE_19__* pCsrNext; } ;
typedef TYPE_4__ ZipfileCsr ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*,char const*,int) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char const*,char const*,int) ;
 int FUNC_15 (char const*,int,char**,int*,int *) ;
 int FUNC_16 (int *,int,int*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_9__*,int) ;
 TYPE_3__* FUNC_19 (char const*) ;
 int FUNC_20 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_21 (TYPE_2__*,char*,...) ;

__attribute__((used)) static int FUNC_22(
  sqlite3_vtab *VAR_7,
  int VAR_8,
  sqlite3_value **VAR_9,
  sqlite_int64 *VAR_10
){
  ZipfileTab *VAR_11 = (ZipfileTab*)VAR_7;
  int VAR_12 = VAR_3;
  ZipfileEntry *VAR_13 = 0;

  u32 VAR_14 = 0;
  u32 VAR_15 = 0;
  i64 VAR_16 = 0;
  const char *VAR_17 = 0;
  int VAR_18 = 0;
  const u8 *VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 0;
  u8 *VAR_22 = 0;
  char *VAR_23 = 0;
  ZipfileEntry *VAR_24 = 0;
  ZipfileEntry *VAR_25 = 0;
  int VAR_26 = 0;
  int VAR_27 = 0;
  u32 VAR_28 = 0;

  if( VAR_11->pWriteFd==0 ){
    VAR_12 = FUNC_13(VAR_7);
    if( VAR_12!=VAR_3 ) return VAR_12;
  }


  if( FUNC_8(VAR_9[0])!=VAR_2 ){
    const char *VAR_29 = (const char*)FUNC_7(VAR_9[0]);
    int VAR_30 = (int)FUNC_10(VAR_29);
    if( VAR_8>1 ){
      const char *VAR_31 = (const char*)FUNC_7(VAR_9[1]);
      if( VAR_31 && FUNC_14(VAR_31, VAR_29, VAR_30)!=0 ){
        VAR_26 = 1;
      }
    }
    for(VAR_24=VAR_11->pFirstEntry; 1; VAR_24=VAR_24->pNext){
      if( FUNC_14(VAR_24->cds.zFile, VAR_29, VAR_30)==0 ){
        break;
      }
      FUNC_0( VAR_24->pNext );
    }
  }

  if( VAR_8>1 ){

    if( FUNC_8(VAR_9[5])!=VAR_2 ){
      FUNC_21(VAR_11, "sz must be NULL");
      VAR_12 = VAR_0;
    }
    if( FUNC_8(VAR_9[6])!=VAR_2 ){
      FUNC_21(VAR_11, "rawdata must be NULL");
      VAR_12 = VAR_0;
    }

    if( VAR_12==VAR_3 ){
      if( FUNC_8(VAR_9[7])==VAR_2 ){

        VAR_27 = 1;
      }else{


        const u8 *VAR_32 = FUNC_4(VAR_9[7]);
        int VAR_33 = FUNC_5(VAR_9[7]);
        int VAR_34 = FUNC_8(VAR_9[8])==VAR_2;

        VAR_21 = FUNC_6(VAR_9[8]);
        VAR_16 = VAR_33;
        VAR_19 = VAR_32;
        VAR_20 = VAR_33;
        if( VAR_21!=0 && VAR_21!=8 ){
          FUNC_21(VAR_11, "unknown compression method: %d", VAR_21);
          VAR_12 = VAR_0;
        }else{
          if( VAR_34 || VAR_21 ){
            int VAR_35;
            VAR_12 = FUNC_15(VAR_32, VAR_33, &VAR_22, &VAR_35, &VAR_11->base.zErrMsg);
            if( VAR_12==VAR_3 ){
              if( VAR_21 || VAR_35<VAR_33 ){
                VAR_21 = 8;
                VAR_19 = VAR_22;
                VAR_20 = VAR_35;
              }
            }
          }
          VAR_28 = FUNC_1(0, VAR_32, VAR_33);
        }
      }
    }

    if( VAR_12==VAR_3 ){
      VAR_12 = FUNC_16(VAR_9[3], VAR_27, &VAR_14, &VAR_11->base.zErrMsg);
    }

    if( VAR_12==VAR_3 ){
      VAR_17 = (const char*)FUNC_7(VAR_9[2]);
      VAR_18 = (int)FUNC_10(VAR_17);
      VAR_15 = FUNC_17(VAR_9[4]);
    }

    if( VAR_12==VAR_3 && VAR_27 ){




      if( VAR_17[VAR_18-1]!='/' ){
        VAR_23 = FUNC_3("%s/", VAR_17);
        if( VAR_23==0 ){ VAR_12 = VAR_1; }
        VAR_17 = (const char*)VAR_23;
        VAR_18++;
      }
    }



    if( (VAR_24==0 || VAR_26) && VAR_12==VAR_3 ){
      ZipfileEntry *VAR_36;
      for(VAR_36=VAR_11->pFirstEntry; VAR_36; VAR_36=VAR_36->pNext){
        if( FUNC_14(VAR_36->cds.zFile, VAR_17, VAR_18)==0 ){
          switch( FUNC_9(VAR_11->db) ){
            case 129: {
              goto zipfile_update_done;
            }
            case 128: {
              VAR_25 = VAR_36;
              break;
            }
            default: {
              FUNC_21(VAR_11, "duplicate name: \"%s\"", VAR_17);
              VAR_12 = VAR_0;
              break;
            }
          }
          break;
        }
      }
    }

    if( VAR_12==VAR_3 ){

      VAR_13 = FUNC_19(VAR_17);
      if( VAR_13==0 ){
        VAR_12 = VAR_1;
      }else{
        VAR_13->cds.iVersionMadeBy = VAR_5;
        VAR_13->cds.iVersionExtract = VAR_6;
        VAR_13->cds.flags = VAR_4;
        VAR_13->cds.iCompression = (u16)VAR_21;
        FUNC_18(&VAR_13->cds, VAR_15);
        VAR_13->cds.crc32 = VAR_28;
        VAR_13->cds.szCompressed = VAR_20;
        VAR_13->cds.szUncompressed = (u32)VAR_16;
        VAR_13->cds.iExternalAttr = (VAR_14<<16);
        VAR_13->cds.iOffset = (u32)VAR_11->szCurrent;
        VAR_13->cds.nFile = (u16)VAR_18;
        VAR_13->mUnixTime = (u32)VAR_15;
        VAR_12 = FUNC_12(VAR_11, VAR_13, VAR_19, VAR_20);
        FUNC_11(VAR_11, VAR_24, VAR_13);
      }
    }
  }

  if( VAR_12==VAR_3 && (VAR_24 || VAR_25) ){
    ZipfileCsr *VAR_37;
    for(VAR_37=VAR_11->pCsrList; VAR_37; VAR_37=VAR_37->pCsrNext){
      if( VAR_37->pCurrent && (VAR_37->pCurrent==VAR_24 || VAR_37->pCurrent==VAR_25) ){
        VAR_37->pCurrent = VAR_37->pCurrent->pNext;
        VAR_37->bNoop = 1;
      }
    }

    FUNC_20(VAR_11, VAR_24);
    FUNC_20(VAR_11, VAR_25);
  }

zipfile_update_done:
  FUNC_2(VAR_22);
  FUNC_2(VAR_23);
  return VAR_12;
}
