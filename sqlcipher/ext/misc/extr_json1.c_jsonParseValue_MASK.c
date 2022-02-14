
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_6__ {scalar_t__ eType; int jnFlags; size_t n; } ;
struct TYPE_5__ {char* zJson; scalar_t__ iDepth; size_t nNode; TYPE_2__* aNode; scalar_t__ oom; } ;
typedef TYPE_1__ JsonParse ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,size_t,char const*) ;
 int FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(JsonParse *VAR_11, u32 VAR_12){
  char VAR_13;
  u32 VAR_14;
  int VAR_15;
  int VAR_16;
  JsonNode *VAR_17;
  const char *VAR_18 = VAR_11->zJson;
  while( FUNC_4(VAR_18[VAR_12]) ){ VAR_12++; }
  if( (VAR_13 = VAR_18[VAR_12])=='{' ){

    VAR_15 = FUNC_2(VAR_11, VAR_7, 0, 0);
    if( VAR_15<0 ) return -1;
    for(VAR_14=VAR_12+1;;VAR_14++){
      while( FUNC_4(VAR_18[VAR_14]) ){ VAR_14++; }
      if( ++VAR_11->iDepth > VAR_5 ) return -1;
      VAR_16 = FUNC_6(VAR_11, VAR_14);
      if( VAR_16<0 ){
        VAR_11->iDepth--;
        if( VAR_16==(-2) && VAR_11->nNode==(u32)VAR_15+1 ) return VAR_14+1;
        return -1;
      }
      if( VAR_11->oom ) return -1;
      VAR_17 = &VAR_11->aNode[VAR_11->nNode-1];
      if( VAR_17->eType!=VAR_9 ) return -1;
      VAR_17->jnFlags |= VAR_1;
      VAR_14 = VAR_16;
      while( FUNC_4(VAR_18[VAR_14]) ){ VAR_14++; }
      if( VAR_18[VAR_14]!=':' ) return -1;
      VAR_14++;
      VAR_16 = FUNC_6(VAR_11, VAR_14);
      VAR_11->iDepth--;
      if( VAR_16<0 ) return -1;
      VAR_14 = VAR_16;
      while( FUNC_4(VAR_18[VAR_14]) ){ VAR_14++; }
      VAR_13 = VAR_18[VAR_14];
      if( VAR_13==',' ) continue;
      if( VAR_13!='}' ) return -1;
      break;
    }
    VAR_11->aNode[VAR_15].n = VAR_11->nNode - (u32)VAR_15 - 1;
    return VAR_14+1;
  }else if( VAR_13=='[' ){

    VAR_15 = FUNC_2(VAR_11, VAR_2, 0, 0);
    if( VAR_15<0 ) return -1;
    for(VAR_14=VAR_12+1;;VAR_14++){
      while( FUNC_4(VAR_18[VAR_14]) ){ VAR_14++; }
      if( ++VAR_11->iDepth > VAR_5 ) return -1;
      VAR_16 = FUNC_6(VAR_11, VAR_14);
      VAR_11->iDepth--;
      if( VAR_16<0 ){
        if( VAR_16==(-3) && VAR_11->nNode==(u32)VAR_15+1 ) return VAR_14+1;
        return -1;
      }
      VAR_14 = VAR_16;
      while( FUNC_4(VAR_18[VAR_14]) ){ VAR_14++; }
      VAR_13 = VAR_18[VAR_14];
      if( VAR_13==',' ) continue;
      if( VAR_13!=']' ) return -1;
      break;
    }
    VAR_11->aNode[VAR_15].n = VAR_11->nNode - (u32)VAR_15 - 1;
    return VAR_14+1;
  }else if( VAR_13=='"' ){

    u8 VAR_19 = 0;
    VAR_14 = VAR_12+1;
    for(;;){
      VAR_13 = VAR_18[VAR_14];
      if( (VAR_13 & ~0x1f)==0 ){

        return -1;
      }
      if( VAR_13=='\\' ){
        VAR_13 = VAR_18[++VAR_14];
        if( VAR_13=='"' || VAR_13=='\\' || VAR_13=='/' || VAR_13=='b' || VAR_13=='f'
           || VAR_13=='n' || VAR_13=='r' || VAR_13=='t'
           || (VAR_13=='u' && FUNC_1(VAR_18+VAR_14+1)) ){
          VAR_19 = VAR_0;
        }else{
          return -1;
        }
      }else if( VAR_13=='"' ){
        break;
      }
      VAR_14++;
    }
    FUNC_2(VAR_11, VAR_9, VAR_14+1-VAR_12, &VAR_18[VAR_12]);
    if( !VAR_11->oom ) VAR_11->aNode[VAR_11->nNode-1].jnFlags = VAR_19;
    return VAR_14+1;
  }else if( VAR_13=='n'
         && FUNC_5(VAR_18+VAR_12,"null",4)==0
         && !FUNC_3(VAR_18[VAR_12+4]) ){
    FUNC_2(VAR_11, VAR_6, 0, 0);
    return VAR_12+4;
  }else if( VAR_13=='t'
         && FUNC_5(VAR_18+VAR_12,"true",4)==0
         && !FUNC_3(VAR_18[VAR_12+4]) ){
    FUNC_2(VAR_11, VAR_10, 0, 0);
    return VAR_12+4;
  }else if( VAR_13=='f'
         && FUNC_5(VAR_18+VAR_12,"false",5)==0
         && !FUNC_3(VAR_18[VAR_12+5]) ){
    FUNC_2(VAR_11, VAR_3, 0, 0);
    return VAR_12+5;
  }else if( VAR_13=='-' || (VAR_13>='0' && VAR_13<='9') ){

    u8 VAR_20 = 0;
    u8 VAR_21 = 0;
    FUNC_0( '-' < '0' );
    if( VAR_13<='0' ){
      VAR_14 = VAR_13=='-' ? VAR_12+1 : VAR_12;
      if( VAR_18[VAR_14]=='0' && VAR_18[VAR_14+1]>='0' && VAR_18[VAR_14+1]<='9' ) return -1;
    }
    VAR_14 = VAR_12+1;
    for(;; VAR_14++){
      VAR_13 = VAR_18[VAR_14];
      if( VAR_13>='0' && VAR_13<='9' ) continue;
      if( VAR_13=='.' ){
        if( VAR_18[VAR_14-1]=='-' ) return -1;
        if( VAR_20 ) return -1;
        VAR_20 = 1;
        continue;
      }
      if( VAR_13=='e' || VAR_13=='E' ){
        if( VAR_18[VAR_14-1]<'0' ) return -1;
        if( VAR_21 ) return -1;
        VAR_20 = VAR_21 = 1;
        VAR_13 = VAR_18[VAR_14+1];
        if( VAR_13=='+' || VAR_13=='-' ){
          VAR_14++;
          VAR_13 = VAR_18[VAR_14+1];
        }
        if( VAR_13<'0' || VAR_13>'9' ) return -1;
        continue;
      }
      break;
    }
    if( VAR_18[VAR_14-1]<'0' ) return -1;
    FUNC_2(VAR_11, VAR_20 ? VAR_8 : VAR_4,
                        VAR_14 - VAR_12, &VAR_18[VAR_12]);
    return VAR_14;
  }else if( VAR_13=='}' ){
    return -2;
  }else if( VAR_13==']' ){
    return -3;
  }else if( VAR_13==0 ){
    return 0;
  }else{
    return -1;
  }
}
