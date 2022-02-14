
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_tokenizer ;
struct TYPE_2__ {char const* pInput; int nBytes; int base; scalar_t__ nTokenAllocated; int * pToken; scalar_t__ iToken; scalar_t__ iOffset; } ;
typedef TYPE_1__ simple_tokenizer_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_tokenizer *VAR_2,
  const char *VAR_3, int VAR_4,
  sqlite3_tokenizer_cursor **VAR_5
){
  simple_tokenizer_cursor *VAR_6;

  VAR_6 = (simple_tokenizer_cursor *) FUNC_0(sizeof(*VAR_6));
  if( VAR_6==((void*)0) ) return VAR_0;

  VAR_6->pInput = VAR_3;
  if( VAR_3==0 ){
    VAR_6->nBytes = 0;
  }else if( VAR_4<0 ){
    VAR_6->nBytes = (int)FUNC_1(VAR_3);
  }else{
    VAR_6->nBytes = VAR_4;
  }
  VAR_6->iOffset = 0;
  VAR_6->iToken = 0;
  VAR_6->pToken = ((void*)0);
  VAR_6->nTokenAllocated = 0;

  *VAR_5 = &VAR_6->base;
  return VAR_1;
}
