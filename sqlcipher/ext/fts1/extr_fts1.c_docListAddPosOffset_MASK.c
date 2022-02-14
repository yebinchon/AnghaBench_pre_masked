
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iType; int iLastOffset; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(
  DocList *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  FUNC_2( VAR_3->iType>=VAR_0 );
  FUNC_0(VAR_3, VAR_4, VAR_5);
  if( VAR_3->iType==VAR_1 ){
    FUNC_2( VAR_6>=VAR_3->iLastOffset );
    FUNC_1(VAR_3, VAR_6-VAR_3->iLastOffset);
    VAR_3->iLastOffset = VAR_6;
    FUNC_2( VAR_7>=VAR_6 );
    FUNC_1(VAR_3, VAR_7-VAR_6);
  }
  FUNC_1(VAR_3, VAR_2);
}
