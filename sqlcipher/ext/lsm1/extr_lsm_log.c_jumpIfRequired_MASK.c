
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {int pFS; } ;
typedef TYPE_2__ lsm_db ;
typedef void* i64 ;
struct TYPE_12__ {int n; } ;
struct TYPE_9__ {scalar_t__ iStart; void* iEnd; } ;
struct TYPE_11__ {scalar_t__ iOff; scalar_t__ iRegion1End; int iCksumBuf; TYPE_4__ buf; void* iRegion2Start; TYPE_1__ jump; } ;
typedef TYPE_3__ LogWriter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,void*) ;

__attribute__((used)) static int FUNC_5(
  lsm_db *VAR_4,
  LogWriter *VAR_5,
  int VAR_6,
  int *VAR_7
){






  if( (VAR_5->jump.iStart > (VAR_5->iOff + VAR_5->buf.n))
   && (VAR_5->jump.iStart < (VAR_5->iOff + VAR_5->buf.n + (VAR_6 + 17)))
  ){
    int VAR_8;
    i64 VAR_9;
    u8 VAR_10[10];
    int VAR_11;
    int VAR_12;


    VAR_9 = VAR_5->jump.iEnd+1;
    VAR_10[0] = VAR_0;
    VAR_11 = 1 + FUNC_4(&VAR_10[1], VAR_9);





    VAR_12 = (VAR_5->buf.n + VAR_11) % 8;
    if( VAR_12 ){
      u8 VAR_13[7] = {0,0,0,0,0,0,0};
      VAR_12 = 8-VAR_12;
      if( VAR_12==1 ){
        VAR_13[0] = VAR_1;
      }else{
        VAR_13[0] = VAR_2;
        VAR_13[1] = (u8)(VAR_12-2);
      }
      VAR_8 = FUNC_3(&VAR_5->buf, VAR_13, VAR_12);
      if( VAR_8!=VAR_3 ) return VAR_8;
    }





    VAR_8 = FUNC_3(&VAR_5->buf, VAR_10, VAR_11);
    if( VAR_8!=VAR_3 ) return VAR_8;
    FUNC_0( (VAR_5->buf.n % 8)==0 );
    VAR_8 = FUNC_2(VAR_4->pFS, VAR_5->iOff, &VAR_5->buf);
    if( VAR_8!=VAR_3 ) return VAR_8;
    FUNC_1(VAR_5, VAR_5->buf.n);
    VAR_5->iRegion1End = (VAR_5->iOff + VAR_5->buf.n);
    VAR_5->iRegion2Start = VAR_9;
    VAR_5->iOff = VAR_9;
    VAR_5->iCksumBuf = VAR_5->buf.n = 0;
    if( VAR_7 ) *VAR_7 = 1;
  }

  return VAR_3;
}
