
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pgno; int flags; int * pPager; } ;
typedef int Pager ;
typedef TYPE_1__ DbPage ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(DbPage *VAR_1){
  Pager *VAR_2;
  FUNC_0( VAR_1!=0 );
  FUNC_0( VAR_1->pgno==1 );
  FUNC_0( (VAR_1->flags & VAR_0)==0 );
  VAR_2 = VAR_1->pPager;
  FUNC_2(VAR_2);
  FUNC_3(VAR_1);
  FUNC_1(VAR_2);
}
