
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
typedef void* u16 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int e ;
struct TYPE_10__ {int crc32; int szCompressed; int szUncompressed; int iExternalAttr; size_t iOffset; int nFile; char* zFile; void* iCompression; int flags; int iVersionExtract; int iVersionMadeBy; } ;
struct TYPE_8__ {TYPE_5__ cds; scalar_t__ mUnixTime; } ;
typedef TYPE_1__ ZipfileEntry ;
struct TYPE_11__ {size_t n; int * a; } ;
struct TYPE_9__ {int nEntry; TYPE_6__ cds; TYPE_6__ body; } ;
typedef TYPE_2__ ZipfileCtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_6__*,int) ;
 int FUNC_14 (char const*,int,char**,int*,char**) ;
 int FUNC_15 (int *,int,int*,char**) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (TYPE_5__*,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int *) ;

void FUNC_20(sqlite3_context *VAR_9, int VAR_10, sqlite3_value **VAR_11){
  ZipfileCtx *VAR_12;
  ZipfileEntry VAR_13;

  sqlite3_value *VAR_14 = 0;
  sqlite3_value *VAR_15 = 0;
  sqlite3_value *VAR_16 = 0;
  sqlite3_value *VAR_17 = 0;
  sqlite3_value *VAR_18 = 0;

  int VAR_19 = 0;
  u32 VAR_20;
  int VAR_21 = VAR_3;
  char *VAR_22 = 0;

  int VAR_23 = -1;

  const u8 *VAR_24 = 0;
  int VAR_25 = 0;
  int VAR_26 = 0;
  u8 *VAR_27 = 0;
  u32 VAR_28 = 0;

  char *VAR_29 = 0;
  int VAR_30 = 0;
  char *VAR_31 = 0;
  int VAR_32;

  FUNC_2(&VAR_13, 0, sizeof(VAR_13));
  VAR_12 = (ZipfileCtx*)FUNC_3(VAR_9, sizeof(ZipfileCtx));
  if( VAR_12==0 ) return;


  if( VAR_10!=2 && VAR_10!=4 && VAR_10!=5 ){
    VAR_22 = FUNC_5("wrong number of arguments to function zipfile()");
    VAR_21 = VAR_0;
    goto zipfile_step_out;
  }
  VAR_14 = VAR_11[0];
  if( VAR_10==2 ){
    VAR_17 = VAR_11[1];
  }else{
    VAR_15 = VAR_11[1];
    VAR_16 = VAR_11[2];
    VAR_17 = VAR_11[3];
    if( VAR_10==5 ){
      VAR_18 = VAR_11[4];
    }
  }


  VAR_29 = (char*)FUNC_11(VAR_14);
  VAR_30 = FUNC_9(VAR_14);
  if( VAR_29==0 ){
    VAR_22 = FUNC_5("first argument to zipfile() must be non-NULL");
    VAR_21 = VAR_0;
    goto zipfile_step_out;
  }



  if( VAR_18 && VAR_2!=FUNC_12(VAR_18) ){
    VAR_23 = (int)FUNC_10(VAR_18);
    if( VAR_23!=0 && VAR_23!=8 ){
      VAR_22 = FUNC_5("illegal method value: %d", VAR_23);
      VAR_21 = VAR_0;
      goto zipfile_step_out;
    }
  }




  if( FUNC_12(VAR_17)==VAR_2 ){
    VAR_19 = 1;
    VAR_23 = 0;
  }else{
    VAR_24 = FUNC_8(VAR_17);
    VAR_26 = VAR_25 = FUNC_9(VAR_17);
    VAR_28 = FUNC_0(0, VAR_24, VAR_25);
    if( VAR_23<0 || VAR_23==8 ){
      int VAR_33 = 0;
      VAR_21 = FUNC_14(VAR_24, VAR_25, &VAR_27, &VAR_33, &VAR_22);
      if( VAR_21!=VAR_3 ){
        goto zipfile_step_out;
      }
      if( VAR_23==8 || VAR_33<VAR_25 ){
        VAR_24 = VAR_27;
        VAR_25 = VAR_33;
        VAR_23 = 8;
      }else{
        VAR_23 = 0;
      }
    }
  }


  VAR_21 = FUNC_15(VAR_15, VAR_19, &VAR_20, &VAR_22);
  if( VAR_21 ) goto zipfile_step_out;


  VAR_13.mUnixTime = FUNC_16(VAR_16);




  if( VAR_19==0 ){
    if( VAR_29[VAR_30-1]=='/' ){
      VAR_22 = FUNC_5("non-directory name must not end with /");
      VAR_21 = VAR_0;
      goto zipfile_step_out;
    }
  }else{
    if( VAR_29[VAR_30-1]!='/' ){
      VAR_29 = VAR_31 = FUNC_5("%s/", VAR_29);
      VAR_30++;
      if( VAR_29==0 ){
        VAR_21 = VAR_1;
        goto zipfile_step_out;
      }
    }else{
      while( VAR_30>1 && VAR_29[VAR_30-2]=='/' ) VAR_30--;
    }
  }


  VAR_13.cds.iVersionMadeBy = VAR_7;
  VAR_13.cds.iVersionExtract = VAR_8;
  VAR_13.cds.flags = VAR_6;
  VAR_13.cds.iCompression = (u16)VAR_23;
  FUNC_17(&VAR_13.cds, (u32)VAR_13.mUnixTime);
  VAR_13.cds.crc32 = VAR_28;
  VAR_13.cds.szCompressed = VAR_25;
  VAR_13.cds.szUncompressed = VAR_26;
  VAR_13.cds.iExternalAttr = (VAR_20<<16);
  VAR_13.cds.iOffset = VAR_12->body.n;
  VAR_13.cds.nFile = (u16)VAR_30;
  VAR_13.cds.zFile = VAR_29;


  VAR_32 = VAR_5 + VAR_13.cds.nFile + 9;
  if( (VAR_21 = FUNC_13(&VAR_12->body, VAR_32)) ) goto zipfile_step_out;
  VAR_12->body.n += FUNC_19(&VAR_13, &VAR_12->body.a[VAR_12->body.n]);


  if( VAR_25>0 ){
    if( (VAR_21 = FUNC_13(&VAR_12->body, VAR_25)) ) goto zipfile_step_out;
    FUNC_1(&VAR_12->body.a[VAR_12->body.n], VAR_24, VAR_25);
    VAR_12->body.n += VAR_25;
  }


  VAR_32 = VAR_4 + VAR_13.cds.nFile + 9;
  if( (VAR_21 = FUNC_13(&VAR_12->cds, VAR_32)) ) goto zipfile_step_out;
  VAR_12->cds.n += FUNC_18(&VAR_13, &VAR_12->cds.a[VAR_12->cds.n]);


  VAR_12->nEntry++;

 zipfile_step_out:
  FUNC_4(VAR_27);
  FUNC_4(VAR_31);
  if( VAR_21 ){
    if( VAR_22 ){
      FUNC_6(VAR_9, VAR_22, -1);
    }else{
      FUNC_7(VAR_9, VAR_21);
    }
  }
  FUNC_4(VAR_22);
}
