
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aTokenChar; int aCategory; } ;
typedef TYPE_1__ Unicode61Tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static int FUNC_2(Unicode61Tokenizer *VAR_2, const char *VAR_3){
  const char *VAR_4 = VAR_3;

  while( *VAR_4 ){
    while( *VAR_4==' ' || *VAR_4=='\t' ) VAR_4++;
    if( *VAR_4 && FUNC_1(VAR_4, VAR_2->aCategory) ){
      return VAR_0;
    }
    while( *VAR_4!=' ' && *VAR_4!='\t' && *VAR_4!='\0' ) VAR_4++;
  }

  FUNC_0(VAR_2->aCategory, VAR_2->aTokenChar);
  return VAR_1;
}
