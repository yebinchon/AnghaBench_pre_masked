
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_10__ {char* zJContent; int iAppend; TYPE_3__* pPatch; } ;
struct TYPE_12__ {scalar_t__ eType; int jnFlags; size_t n; TYPE_1__ u; } ;
struct TYPE_11__ {size_t nNode; TYPE_3__* aNode; scalar_t__ oom; } ;
typedef TYPE_2__ JsonParse ;
typedef TYPE_3__ JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,size_t,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static JsonNode *FUNC_5(
  JsonParse *VAR_9,
  u32 VAR_10,
  JsonNode *VAR_11
){
  u32 VAR_12, VAR_13;
  u32 VAR_14;
  JsonNode *VAR_15;
  if( VAR_11->eType!=VAR_6 ){
    return VAR_11;
  }
  FUNC_0( VAR_10>=0 && VAR_10<VAR_9->nNode );
  VAR_15 = &VAR_9->aNode[VAR_10];
  FUNC_0( (VAR_11->jnFlags & VAR_0)==0 );
  if( VAR_15->eType!=VAR_6 ){
    FUNC_3(VAR_11);
    return VAR_11;
  }
  VAR_14 = VAR_10;
  for(VAR_12=1; VAR_12<VAR_11->n; VAR_12 += FUNC_1(&VAR_11[VAR_12+1])+1){
    u32 VAR_16;
    const char *VAR_17;
    FUNC_0( VAR_11[VAR_12].eType==VAR_7 );
    FUNC_0( VAR_11[VAR_12].jnFlags & VAR_1 );
    VAR_16 = VAR_11[VAR_12].n;
    VAR_17 = VAR_11[VAR_12].u.zJContent;
    FUNC_0( (VAR_11[VAR_12].jnFlags & VAR_3)==0 );
    for(VAR_13=1; VAR_13<VAR_15->n; VAR_13 += FUNC_1(&VAR_15[VAR_13+1])+1 ){
      FUNC_0( VAR_15[VAR_13].eType==VAR_7 );
      FUNC_0( VAR_15[VAR_13].jnFlags & VAR_1 );
      FUNC_0( (VAR_11[VAR_12].jnFlags & VAR_3)==0 );
      if( VAR_15[VAR_13].n==VAR_16 && FUNC_4(VAR_15[VAR_13].u.zJContent,VAR_17,VAR_16)==0 ){
        if( VAR_15[VAR_13+1].jnFlags & (VAR_4|VAR_2) ) break;
        if( VAR_11[VAR_12+1].eType==VAR_5 ){
          VAR_15[VAR_13+1].jnFlags |= VAR_4;
        }else{
          JsonNode *VAR_18 = FUNC_5(VAR_9, VAR_10+VAR_13+1, &VAR_11[VAR_12+1]);
          if( VAR_18==0 ) return 0;
          VAR_15 = &VAR_9->aNode[VAR_10];
          if( VAR_18!=&VAR_15[VAR_13+1] ){
            VAR_15[VAR_13+1].u.pPatch = VAR_18;
            VAR_15[VAR_13+1].jnFlags |= VAR_2;
          }
        }
        break;
      }
    }
    if( VAR_13>=VAR_15->n && VAR_11[VAR_12+1].eType!=VAR_5 ){
      int VAR_19, VAR_20;
      VAR_19 = FUNC_2(VAR_9, VAR_6, 2, 0);
      FUNC_2(VAR_9, VAR_7, VAR_16, VAR_17);
      VAR_20 = FUNC_2(VAR_9, VAR_8, 0, 0);
      if( VAR_9->oom ) return 0;
      FUNC_3(VAR_11);
      VAR_15 = &VAR_9->aNode[VAR_10];
      VAR_9->aNode[VAR_14].jnFlags |= VAR_0;
      VAR_9->aNode[VAR_14].u.iAppend = VAR_19 - VAR_14;
      VAR_14 = VAR_19;
      VAR_9->aNode[VAR_20].jnFlags |= VAR_2;
      VAR_9->aNode[VAR_20].u.pPatch = &VAR_11[VAR_12+1];
    }
  }
  return VAR_15;
}
