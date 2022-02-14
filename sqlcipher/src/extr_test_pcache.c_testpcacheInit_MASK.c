
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pDummy; scalar_t__ nInstance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3){
  FUNC_0( VAR_3==(void*)&VAR_2 );
  FUNC_0( VAR_2.pDummy==0 );
  FUNC_0( VAR_2.nInstance==0 );
  VAR_2.pDummy = FUNC_1(10);
  return VAR_2.pDummy==0 ? VAR_0 : VAR_1;
}
