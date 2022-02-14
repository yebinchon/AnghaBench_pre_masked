
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_tokenizer ;
struct TYPE_2__ {char const* pInput; int nBytes; char const* pCurrent; int base; scalar_t__ nTokenAllocated; scalar_t__ nTokenBytes; int * zToken; scalar_t__ iToken; } ;
typedef TYPE_1__ simple_tokenizer_cursor ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_tokenizer *VAR_1,
  const char *VAR_2, int VAR_3,
  sqlite3_tokenizer_cursor **VAR_4
){
  simple_tokenizer_cursor *VAR_5;

  VAR_5 = (simple_tokenizer_cursor *) FUNC_0(sizeof(simple_tokenizer_cursor));
  VAR_5->pInput = VAR_2;
  VAR_5->nBytes = VAR_3<0 ? (int) FUNC_1(VAR_2) : VAR_3;
  VAR_5->pCurrent = VAR_5->pInput;
  VAR_5->iToken = 0;
  VAR_5->zToken = ((void*)0);
  VAR_5->nTokenBytes = 0;
  VAR_5->nTokenAllocated = 0;

  *VAR_4 = &VAR_5->base;
  return VAR_0;
}
