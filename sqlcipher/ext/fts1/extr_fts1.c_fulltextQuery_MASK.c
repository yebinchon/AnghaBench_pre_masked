
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_8__ {int nTerms; TYPE_1__* pTerms; } ;
struct TYPE_7__ {int nPhrase; int iColumn; scalar_t__ isNot; scalar_t__ isOr; } ;
typedef TYPE_1__ QueryTerm ;
typedef TYPE_2__ Query ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,TYPE_1__*,int **) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,char const*,int,int,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(
  fulltext_vtab *VAR_3,
  int VAR_4,
  const char *VAR_5,
  int VAR_6,
  DocList **VAR_7,
  Query *VAR_8
){
  int VAR_9, VAR_10, VAR_11;
  DocList *VAR_12 = ((void*)0);
  DocList *VAR_13, *VAR_14, *VAR_15;
  int VAR_16 = 0;
  QueryTerm *VAR_17;

  VAR_11 = FUNC_6(VAR_3, VAR_5, VAR_6, VAR_4, VAR_8);
  if( VAR_11!=VAR_2 ) return VAR_11;


  VAR_17 = VAR_8->pTerms;
  for(VAR_9 = 0; VAR_9<VAR_8->nTerms; VAR_9=VAR_10){
    if( VAR_17[VAR_9].isNot ){

      VAR_16++;
      VAR_10 = VAR_9 + VAR_17[VAR_9].nPhrase+1;
      continue;
    }
    VAR_10 = VAR_9 + VAR_17[VAR_9].nPhrase + 1;
    VAR_11 = FUNC_4(VAR_3, VAR_17[VAR_9].iColumn, &VAR_17[VAR_9], &VAR_13);
    if( VAR_11 ){
      FUNC_7(VAR_8);
      return VAR_11;
    }
    while( VAR_10<VAR_8->nTerms && VAR_17[VAR_10].isOr ){
      VAR_11 = FUNC_4(VAR_3, VAR_17[VAR_10].iColumn, &VAR_17[VAR_10], &VAR_15);
      VAR_10 += VAR_17[VAR_10].nPhrase + 1;
      if( VAR_11 ){
        FUNC_7(VAR_8);
        return VAR_11;
      }
      VAR_14 = FUNC_3(VAR_0);
      FUNC_5(VAR_13, VAR_15, VAR_14);
      FUNC_1(VAR_13);
      FUNC_1(VAR_15);
      VAR_13 = VAR_14;
    }
    if( VAR_12==0 ){
      VAR_12 = VAR_13;
    }else{
      VAR_14 = FUNC_3(VAR_0);
      FUNC_0(VAR_12, VAR_13, VAR_14);
      FUNC_1(VAR_13);
      FUNC_1(VAR_12);
      VAR_12 = VAR_14;
    }
  }

  if( VAR_16 && VAR_12==0 ){

    return VAR_1;
  }


  for(VAR_9=0; VAR_9<VAR_8->nTerms; VAR_9 += VAR_17[VAR_9].nPhrase + 1){
    if( !VAR_17[VAR_9].isNot ) continue;
    VAR_11 = FUNC_4(VAR_3, VAR_17[VAR_9].iColumn, &VAR_17[VAR_9], &VAR_13);
    if( VAR_11 ){
      FUNC_7(VAR_8);
      FUNC_1(VAR_12);
      return VAR_11;
    }
    VAR_14 = FUNC_3(VAR_0);
    FUNC_2(VAR_12, VAR_13, VAR_14);
    FUNC_1(VAR_13);
    FUNC_1(VAR_12);
    VAR_12 = VAR_14;
  }

  *VAR_7 = VAR_12;
  return VAR_11;
}
