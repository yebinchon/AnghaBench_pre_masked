
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pDbFd; scalar_t__ exclusiveMode; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(Wal *VAR_2, int VAR_3){
  if( VAR_2->exclusiveMode ) return;
  (void)FUNC_1(VAR_2->pDbFd, VAR_3, 1,
                         VAR_1 | VAR_0);
  FUNC_0(("WAL%p: release SHARED-%s\n", VAR_2, FUNC_2(VAR_3)));
}
