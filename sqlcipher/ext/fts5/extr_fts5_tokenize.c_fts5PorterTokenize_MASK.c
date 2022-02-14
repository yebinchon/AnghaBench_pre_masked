
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* xToken ) (void*,int,char const*,int,int,int) ;int aBuf; void* pCtx; } ;
struct TYPE_4__ {int (* xTokenize ) (int ,void*,int,char const*,int,int ) ;} ;
struct TYPE_5__ {int pTokenizer; TYPE_1__ tokenizer; int aBuf; } ;
typedef TYPE_2__ PorterTokenizer ;
typedef TYPE_3__ PorterContext ;
typedef int Fts5Tokenizer ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int,char const*,int,int ) ;

__attribute__((used)) static int FUNC_1(
  Fts5Tokenizer *VAR_1,
  void *VAR_2,
  int VAR_3,
  const char *VAR_4, int VAR_5,
  int (*VAR_6)(void*, int, const char*, int VAR_7, int VAR_8, int VAR_9)
){
  PorterTokenizer *VAR_10 = (PorterTokenizer*)VAR_1;
  PorterContext VAR_11;
  VAR_11.xToken = VAR_6;
  VAR_11.pCtx = VAR_2;
  VAR_11.aBuf = VAR_10->aBuf;
  return VAR_10->tokenizer.xTokenize(
      VAR_10->pTokenizer, (void*)&VAR_11, VAR_3, VAR_4, VAR_5, VAR_0
  );
}
