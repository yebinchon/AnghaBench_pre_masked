
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ pgno; int flags; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ DbPage ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(DbPage *VAR_0, Pgno VAR_1, u16 VAR_2){
  FUNC_0( VAR_0->pgno!=VAR_1 );
  VAR_0->flags = VAR_2;
  FUNC_1(VAR_0, VAR_1);
}
