
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_6__ {scalar_t__ zClassName; scalar_t__ zSelf; scalar_t__ zVocabTab; scalar_t__ zVocabWord; scalar_t__ zVocabLang; scalar_t__ zCostTab; int base; void* zDb; int * db; } ;
typedef TYPE_1__ amatch_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,char**) ;
 char* FUNC_3 (char*,char const* const) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 (int) ;
 void* FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_2;
  amatch_vtab *VAR_10 = 0;
  const char *VAR_11 = VAR_6[0];
  const char *VAR_12 = VAR_6[1];
  const char *VAR_13;
  int VAR_14;

  (void)VAR_4;
  *VAR_7 = 0;
  VAR_10 = FUNC_7( sizeof(*VAR_10) );
  if( VAR_10==0 ) return VAR_1;
  VAR_9 = VAR_1;
  FUNC_4(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->db = VAR_3;
  VAR_10->zClassName = FUNC_8("%s", VAR_11);
  if( VAR_10->zClassName==0 ) goto amatchConnectError;
  VAR_10->zDb = FUNC_8("%s", VAR_12);
  if( VAR_10->zDb==0 ) goto amatchConnectError;
  VAR_10->zSelf = FUNC_8("%s", VAR_6[2]);
  if( VAR_10->zSelf==0 ) goto amatchConnectError;
  for(VAR_14=3; VAR_14<VAR_5; VAR_14++){
    VAR_13 = FUNC_3("vocabulary_table", VAR_6[VAR_14]);
    if( VAR_13 ){
      FUNC_6(VAR_10->zVocabTab);
      VAR_10->zVocabTab = FUNC_0(VAR_13);
      if( VAR_10->zVocabTab==0 ) goto amatchConnectError;
      continue;
    }
    VAR_13 = FUNC_3("vocabulary_word", VAR_6[VAR_14]);
    if( VAR_13 ){
      FUNC_6(VAR_10->zVocabWord);
      VAR_10->zVocabWord = FUNC_0(VAR_13);
      if( VAR_10->zVocabWord==0 ) goto amatchConnectError;
      continue;
    }
    VAR_13 = FUNC_3("vocabulary_language", VAR_6[VAR_14]);
    if( VAR_13 ){
      FUNC_6(VAR_10->zVocabLang);
      VAR_10->zVocabLang = FUNC_0(VAR_13);
      if( VAR_10->zVocabLang==0 ) goto amatchConnectError;
      continue;
    }
    VAR_13 = FUNC_3("edit_distances", VAR_6[VAR_14]);
    if( VAR_13 ){
      FUNC_6(VAR_10->zCostTab);
      VAR_10->zCostTab = FUNC_0(VAR_13);
      if( VAR_10->zCostTab==0 ) goto amatchConnectError;
      continue;
    }
    *VAR_8 = FUNC_8("unrecognized argument: [%s]\n", VAR_6[VAR_14]);
    FUNC_1(VAR_10);
    *VAR_7 = 0;
    return VAR_0;
  }
  VAR_9 = VAR_2;
  if( VAR_10->zCostTab==0 ){
    *VAR_8 = FUNC_8("no edit_distances table specified");
    VAR_9 = VAR_0;
  }else{
    VAR_9 = FUNC_2(VAR_3, VAR_10, VAR_8);
  }
  if( VAR_9==VAR_2 ){
    VAR_9 = FUNC_5(VAR_3,
           "CREATE TABLE x(word,distance,language,"
           "command HIDDEN,nword HIDDEN)"
         );





  }
  if( VAR_9!=VAR_2 ){
    FUNC_1(VAR_10);
  }
  *VAR_7 = &VAR_10->base;
  return VAR_9;

amatchConnectError:
  FUNC_1(VAR_10);
  return VAR_9;
}
