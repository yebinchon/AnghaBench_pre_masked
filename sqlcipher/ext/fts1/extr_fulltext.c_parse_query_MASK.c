
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pTokenizer; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_7__ {int * pTerm; scalar_t__ nTerms; } ;
typedef TYPE_2__ Query ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_1, const char *VAR_2, Query *VAR_3){
  char *VAR_4 = FUNC_1(VAR_2);
  int VAR_5 = 0;
  char *VAR_6 = VAR_4;
  VAR_3->nTerms = 0;
  VAR_3->pTerm = ((void*)0);

  while( *VAR_6 ){
    char *VAR_7 = VAR_6;
    while( *VAR_7 ){
      if( *VAR_7=='"' ){
        *VAR_7++ = '\0';
        break;
      }
      ++VAR_7;
    }
    if( *VAR_6 ){
      FUNC_2(VAR_1->pTokenizer, VAR_6, VAR_5, VAR_3);
    }
    VAR_6 = VAR_7;
    VAR_5 = !VAR_5;
  }

  FUNC_0(VAR_4);
  return VAR_0;
}
