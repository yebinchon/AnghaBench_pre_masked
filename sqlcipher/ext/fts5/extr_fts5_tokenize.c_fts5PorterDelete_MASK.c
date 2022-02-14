
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xDelete ) (scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ pTokenizer; TYPE_1__ tokenizer; } ;
typedef TYPE_2__ PorterTokenizer ;
typedef int Fts5Tokenizer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Fts5Tokenizer *VAR_0){
  if( VAR_0 ){
    PorterTokenizer *VAR_1 = (PorterTokenizer*)VAR_0;
    if( VAR_1->pTokenizer ){
      VAR_1->tokenizer.xDelete(VAR_1->pTokenizer);
    }
    FUNC_0(VAR_1);
  }
}
