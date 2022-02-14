
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nNode; scalar_t__ oom; int * aNode; } ;
typedef TYPE_1__ JsonParse ;
typedef int JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int,char const*,int*,char const**) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static JsonNode *FUNC_3(
  JsonParse *VAR_3,
  const char *VAR_4,
  int *VAR_5,
  const char **VAR_6
){
  *VAR_5 = 1;
  if( VAR_4[0]==0 ){
    FUNC_1(VAR_3, VAR_1, 0, 0);
    return VAR_3->oom ? 0 : &VAR_3->aNode[VAR_3->nNode-1];
  }
  if( VAR_4[0]=='.' ){
    FUNC_1(VAR_3, VAR_2, 0, 0);
  }else if( FUNC_2(VAR_4,"[0]",3)==0 ){
    FUNC_1(VAR_3, VAR_0, 0, 0);
  }else{
    return 0;
  }
  if( VAR_3->oom ) return 0;
  return FUNC_0(VAR_3, VAR_3->nNode-1, VAR_4, VAR_5, VAR_6);
}
