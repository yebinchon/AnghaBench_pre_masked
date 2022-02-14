
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_tokenizer ;
struct TYPE_2__ {char const* zInput; int nInput; int base; scalar_t__ nAllocated; int * zToken; scalar_t__ iToken; scalar_t__ iOffset; } ;
typedef TYPE_1__ porter_tokenizer_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_tokenizer *VAR_2,
  const char *VAR_3, int VAR_4,
  sqlite3_tokenizer_cursor **VAR_5
){
  porter_tokenizer_cursor *VAR_6;

  FUNC_0(VAR_2);

  VAR_6 = (porter_tokenizer_cursor *) FUNC_1(sizeof(*VAR_6));
  if( VAR_6==((void*)0) ) return VAR_0;

  VAR_6->zInput = VAR_3;
  if( VAR_3==0 ){
    VAR_6->nInput = 0;
  }else if( VAR_4<0 ){
    VAR_6->nInput = (int)FUNC_2(VAR_3);
  }else{
    VAR_6->nInput = VAR_4;
  }
  VAR_6->iOffset = 0;
  VAR_6->iToken = 0;
  VAR_6->zToken = ((void*)0);
  VAR_6->nAllocated = 0;

  *VAR_5 = &VAR_6->base;
  return VAR_1;
}
