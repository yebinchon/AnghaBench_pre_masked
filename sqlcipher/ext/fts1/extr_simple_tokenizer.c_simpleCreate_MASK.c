
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zDelim ;
typedef int sqlite3_tokenizer ;
struct TYPE_2__ {int base; void* zDelim; } ;
typedef TYPE_1__ simple_tokenizer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  int VAR_1, const char **VAR_2,
  sqlite3_tokenizer **VAR_3
){
  simple_tokenizer *VAR_4;

  VAR_4 = (simple_tokenizer *) FUNC_2(sizeof(simple_tokenizer));





  if( VAR_1>1 ){
    VAR_4->zDelim = FUNC_3(VAR_2[1]);
  } else {

    char VAR_5[0x80];
    int VAR_6, VAR_7;
    for(VAR_6=1, VAR_7=0; VAR_6<0x80; VAR_6++){
      if( !FUNC_1(VAR_6) ){
        VAR_5[VAR_7++] = VAR_6;
      }
    }
    VAR_5[VAR_7++] = '\0';
    FUNC_0( VAR_7<=sizeof(VAR_5) );
    VAR_4->zDelim = FUNC_3(VAR_5);
  }

  *VAR_3 = &VAR_4->base;
  return VAR_0;
}
