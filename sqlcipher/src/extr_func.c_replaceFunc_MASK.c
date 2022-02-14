
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int* aLimit; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int i64 ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int,int (*) (unsigned char*)) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 unsigned char const* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  const unsigned char *VAR_6;
  const unsigned char *VAR_7;
  const unsigned char *VAR_8;
  unsigned char *VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  i64 VAR_13;
  int VAR_14;
  int VAR_15, VAR_16;
  unsigned VAR_17;
  sqlite3 *VAR_18 = FUNC_5(VAR_3);

  FUNC_1( VAR_4==3 );
  FUNC_0(VAR_4);
  VAR_6 = FUNC_13(VAR_5[0]);
  if( VAR_6==0 ) return;
  VAR_10 = FUNC_12(VAR_5[0]);
  FUNC_1( VAR_6==FUNC_13(VAR_5[0]) );
  VAR_7 = FUNC_13(VAR_5[1]);
  if( VAR_7==0 ){
    FUNC_1( FUNC_14(VAR_5[1])==VAR_2
            || FUNC_5(VAR_3)->mallocFailed );
    return;
  }
  if( VAR_7[0]==0 ){
    FUNC_1( FUNC_14(VAR_5[1])!=VAR_2 );
    FUNC_11(VAR_3, VAR_5[0]);
    return;
  }
  VAR_11 = FUNC_12(VAR_5[1]);
  FUNC_1( VAR_7==FUNC_13(VAR_5[1]) );
  VAR_8 = FUNC_13(VAR_5[2]);
  if( VAR_8==0 ) return;
  VAR_12 = FUNC_12(VAR_5[2]);
  FUNC_1( VAR_8==FUNC_13(VAR_5[2]) );
  VAR_13 = VAR_10 + 1;
  FUNC_1( VAR_13<VAR_1 );
  VAR_9 = FUNC_2(VAR_3, (i64)VAR_13);
  if( VAR_9==0 ){
    return;
  }
  VAR_14 = VAR_10 - VAR_11;
  VAR_17 = 0;
  for(VAR_15=VAR_16=0; VAR_15<=VAR_14; VAR_15++){
    if( VAR_6[VAR_15]!=VAR_7[0] || FUNC_3(&VAR_6[VAR_15], VAR_7, VAR_11) ){
      VAR_9[VAR_16++] = VAR_6[VAR_15];
    }else{
      if( VAR_12>VAR_11 ){
        VAR_13 += VAR_12 - VAR_11;
        FUNC_15( VAR_13-1==VAR_18->aLimit[VAR_0] );
        FUNC_15( VAR_13-2==VAR_18->aLimit[VAR_0] );
        if( VAR_13-1>VAR_18->aLimit[VAR_0] ){
          FUNC_9(VAR_3);
          FUNC_6(VAR_9);
          return;
        }
        VAR_17++;
        if( (VAR_17&(VAR_17-1))==0 ){


          u8 *VAR_19;
          VAR_19 = VAR_9;
          VAR_9 = FUNC_7(VAR_9, (int)VAR_13 + (VAR_13 - VAR_10 - 1));
          if( VAR_9==0 ){
            FUNC_8(VAR_3);
            FUNC_6(VAR_19);
            return;
          }
        }
      }
      FUNC_4(&VAR_9[VAR_16], VAR_8, VAR_12);
      VAR_16 += VAR_12;
      VAR_15 += VAR_11-1;
    }
  }
  FUNC_1( VAR_16+VAR_10-VAR_15+1<=VAR_13 );
  FUNC_4(&VAR_9[VAR_16], &VAR_6[VAR_15], VAR_10-VAR_15);
  VAR_16 += VAR_10 - VAR_15;
  FUNC_1( VAR_16<=VAR_13 );
  VAR_9[VAR_16] = 0;
  FUNC_10(VAR_3, (char*)VAR_9, VAR_16, FUNC_6);
}
