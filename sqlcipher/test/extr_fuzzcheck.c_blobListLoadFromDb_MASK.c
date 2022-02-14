
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_4__ {int sz; struct TYPE_4__* pNext; scalar_t__* a; int seq; int id; } ;
typedef TYPE_1__ Blob ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3 *VAR_1,
  const char *VAR_2,
  int VAR_3,
  int *VAR_4,
  Blob **VAR_5
){
  Blob VAR_6;
  Blob *VAR_7;
  sqlite3_stmt *VAR_8;
  int VAR_9 = 0;
  int VAR_10;
  char *VAR_11;

  if( VAR_3>0 ){
    VAR_11 = FUNC_9("%s WHERE rowid=%d", VAR_2, VAR_3);
  }else{
    VAR_11 = FUNC_9("%s", VAR_2);
  }
  VAR_10 = FUNC_10(VAR_1, VAR_11, -1, &VAR_8, 0);
  FUNC_8(VAR_11);
  if( VAR_10 ) FUNC_0("%s", FUNC_6(VAR_1));
  VAR_6.pNext = 0;
  VAR_7 = &VAR_6;
  while( VAR_0==FUNC_11(VAR_8) ){
    int VAR_12 = FUNC_4(VAR_8, 1);
    Blob *VAR_13 = FUNC_2(0, sizeof(*VAR_13)+VAR_12 );
    VAR_13->id = FUNC_5(VAR_8, 0);
    VAR_13->sz = VAR_12;
    VAR_13->seq = VAR_9++;
    VAR_13->pNext = 0;
    FUNC_1(VAR_13->a, FUNC_3(VAR_8,1), VAR_12);
    VAR_13->a[VAR_12] = 0;
    VAR_7->pNext = VAR_13;
    VAR_7 = VAR_13;
  }
  FUNC_7(VAR_8);
  *VAR_4 = VAR_9;
  *VAR_5 = VAR_6.pNext;
}
