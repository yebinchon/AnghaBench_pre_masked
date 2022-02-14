
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
struct TYPE_3__ {struct TYPE_3__* zToken; } ;
typedef TYPE_1__ simple_tokenizer_cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_tokenizer_cursor *VAR_1){
  simple_tokenizer_cursor *VAR_2 = (simple_tokenizer_cursor *) VAR_1;

  if( ((void*)0)!=VAR_2->zToken ){
    FUNC_0(VAR_2->zToken);
  }
  FUNC_0(VAR_2);

  return VAR_0;
}
