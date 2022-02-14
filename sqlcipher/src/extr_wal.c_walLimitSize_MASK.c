
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_3__ {int zWalName; int pWalFd; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static void FUNC_5(Wal *VAR_1, i64 VAR_2){
  i64 VAR_3;
  int VAR_4;
  FUNC_0();
  VAR_4 = FUNC_2(VAR_1->pWalFd, &VAR_3);
  if( VAR_4==VAR_0 && (VAR_3 > VAR_2 ) ){
    VAR_4 = FUNC_3(VAR_1->pWalFd, VAR_2);
  }
  FUNC_1();
  if( VAR_4 ){
    FUNC_4(VAR_4, "cannot limit WAL size: %s", VAR_1->zWalName);
  }
}
