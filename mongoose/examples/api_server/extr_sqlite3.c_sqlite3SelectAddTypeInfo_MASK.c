
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int w ;
struct TYPE_4__ {int bSelectDepthFirst; int * pParse; int xExprCallback; int xSelectCallback; } ;
typedef TYPE_1__ Walker ;
typedef int Select ;
typedef int Parse ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_2, Select *VAR_3){

  Walker VAR_4;
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.xSelectCallback = VAR_1;
  VAR_4.xExprCallback = VAR_0;
  VAR_4.pParse = VAR_2;
  VAR_4.bSelectDepthFirst = 1;
  FUNC_1(&VAR_4, VAR_3);

}
