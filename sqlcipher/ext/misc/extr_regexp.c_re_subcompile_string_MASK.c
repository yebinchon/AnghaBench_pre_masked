
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int i; } ;
struct TYPE_12__ {unsigned int (* xNextChar ) (TYPE_2__*) ;int nState; int* aArg; TYPE_2__ sIn; } ;
typedef TYPE_1__ ReCompiled ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 char* FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_2__*) ;
 unsigned int FUNC_7 (TYPE_2__*) ;
 unsigned int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static const char *FUNC_9(ReCompiled *VAR_16){
  int VAR_17 = -1;
  int VAR_18;
  unsigned VAR_19;
  const char *VAR_20;
  while( (VAR_19 = VAR_16->xNextChar(&VAR_16->sIn))!=0 ){
    VAR_18 = VAR_16->nState;
    switch( VAR_19 ){
      case '|':
      case '$':
      case ')': {
        VAR_16->sIn.i--;
        return 0;
      }
      case '(': {
        VAR_20 = FUNC_5(VAR_16);
        if( VAR_20 ) return VAR_20;
        if( FUNC_0(VAR_16)!=')' ) return "unmatched '('";
        VAR_16->sIn.i++;
        break;
      }
      case '.': {
        if( FUNC_0(VAR_16)=='*' ){
          FUNC_1(VAR_16, VAR_1, 0);
          VAR_16->sIn.i++;
        }else{
          FUNC_1(VAR_16, VAR_0, 0);
        }
        break;
      }
      case '*': {
        if( VAR_17<0 ) return "'*' without operand";
        FUNC_4(VAR_16, VAR_17, VAR_9, VAR_16->nState - VAR_17 + 1);
        FUNC_1(VAR_16, VAR_8, VAR_17 - VAR_16->nState + 1);
        break;
      }
      case '+': {
        if( VAR_17<0 ) return "'+' without operand";
        FUNC_1(VAR_16, VAR_8, VAR_17 - VAR_16->nState);
        break;
      }
      case '?': {
        if( VAR_17<0 ) return "'?' without operand";
        FUNC_4(VAR_16, VAR_17, VAR_8, VAR_16->nState - VAR_17+1);
        break;
      }
      case '{': {
        int VAR_21 = 0, VAR_22 = 0;
        int VAR_23, VAR_24;
        if( VAR_17<0 ) return "'{m,n}' without operand";
        while( (VAR_19=FUNC_0(VAR_16))>='0' && VAR_19<='9' ){ VAR_21 = VAR_21*10 + VAR_19 - '0'; VAR_16->sIn.i++; }
        VAR_22 = VAR_21;
        if( VAR_19==',' ){
          VAR_16->sIn.i++;
          VAR_22 = 0;
          while( (VAR_19=FUNC_0(VAR_16))>='0' && VAR_19<='9' ){ VAR_22 = VAR_22*10 + VAR_19-'0'; VAR_16->sIn.i++; }
        }
        if( VAR_19!='}' ) return "unmatched '{'";
        if( VAR_22>0 && VAR_22<VAR_21 ) return "n less than m in '{m,n}'";
        VAR_16->sIn.i++;
        VAR_23 = VAR_16->nState - VAR_17;
        if( VAR_21==0 ){
          if( VAR_22==0 ) return "both m and n are zero in '{m,n}'";
          FUNC_4(VAR_16, VAR_17, VAR_8, VAR_23+1);
          VAR_22--;
        }else{
          for(VAR_24=1; VAR_24<VAR_21; VAR_24++) FUNC_2(VAR_16, VAR_17, VAR_23);
        }
        for(VAR_24=VAR_21; VAR_24<VAR_22; VAR_24++){
          FUNC_1(VAR_16, VAR_8, VAR_23+1);
          FUNC_2(VAR_16, VAR_17, VAR_23);
        }
        if( VAR_22==0 && VAR_21>0 ){
          FUNC_1(VAR_16, VAR_8, -VAR_23);
        }
        break;
      }
      case '[': {
        int VAR_25 = VAR_16->nState;
        if( FUNC_0(VAR_16)=='^' ){
          FUNC_1(VAR_16, VAR_3, 0);
          VAR_16->sIn.i++;
        }else{
          FUNC_1(VAR_16, VAR_4, 0);
        }
        while( (VAR_19 = VAR_16->xNextChar(&VAR_16->sIn))!=0 ){
          if( VAR_19=='[' && FUNC_0(VAR_16)==':' ){
            return "POSIX character classes not supported";
          }
          if( VAR_19=='\\' ) VAR_19 = FUNC_3(VAR_16);
          if( FUNC_0(VAR_16)=='-' ){
            FUNC_1(VAR_16, VAR_5, VAR_19);
            VAR_16->sIn.i++;
            VAR_19 = VAR_16->xNextChar(&VAR_16->sIn);
            if( VAR_19=='\\' ) VAR_19 = FUNC_3(VAR_16);
            FUNC_1(VAR_16, VAR_5, VAR_19);
          }else{
            FUNC_1(VAR_16, VAR_6, VAR_19);
          }
          if( FUNC_0(VAR_16)==']' ){ VAR_16->sIn.i++; break; }
        }
        if( VAR_19==0 ) return "unclosed '['";
        VAR_16->aArg[VAR_25] = VAR_16->nState - VAR_25;
        break;
      }
      case '\\': {
        int VAR_26 = 0;
        switch( FUNC_0(VAR_16) ){
          case 'b': VAR_26 = VAR_2; break;
          case 'd': VAR_26 = VAR_7; break;
          case 'D': VAR_26 = VAR_11; break;
          case 's': VAR_26 = VAR_14; break;
          case 'S': VAR_26 = VAR_12; break;
          case 'w': VAR_26 = VAR_15; break;
          case 'W': VAR_26 = VAR_13; break;
        }
        if( VAR_26 ){
          VAR_16->sIn.i++;
          FUNC_1(VAR_16, VAR_26, 0);
        }else{
          VAR_19 = FUNC_3(VAR_16);
          FUNC_1(VAR_16, VAR_10, VAR_19);
        }
        break;
      }
      default: {
        FUNC_1(VAR_16, VAR_10, VAR_19);
        break;
      }
    }
    VAR_17 = VAR_18;
  }
  return 0;
}
