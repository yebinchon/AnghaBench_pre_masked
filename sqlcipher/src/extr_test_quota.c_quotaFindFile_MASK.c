
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pFiles; } ;
typedef TYPE_1__ quotaGroup ;
struct TYPE_7__ {char* zFilename; TYPE_1__* pGroup; struct TYPE_7__** ppPrev; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ quotaFile ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static quotaFile *FUNC_5(
  quotaGroup *VAR_0,
  const char *VAR_1,
  int VAR_2
){
  quotaFile *VAR_3 = VAR_0->pFiles;
  while( VAR_3 && FUNC_3(VAR_3->zFilename, VAR_1)!=0 ){
    VAR_3 = VAR_3->pNext;
  }
  if( VAR_3==0 && VAR_2 ){
    int VAR_4 = (int)(FUNC_4(VAR_1) & 0x3fffffff);
    VAR_3 = (quotaFile *)FUNC_2( sizeof(*VAR_3) + VAR_4 + 1 );
    if( VAR_3 ){
      FUNC_1(VAR_3, 0, sizeof(*VAR_3));
      VAR_3->zFilename = (char*)&VAR_3[1];
      FUNC_0(VAR_3->zFilename, VAR_1, VAR_4+1);
      VAR_3->pNext = VAR_0->pFiles;
      if( VAR_0->pFiles ) VAR_0->pFiles->ppPrev = &VAR_3->pNext;
      VAR_3->ppPrev = &VAR_0->pFiles;
      VAR_0->pFiles = VAR_3;
      VAR_3->pGroup = VAR_0;
    }
  }
  return VAR_3;
}
