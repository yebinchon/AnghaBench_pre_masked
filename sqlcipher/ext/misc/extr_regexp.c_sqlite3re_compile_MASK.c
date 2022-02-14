
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* z; int i; int mx; } ;
struct TYPE_12__ {scalar_t__* aOp; unsigned int* aArg; unsigned char* zInit; int nInit; char const* zErr; TYPE_1__ sIn; int xNextChar; } ;
typedef TYPE_2__ ReCompiled ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 char FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 char* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char const*) ;

const char *FUNC_8(ReCompiled **VAR_6, const char *VAR_7, int VAR_8){
  ReCompiled *VAR_9;
  const char *VAR_10;
  int VAR_11, VAR_12;

  *VAR_6 = 0;
  VAR_9 = FUNC_6( sizeof(*VAR_9) );
  if( VAR_9==0 ){
    return "out of memory";
  }
  FUNC_0(VAR_9, 0, sizeof(*VAR_9));
  VAR_9->xNextChar = VAR_8 ? VAR_5 : VAR_4;
  if( FUNC_4(VAR_9, 30) ){
    FUNC_3(VAR_9);
    return "out of memory";
  }
  if( VAR_7[0]=='^' ){
    VAR_7++;
  }else{
    FUNC_2(VAR_9, VAR_2, 0);
  }
  VAR_9->sIn.z = (unsigned char*)VAR_7;
  VAR_9->sIn.i = 0;
  VAR_9->sIn.mx = (int)FUNC_7(VAR_7);
  VAR_10 = FUNC_5(VAR_9);
  if( VAR_10 ){
    FUNC_3(VAR_9);
    return VAR_10;
  }
  if( FUNC_1(VAR_9)=='$' && VAR_9->sIn.i+1>=VAR_9->sIn.mx ){
    FUNC_2(VAR_9, VAR_3, VAR_0);
    FUNC_2(VAR_9, VAR_1, 0);
    *VAR_6 = VAR_9;
  }else if( VAR_9->sIn.i>=VAR_9->sIn.mx ){
    FUNC_2(VAR_9, VAR_1, 0);
    *VAR_6 = VAR_9;
  }else{
    FUNC_3(VAR_9);
    return "unrecognized character";
  }
  if( VAR_9->aOp[0]==VAR_2 ){
    for(VAR_12=0, VAR_11=1; VAR_12<sizeof(VAR_9->zInit)-2 && VAR_9->aOp[VAR_11]==VAR_3; VAR_11++){
      unsigned VAR_13 = VAR_9->aArg[VAR_11];
      if( VAR_13<=127 ){
        VAR_9->zInit[VAR_12++] = (unsigned char)VAR_13;
      }else if( VAR_13<=0xfff ){
        VAR_9->zInit[VAR_12++] = (unsigned char)(0xc0 | (VAR_13>>6));
        VAR_9->zInit[VAR_12++] = 0x80 | (VAR_13&0x3f);
      }else if( VAR_13<=0xffff ){
        VAR_9->zInit[VAR_12++] = (unsigned char)(0xd0 | (VAR_13>>12));
        VAR_9->zInit[VAR_12++] = 0x80 | ((VAR_13>>6)&0x3f);
        VAR_9->zInit[VAR_12++] = 0x80 | (VAR_13&0x3f);
      }else{
        break;
      }
    }
    if( VAR_12>0 && VAR_9->zInit[VAR_12-1]==0 ) VAR_12--;
    VAR_9->nInit = VAR_12;
  }
  return VAR_9->zErr;
}
