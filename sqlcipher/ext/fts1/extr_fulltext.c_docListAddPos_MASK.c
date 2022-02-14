
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iType; int iLastPos; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(DocList *VAR_1, int VAR_2){
  FUNC_1( VAR_1->iType>=VAR_0 );
  FUNC_0(VAR_1, VAR_2-VAR_1->iLastPos+1);
  VAR_1->iLastPos = VAR_2;
}
