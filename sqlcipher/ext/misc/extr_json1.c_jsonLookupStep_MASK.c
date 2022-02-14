
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_11__ {size_t iAppend; } ;
struct TYPE_13__ {scalar_t__ eType; size_t n; int jnFlags; TYPE_1__ u; } ;
struct TYPE_12__ {TYPE_3__* aNode; scalar_t__ oom; } ;
typedef TYPE_2__ JsonParse ;
typedef TYPE_3__ JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char const*,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,char const*,int*,char const**) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 size_t FUNC_3 (TYPE_2__*,scalar_t__,int,char const*) ;
 scalar_t__ FUNC_4 (char const) ;

__attribute__((used)) static JsonNode *FUNC_5(
  JsonParse *VAR_6,
  u32 VAR_7,
  const char *VAR_8,
  int *VAR_9,
  const char **VAR_10
){
  u32 VAR_11, VAR_12, VAR_13;
  const char *VAR_14;
  JsonNode *VAR_15 = &VAR_6->aNode[VAR_7];
  if( VAR_8[0]==0 ) return VAR_15;
  if( VAR_8[0]=='.' ){
    if( VAR_15->eType!=VAR_4 ) return 0;
    VAR_8++;
    if( VAR_8[0]=='"' ){
      VAR_14 = VAR_8 + 1;
      for(VAR_11=1; VAR_8[VAR_11] && VAR_8[VAR_11]!='"'; VAR_11++){}
      VAR_13 = VAR_11-1;
      if( VAR_8[VAR_11] ){
        VAR_11++;
      }else{
        *VAR_10 = VAR_8;
        return 0;
      }
    }else{
      VAR_14 = VAR_8;
      for(VAR_11=0; VAR_8[VAR_11] && VAR_8[VAR_11]!='.' && VAR_8[VAR_11]!='['; VAR_11++){}
      VAR_13 = VAR_11;
    }
    if( VAR_13==0 ){
      *VAR_10 = VAR_8;
      return 0;
    }
    VAR_12 = 1;
    for(;;){
      while( VAR_12<=VAR_15->n ){
        if( FUNC_0(VAR_15+VAR_12, VAR_14, VAR_13) ){
          return FUNC_5(VAR_6, VAR_7+VAR_12+1, &VAR_8[VAR_11], VAR_9, VAR_10);
        }
        VAR_12++;
        VAR_12 += FUNC_2(&VAR_15[VAR_12]);
      }
      if( (VAR_15->jnFlags & VAR_0)==0 ) break;
      VAR_7 += VAR_15->u.iAppend;
      VAR_15 = &VAR_6->aNode[VAR_7];
      VAR_12 = 1;
    }
    if( VAR_9 ){
      u32 VAR_16, VAR_17;
      JsonNode *VAR_18;
      VAR_16 = FUNC_3(VAR_6, VAR_4, 2, 0);
      VAR_17 = FUNC_3(VAR_6, VAR_5, VAR_11, VAR_8);
      VAR_8 += VAR_11;
      VAR_18 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10);
      if( VAR_6->oom ) return 0;
      if( VAR_18 ){
        VAR_15 = &VAR_6->aNode[VAR_7];
        VAR_15->u.iAppend = VAR_16 - VAR_7;
        VAR_15->jnFlags |= VAR_0;
        VAR_6->aNode[VAR_17].jnFlags |= VAR_1;
      }
      return VAR_18;
    }
  }else if( VAR_8[0]=='[' && FUNC_4(VAR_8[1]) ){
    if( VAR_15->eType!=VAR_3 ) return 0;
    VAR_11 = 0;
    VAR_12 = 1;
    while( FUNC_4(VAR_8[VAR_12]) ){
      VAR_11 = VAR_11*10 + VAR_8[VAR_12] - '0';
      VAR_12++;
    }
    if( VAR_8[VAR_12]!=']' ){
      *VAR_10 = VAR_8;
      return 0;
    }
    VAR_8 += VAR_12 + 1;
    VAR_12 = 1;
    for(;;){
      while( VAR_12<=VAR_15->n && (VAR_11>0 || (VAR_15[VAR_12].jnFlags & VAR_2)!=0) ){
        if( (VAR_15[VAR_12].jnFlags & VAR_2)==0 ) VAR_11--;
        VAR_12 += FUNC_2(&VAR_15[VAR_12]);
      }
      if( (VAR_15->jnFlags & VAR_0)==0 ) break;
      VAR_7 += VAR_15->u.iAppend;
      VAR_15 = &VAR_6->aNode[VAR_7];
      VAR_12 = 1;
    }
    if( VAR_12<=VAR_15->n ){
      return FUNC_5(VAR_6, VAR_7+VAR_12, VAR_8, VAR_9, VAR_10);
    }
    if( VAR_11==0 && VAR_9 ){
      u32 VAR_19;
      JsonNode *VAR_20;
      VAR_19 = FUNC_3(VAR_6, VAR_3, 1, 0);
      VAR_20 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10);
      if( VAR_6->oom ) return 0;
      if( VAR_20 ){
        VAR_15 = &VAR_6->aNode[VAR_7];
        VAR_15->u.iAppend = VAR_19 - VAR_7;
        VAR_15->jnFlags |= VAR_0;
      }
      return VAR_20;
    }
  }else{
    *VAR_10 = VAR_8;
  }
  return 0;
}
