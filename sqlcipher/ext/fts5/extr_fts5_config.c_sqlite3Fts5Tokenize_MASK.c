
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pTok; TYPE_1__* pTokApi; } ;
struct TYPE_4__ {int (* xTokenize ) (int ,void*,int,char const*,int,int (*) (void*,int,char const*,int,int,int)) ;} ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int,char const*,int,int (*) (void*,int,char const*,int,int,int)) ;

int FUNC_1(
  Fts5Config *VAR_1,
  int VAR_2,
  const char *VAR_3, int VAR_4,
  void *VAR_5,
  int (*VAR_6)(void*, int, const char*, int, int, int)
){
  if( VAR_3==0 ) return VAR_0;
  return VAR_1->pTokApi->xTokenize(
      VAR_1->pTok, VAR_5, VAR_2, VAR_3, VAR_4, VAR_6
  );
}
