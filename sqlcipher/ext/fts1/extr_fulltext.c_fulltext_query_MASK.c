
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
struct TYPE_6__ {int nTerms; TYPE_1__* pTerm; } ;
struct TYPE_5__ {int zTerm; scalar_t__ is_phrase; } ;
typedef TYPE_2__ Query ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int **,int ,int *,int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(fulltext_vtab *VAR_3, const char *VAR_4,
                          DocList **VAR_5){
  Query VAR_6;
  int VAR_7 = -1;
  int VAR_8;
  sqlite3_stmt *VAR_9 = ((void*)0);
  DocList *VAR_10 = ((void*)0);

  int VAR_11 = FUNC_2(VAR_3, VAR_4, &VAR_6);
  if( VAR_11!=VAR_2 ) return VAR_11;


  for(VAR_8 = 0 ; VAR_8 < VAR_6.nTerms ; ++VAR_8){


    int VAR_12 = VAR_8<VAR_6.nTerms-1 && !VAR_6.pTerm[VAR_8+1].is_phrase;
    DocList *VAR_13 = FUNC_1(VAR_12 ? VAR_1 : VAR_0);
    if( VAR_6.pTerm[VAR_8].is_phrase ){
      VAR_7 = VAR_8;
    }
    VAR_11 = FUNC_4(VAR_3, &VAR_9, VAR_6.pTerm[VAR_8].zTerm, VAR_10, VAR_8 - VAR_7, VAR_13);
    if( VAR_11!=VAR_2 ) break;
    if( VAR_10!=((void*)0) ){
      FUNC_0(VAR_10);
    }
    VAR_10 = VAR_13;
  }

  FUNC_5(VAR_9);
  FUNC_3(&VAR_6);
  *VAR_5 = VAR_10;
  return VAR_11;
}
