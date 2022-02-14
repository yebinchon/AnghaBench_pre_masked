
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int db; scalar_t__ bWal; } ;
struct TYPE_8__ {int (* xBusy ) (void*,int) ;void* pBusyArg; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SuperlockBusy ;
typedef TYPE_2__ Superlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,int,char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;

int FUNC_8(
  const char *VAR_5,
  const char *VAR_6,
  int (*VAR_7)(void*,int),
  void *VAR_8,
  void **VAR_9
){
  SuperlockBusy VAR_10 = {0, 0, 0};
  int VAR_11;
  Superlock *VAR_12;

  VAR_12 = FUNC_3(sizeof(Superlock));
  if( !VAR_12 ) return VAR_0;
  FUNC_0(VAR_12, 0, sizeof(Superlock));


  VAR_11 = FUNC_4(
      VAR_5, &VAR_12->db, VAR_3|VAR_2, VAR_6
  );
  if( VAR_11==VAR_1 ){
    VAR_10.xBusy = VAR_7;
    VAR_10.pBusyArg = VAR_8;
    FUNC_1(VAR_12->db, VAR_4, (void *)&VAR_10);
    VAR_11 = FUNC_2(VAR_12->db, "BEGIN EXCLUSIVE", 0, 0, 0);
  }
  if( VAR_11==VAR_1 ){
    if( VAR_1==(VAR_11 = FUNC_6(VAR_12)) && VAR_12->bWal ){
      VAR_11 = FUNC_2(VAR_12->db, "COMMIT", 0, 0, 0);
      if( VAR_11==VAR_1 ){
        VAR_11 = FUNC_7(VAR_12->db, &VAR_10);
      }
    }
  }

  if( VAR_11!=VAR_1 ){
    FUNC_5(VAR_12);
    *VAR_9 = 0;
  }else{
    *VAR_9 = VAR_12;
  }

  return VAR_11;
}
