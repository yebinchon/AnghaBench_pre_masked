
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int nDelta; char* aDelta; unsigned int iNext; scalar_t__ a2; scalar_t__ a1; void* eOp; } ;
typedef TYPE_1__ deltaparsevtab_cursor ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const**,int*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_vtab_cursor *VAR_4,
  int VAR_5, const char *VAR_6,
  int VAR_7, sqlite3_value **VAR_8
){
  deltaparsevtab_cursor *VAR_9 = (deltaparsevtab_cursor *)VAR_4;
  const char *VAR_10;
  int VAR_11 = 0;
  VAR_9->eOp = VAR_0;
  if( VAR_5!=1 ){
    return VAR_3;
  }
  VAR_9->nDelta = FUNC_4(VAR_8[0]);
  VAR_10 = (const char*)FUNC_3(VAR_8[0]);
  if( VAR_9->nDelta==0 || VAR_10==0 ){
    return VAR_3;
  }
  VAR_9->aDelta = FUNC_2( VAR_9->nDelta+1 );
  if( VAR_9->aDelta==0 ){
    VAR_9->nDelta = 0;
    return VAR_2;
  }
  FUNC_1(VAR_9->aDelta, VAR_10, VAR_9->nDelta);
  VAR_9->aDelta[VAR_9->nDelta] = 0;
  VAR_10 = VAR_9->aDelta;
  VAR_9->eOp = VAR_1;
  VAR_9->a1 = FUNC_0(&VAR_10, &VAR_11);
  if( VAR_10[0]!='\n' ){
    VAR_9->eOp = VAR_0;
    VAR_9->a1 = VAR_9->a2 = 0;
    VAR_9->iNext = VAR_9->nDelta;
    return VAR_3;
  }
  VAR_10++;
  VAR_9->iNext = (unsigned int)(VAR_10 - VAR_9->aDelta);
  return VAR_3;
}
