
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* aInput; int nInput; int base; } ;
typedef TYPE_1__ unicode_cursor ;
typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_tokenizer *VAR_2,
  const char *VAR_3,
  int VAR_4,
  sqlite3_tokenizer_cursor **VAR_5
){
  unicode_cursor *VAR_6;

  VAR_6 = (unicode_cursor *)FUNC_2(sizeof(unicode_cursor));
  if( VAR_6==0 ){
    return VAR_0;
  }
  FUNC_1(VAR_6, 0, sizeof(unicode_cursor));

  VAR_6->aInput = (const unsigned char *)VAR_3;
  if( VAR_3==0 ){
    VAR_6->nInput = 0;
  }else if( VAR_4<0 ){
    VAR_6->nInput = (int)FUNC_3(VAR_3);
  }else{
    VAR_6->nInput = VAR_4;
  }

  *VAR_5 = &VAR_6->base;
  FUNC_0(VAR_2);
  return VAR_1;
}
