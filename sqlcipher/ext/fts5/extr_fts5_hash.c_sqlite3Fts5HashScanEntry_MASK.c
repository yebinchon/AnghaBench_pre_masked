
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_1__* pScan; } ;
struct TYPE_7__ {int nData; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(
  Fts5Hash *VAR_0,
  const char **VAR_1,
  const u8 **VAR_2,
  int *VAR_3
){
  Fts5HashEntry *VAR_4;
  if( (VAR_4 = VAR_0->pScan) ){
    char *VAR_5 = FUNC_0(VAR_4);
    int VAR_6 = (int)FUNC_2(VAR_5);
    FUNC_1(VAR_0, VAR_4, 0);
    *VAR_1 = VAR_5;
    *VAR_2 = (const u8*)&VAR_5[VAR_6+1];
    *VAR_3 = VAR_4->nData - (sizeof(Fts5HashEntry) + VAR_6 + 1);
  }else{
    *VAR_1 = 0;
    *VAR_2 = 0;
    *VAR_3 = 0;
  }
}
