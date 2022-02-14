
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int aSpace ;
struct TYPE_9__ {int nInit; unsigned char* zInit; int nState; int (* xNextChar ) (TYPE_2__*) ;int* aOp; int* aArg; } ;
struct TYPE_8__ {unsigned char const* z; int i; int mx; } ;
struct TYPE_7__ {int* aState; unsigned int nState; } ;
typedef TYPE_1__ ReStateSet ;
typedef int ReStateNumber ;
typedef TYPE_2__ ReInput ;
typedef TYPE_3__ ReCompiled ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,int) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(ReCompiled *VAR_2, const unsigned char *VAR_3, int VAR_4){
  ReStateSet VAR_5[2], *VAR_6, *VAR_7;
  ReStateNumber VAR_8[100];
  ReStateNumber *VAR_9;
  unsigned int VAR_10 = 0;
  unsigned int VAR_11 = 0;
  int VAR_12 = VAR_0+1;
  int VAR_13 = 0;
  int VAR_14 = 0;
  ReInput VAR_15;

  VAR_15.z = VAR_3;
  VAR_15.i = 0;
  VAR_15.mx = VAR_4>=0 ? VAR_4 : (int)FUNC_6((char const*)VAR_3);


  if( VAR_2->nInit ){
    unsigned char VAR_16 = VAR_2->zInit[0];
    while( VAR_15.i+VAR_2->nInit<=VAR_15.mx
     && (VAR_3[VAR_15.i]!=VAR_16 ||
         FUNC_7((const char*)VAR_3+VAR_15.i, (const char*)VAR_2->zInit, VAR_2->nInit)!=0)
    ){
      VAR_15.i++;
    }
    if( VAR_15.i+VAR_2->nInit>VAR_15.mx ) return 0;
  }

  if( VAR_2->nState<=(sizeof(VAR_8)/(sizeof(VAR_8[0])*2)) ){
    VAR_9 = 0;
    VAR_5[0].aState = VAR_8;
  }else{
    VAR_9 = FUNC_5( sizeof(ReStateNumber)*2*VAR_2->nState );
    if( VAR_9==0 ) return -1;
    VAR_5[0].aState = VAR_9;
  }
  VAR_5[1].aState = &VAR_5[0].aState[VAR_2->nState];
  VAR_7 = &VAR_5[1];
  VAR_7->nState = 0;
  FUNC_0(VAR_7, 0);
  while( VAR_12!=VAR_0 && VAR_7->nState>0 ){
    VAR_13 = VAR_12;
    VAR_12 = VAR_2->xNextChar(&VAR_15);
    VAR_6 = VAR_7;
    VAR_7 = &VAR_5[VAR_11];
    VAR_11 = 1 - VAR_11;
    VAR_7->nState = 0;
    for(VAR_10=0; VAR_10<VAR_6->nState; VAR_10++){
      int VAR_17 = VAR_6->aState[VAR_10];
      switch( VAR_2->aOp[VAR_17] ){
        case 133: {
          if( VAR_2->aArg[VAR_17]==VAR_12 ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 141: {
          FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 128: {
          if( FUNC_3(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 130: {
          if( !FUNC_3(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 136: {
          if( FUNC_1(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 132: {
          if( !FUNC_1(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 129: {
          if( FUNC_2(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 131: {
          if( !FUNC_2(VAR_12) ) FUNC_0(VAR_7, VAR_17+1);
          break;
        }
        case 139: {
          if( FUNC_3(VAR_12)!=FUNC_3(VAR_13) ) FUNC_0(VAR_6, VAR_17+1);
          break;
        }
        case 140: {
          FUNC_0(VAR_7, VAR_17);
          FUNC_0(VAR_6, VAR_17+1);
          break;
        }
        case 135: {
          FUNC_0(VAR_6, VAR_17+VAR_2->aArg[VAR_17]);
          FUNC_0(VAR_6, VAR_17+1);
          break;
        }
        case 134: {
          FUNC_0(VAR_6, VAR_17+VAR_2->aArg[VAR_17]);
          break;
        }
        case 142: {
          VAR_14 = 1;
          goto re_match_end;
        }
        case 137:
        case 138: {
          int VAR_18 = 1;
          int VAR_19 = VAR_2->aArg[VAR_17];
          int VAR_20 = 0;
          for(VAR_18=1; VAR_18>0 && VAR_18<VAR_19; VAR_18++){
            if( VAR_2->aOp[VAR_17+VAR_18]==VAR_1 ){
              if( VAR_2->aArg[VAR_17+VAR_18]==VAR_12 ){
                VAR_20 = 1;
                VAR_18 = -1;
              }
            }else{
              if( VAR_2->aArg[VAR_17+VAR_18]<=VAR_12 && VAR_2->aArg[VAR_17+VAR_18+1]>=VAR_12 ){
                VAR_20 = 1;
                VAR_18 = -1;
              }else{
                VAR_18++;
              }
            }
          }
          if( VAR_2->aOp[VAR_17]==138 ) VAR_20 = !VAR_20;
          if( VAR_20 ) FUNC_0(VAR_7, VAR_17+VAR_19);
          break;
        }
      }
    }
  }
  for(VAR_10=0; VAR_10<VAR_7->nState; VAR_10++){
    if( VAR_2->aOp[VAR_7->aState[VAR_10]]==142 ){ VAR_14 = 1; break; }
  }
re_match_end:
  FUNC_4(VAR_9);
  return VAR_14;
}
