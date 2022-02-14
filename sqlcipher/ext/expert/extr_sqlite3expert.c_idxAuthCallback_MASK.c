
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pWrite; TYPE_3__* pTable; } ;
typedef TYPE_1__ sqlite3expert ;
struct TYPE_7__ {char* zName; struct TYPE_7__* pNext; } ;
struct TYPE_6__ {int eOp; struct TYPE_6__* pNext; TYPE_3__* pTab; } ;
typedef TYPE_2__ IdxWrite ;
typedef TYPE_3__ IdxTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_4,
  int VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  const char *VAR_9
){
  int VAR_10 = VAR_2;
  (void)VAR_7;
  (void)VAR_9;
  if( VAR_5==VAR_1 || VAR_5==VAR_3 || VAR_5==VAR_0 ){
    if( FUNC_1(VAR_8, "main")==0 ){
      sqlite3expert *VAR_11 = (sqlite3expert*)VAR_4;
      IdxTable *VAR_12;
      for(VAR_12=VAR_11->pTable; VAR_12; VAR_12=VAR_12->pNext){
        if( 0==FUNC_1(VAR_6, VAR_12->zName) ) break;
      }
      if( VAR_12 ){
        IdxWrite *VAR_13;
        for(VAR_13=VAR_11->pWrite; VAR_13; VAR_13=VAR_13->pNext){
          if( VAR_13->pTab==VAR_12 && VAR_13->eOp==VAR_5 ) break;
        }
        if( VAR_13==0 ){
          VAR_13 = FUNC_0(&VAR_10, sizeof(IdxWrite));
          if( VAR_10==VAR_2 ){
            VAR_13->pTab = VAR_12;
            VAR_13->eOp = VAR_5;
            VAR_13->pNext = VAR_11->pWrite;
            VAR_11->pWrite = VAR_13;
          }
        }
      }
    }
  }
  return VAR_10;
}
