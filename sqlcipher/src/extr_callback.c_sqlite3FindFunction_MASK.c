
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_13__ {int mDbFlags; int aFunc; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_14__ {char const* zName; scalar_t__ xSFunc; struct TYPE_14__* pNext; scalar_t__ funcFlags; scalar_t__ nArg; } ;
typedef TYPE_2__ FuncDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_6 (int,char const*) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int *,char const*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char const*) ;
 scalar_t__* VAR_2 ;

FuncDef *FUNC_11(
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5,
  u8 VAR_6,
  u8 VAR_7
){
  FuncDef *VAR_8;
  FuncDef *VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11;
  int VAR_12;

  FUNC_1( VAR_5>=(-2) );
  FUNC_1( VAR_5>=(-1) || VAR_7==0 );
  VAR_12 = FUNC_10(VAR_4);



  VAR_8 = (FuncDef*)FUNC_7(&VAR_3->aFunc, VAR_4);
  while( VAR_8 ){
    int VAR_13 = FUNC_2(VAR_8, VAR_5, VAR_6);
    if( VAR_13>VAR_10 ){
      VAR_9 = VAR_8;
      VAR_10 = VAR_13;
    }
    VAR_8 = VAR_8->pNext;
  }
  if( !VAR_7 && (VAR_9==0 || (VAR_3->mDbFlags & VAR_0)!=0) ){
    VAR_10 = 0;
    VAR_11 = FUNC_0(VAR_2[(u8)VAR_4[0]], VAR_12);
    VAR_8 = FUNC_6(VAR_11, VAR_4);
    while( VAR_8 ){
      int VAR_14 = FUNC_2(VAR_8, VAR_5, VAR_6);
      if( VAR_14>VAR_10 ){
        VAR_9 = VAR_8;
        VAR_10 = VAR_14;
      }
      VAR_8 = VAR_8->pNext;
    }
  }





  if( VAR_7 && VAR_10<VAR_1 &&
      (VAR_9 = FUNC_5(VAR_3, sizeof(*VAR_9)+VAR_12+1))!=0 ){
    FuncDef *VAR_15;
    u8 *VAR_16;
    VAR_9->zName = (const char*)&VAR_9[1];
    VAR_9->nArg = (u16)VAR_5;
    VAR_9->funcFlags = VAR_6;
    FUNC_3((char*)&VAR_9[1], VAR_4, VAR_12+1);
    for(VAR_16=(u8*)VAR_9->zName; *VAR_16; VAR_16++) *VAR_16 = VAR_2[*VAR_16];
    VAR_15 = (FuncDef*)FUNC_8(&VAR_3->aFunc, VAR_9->zName, VAR_9);
    if( VAR_15==VAR_9 ){
      FUNC_4(VAR_3, VAR_9);
      FUNC_9(VAR_3);
      return 0;
    }else{
      VAR_9->pNext = VAR_15;
    }
  }

  if( VAR_9 && (VAR_9->xSFunc || VAR_7) ){
    return VAR_9;
  }
  return 0;
}
