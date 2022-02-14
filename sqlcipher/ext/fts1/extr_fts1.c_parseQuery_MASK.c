
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pTokenizer; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_8__ {int nextColumn; int dfltColumn; TYPE_1__* pFts; scalar_t__ nextIsOr; int * pTerms; scalar_t__ nTerms; } ;
typedef TYPE_2__ Query ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(
  fulltext_vtab *VAR_2,
  const char *VAR_3,
  int VAR_4,
  int VAR_5,
  Query *VAR_6
){
  int VAR_7, VAR_8 = 0;

  if( VAR_3==0 ) VAR_4 = 0;
  if( VAR_4<0 ) VAR_4 = FUNC_2(VAR_3);
  VAR_6->nTerms = 0;
  VAR_6->pTerms = ((void*)0);
  VAR_6->nextIsOr = 0;
  VAR_6->nextColumn = VAR_5;
  VAR_6->dfltColumn = VAR_5;
  VAR_6->pFts = VAR_2;

  for(VAR_7=0; VAR_7<VAR_4; ++VAR_7){
    int VAR_9;
    for(VAR_9=VAR_7; VAR_9<VAR_4 && VAR_3[VAR_9]!='"'; ++VAR_9){}
    if( VAR_9>VAR_7 ){
      FUNC_3(VAR_2->pTokenizer, VAR_3+VAR_7, VAR_9-VAR_7, VAR_8,
                       VAR_6);
    }
    VAR_7 = VAR_9;
    if( VAR_9<VAR_4 ){
      FUNC_0( VAR_3[VAR_9]=='"' );
      VAR_8 = !VAR_8;
    }
  }

  if( VAR_8 ){

    FUNC_1(VAR_6);
    return VAR_0;
  }
  return VAR_1;
}
