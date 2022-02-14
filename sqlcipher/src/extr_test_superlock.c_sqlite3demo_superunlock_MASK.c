
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_9__ {int db; scalar_t__ bWal; } ;
struct TYPE_7__ {int (* xShmLock ) (TYPE_2__*,int,int,int) ;} ;
typedef TYPE_3__ Superlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,void*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;

void FUNC_5(void *VAR_5){
  Superlock *VAR_6 = (Superlock *)VAR_5;
  if( VAR_6->bWal ){
    int VAR_7;
    int VAR_8 = VAR_4 | VAR_2;
    sqlite3_file *VAR_9 = 0;
    VAR_7 = FUNC_1(VAR_6->db, "main", VAR_0, (void *)&VAR_9);
    if( VAR_7==VAR_1 ){
      VAR_9->pMethods->xShmLock(VAR_9, 2, 1, VAR_8);
      VAR_9->pMethods->xShmLock(VAR_9, 3, VAR_3-3, VAR_8);
    }
  }
  FUNC_0(VAR_6->db);
  FUNC_2(VAR_6);
}
