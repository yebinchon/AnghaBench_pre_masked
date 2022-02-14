
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
struct TYPE_7__ {int zErrMsg; } ;
struct TYPE_8__ {int* aBuffer; TYPE_1__ base; } ;
typedef TYPE_2__ ZipfileTab ;
struct TYPE_9__ {void* iOffset; void* nSize; void* nEntryTotal; void* nEntry; void* iFirstDisk; void* iDisk; } ;
typedef TYPE_3__ ZipfileEOCD ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int*) ;
 void* FUNC_6 (int*) ;
 int FUNC_7 (int *,int*,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_8(
  ZipfileTab *VAR_4,
  const u8 *VAR_5,
  int VAR_6,
  FILE *VAR_7,
  ZipfileEOCD *VAR_8
){
  u8 *VAR_9 = VAR_4->aBuffer;
  int VAR_10;
  int VAR_11 = VAR_2;

  if( VAR_5==0 ){
    i64 VAR_12;
    i64 VAR_13;
    FUNC_1(VAR_7, 0, VAR_0);
    VAR_13 = (i64)FUNC_2(VAR_7);
    if( VAR_13==0 ){
      FUNC_3(VAR_8, 0, sizeof(ZipfileEOCD));
      return VAR_2;
    }
    VAR_10 = (int)(FUNC_0(VAR_13, VAR_3));
    VAR_12 = VAR_13 - VAR_10;
    VAR_11 = FUNC_7(VAR_7, VAR_9, VAR_10, VAR_12, &VAR_4->base.zErrMsg);
  }else{
    VAR_10 = (int)(FUNC_0(VAR_6, VAR_3));
    VAR_9 = (u8*)&VAR_5[VAR_6-VAR_10];
  }

  if( VAR_11==VAR_2 ){
    int VAR_14;


    for(VAR_14=VAR_10-20; VAR_14>=0; VAR_14--){
      if( VAR_9[VAR_14]==0x50 && VAR_9[VAR_14+1]==0x4b
       && VAR_9[VAR_14+2]==0x05 && VAR_9[VAR_14+3]==0x06
      ){
        break;
      }
    }
    if( VAR_14<0 ){
      VAR_4->base.zErrMsg = FUNC_4(
          "cannot find end of central directory record"
      );
      return VAR_1;
    }

    VAR_9 += VAR_14+4;
    VAR_8->iDisk = FUNC_5(VAR_9);
    VAR_8->iFirstDisk = FUNC_5(VAR_9);
    VAR_8->nEntry = FUNC_5(VAR_9);
    VAR_8->nEntryTotal = FUNC_5(VAR_9);
    VAR_8->nSize = FUNC_6(VAR_9);
    VAR_8->iOffset = FUNC_6(VAR_9);
  }

  return VAR_11;
}
