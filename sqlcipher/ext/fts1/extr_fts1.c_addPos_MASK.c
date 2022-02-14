
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nData; int iLastColumn; int iLastPos; int iLastOffset; } ;
typedef TYPE_1__ DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(DocList *VAR_2, int VAR_3, int VAR_4){
  FUNC_1( VAR_2->nData>0 );
  --VAR_2->nData;
  if( VAR_3!=VAR_2->iLastColumn ){
    FUNC_1( VAR_3>VAR_2->iLastColumn );
    FUNC_0(VAR_2, VAR_1);
    FUNC_0(VAR_2, VAR_3);
    VAR_2->iLastColumn = VAR_3;
    VAR_2->iLastPos = VAR_2->iLastOffset = 0;
  }
  FUNC_1( VAR_4>=VAR_2->iLastPos );
  FUNC_0(VAR_2, VAR_4-VAR_2->iLastPos+VAR_0);
  VAR_2->iLastPos = VAR_4;
}
