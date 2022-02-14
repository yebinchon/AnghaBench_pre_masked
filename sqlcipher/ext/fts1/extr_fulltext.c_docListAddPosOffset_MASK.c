
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iType; int iLastOffset; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(DocList *VAR_1, int VAR_2,
                                int VAR_3, int VAR_4){
  FUNC_1( VAR_1->iType==VAR_0 );
  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_3-VAR_1->iLastOffset);
  VAR_1->iLastOffset = VAR_3;
  FUNC_0(VAR_1, VAR_4-VAR_3);
}
