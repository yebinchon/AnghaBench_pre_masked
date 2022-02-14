
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct BuiltinTokenizer TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fts5_tokenizer ;
struct TYPE_7__ {int (* xCreateTokenizer ) (TYPE_2__*,char const*,void*,int *,int ) ;} ;
typedef TYPE_2__ fts5_api ;
struct BuiltinTokenizer {char const* zName; int x; } ;
struct TYPE_6__ {int member_2; int member_1; int member_0; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,char const*,void*,int *,int ) ;

int FUNC_2(fts5_api *VAR_10){
  struct BuiltinTokenizer {
    const char *zName;
    fts5_tokenizer x;
  } VAR_11[] = {
    { "unicode61", {VAR_7, VAR_8, VAR_9}},
    { "ascii", {VAR_1, VAR_2, VAR_3 }},
    { "porter", {VAR_4, VAR_5, VAR_6 }},
  };

  int VAR_12 = VAR_0;
  int VAR_13;

  for(VAR_13=0; VAR_12==VAR_0 && VAR_13<FUNC_0(VAR_11); VAR_13++){
    VAR_12 = VAR_10->xCreateTokenizer(VAR_10,
        VAR_11[VAR_13].zName,
        (void*)VAR_10,
        &VAR_11[VAR_13].x,
        0
    );
  }

  return VAR_12;
}
