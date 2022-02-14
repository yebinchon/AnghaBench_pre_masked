
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_6__ {int pTokenizer; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int HashElem ;
typedef int Hash ;
typedef int DocList ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,char**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(fulltext_vtab *VAR_1, sqlite_int64 VAR_2){
  char *VAR_3;
  Hash VAR_4;
  HashElem *VAR_5;

  int VAR_6 = FUNC_8(VAR_1, VAR_2, &VAR_3);
  if( VAR_6!=VAR_0 ) return VAR_6;

  VAR_6 = FUNC_6(&VAR_4, VAR_1->pTokenizer, VAR_3, VAR_2);
  FUNC_10(VAR_3);
  if( VAR_6!=VAR_0 ) return VAR_6;

  for(VAR_5=FUNC_2(&VAR_4); VAR_5; VAR_5=FUNC_5(VAR_5)){
    VAR_6 = FUNC_11(VAR_1, FUNC_3(VAR_5), FUNC_4(VAR_5), VAR_2);
    if( VAR_6!=VAR_0 ) break;
  }
  for(VAR_5=FUNC_2(&VAR_4); VAR_5; VAR_5=FUNC_5(VAR_5)){
    DocList *VAR_7 = FUNC_1(VAR_5);
    FUNC_9(VAR_7);
  }
  FUNC_0(&VAR_4);

  return FUNC_7(VAR_1, VAR_2);
}
