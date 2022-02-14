
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ bUseLog; TYPE_2__* pLogWriter; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_10__ {int n; int nAlloc; int * z; } ;
struct TYPE_9__ {TYPE_3__ buf; } ;
typedef TYPE_2__ LogWriter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,void*,int) ;

int FUNC_7(
  lsm_db *VAR_11,
  int VAR_12,
  void *VAR_13, int VAR_14,
  void *VAR_15, int VAR_16
){
  int VAR_17 = VAR_9;
  LogWriter *VAR_18;
  int VAR_19;
  int VAR_20 = 0;

  FUNC_0( VAR_12==VAR_10 || VAR_12==VAR_1 || VAR_12==VAR_2 );
  FUNC_0( VAR_7==VAR_10 );
  FUNC_0( VAR_3==VAR_1 );
  FUNC_0( VAR_5==VAR_2 );
  FUNC_0( (VAR_12==VAR_3)==(VAR_16<0) );

  if( VAR_11->bUseLog==0 ) return VAR_9;
  VAR_18 = VAR_11->pLogWriter;



  VAR_19 = 1 + FUNC_4(VAR_14) + 8 + VAR_14;
  if( VAR_12!=VAR_3 ) VAR_19 += FUNC_4(VAR_16) + VAR_16;






  VAR_17 = FUNC_1(VAR_11, VAR_18, VAR_19, &VAR_20);
  if( (VAR_18->buf.n+VAR_19) > VAR_0 ) VAR_20 = 1;

  if( VAR_17==VAR_9 ){
    VAR_17 = FUNC_3(&VAR_18->buf, VAR_19);
  }
  if( VAR_17==VAR_9 ){
    u8 *VAR_21 = (u8 *)&VAR_18->buf.z[VAR_18->buf.n];



    FUNC_0( VAR_8 == (VAR_7 | 0x0001) );
    FUNC_0( VAR_4 == (VAR_3 | 0x0001) );
    FUNC_0( VAR_6 == (VAR_5 | 0x0001) );
    *(VAR_21++) = (u8)VAR_12 | (u8)VAR_20;
    VAR_21 += FUNC_5(VAR_21, VAR_14);
    if( VAR_12!=VAR_3 ) VAR_21 += FUNC_5(VAR_21, VAR_16);

    if( VAR_20 ){
      VAR_18->buf.n = (VAR_21 - (u8 *)VAR_18->buf.z);
      VAR_17 = FUNC_2(VAR_11);
      VAR_21 = (u8 *)&VAR_18->buf.z[VAR_18->buf.n];
    }

    FUNC_6(VAR_21, VAR_13, VAR_14);
    VAR_21 += VAR_14;
    if( VAR_12!=VAR_3 ){
      FUNC_6(VAR_21, VAR_15, VAR_16);
      VAR_21 += VAR_16;
    }
    VAR_18->buf.n = VAR_21 - (u8 *)VAR_18->buf.z;
    FUNC_0( VAR_18->buf.n<=VAR_18->buf.nAlloc );
  }

  return VAR_17;
}
