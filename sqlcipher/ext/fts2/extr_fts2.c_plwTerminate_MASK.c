
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iPos; TYPE_1__* dlw; } ;
struct TYPE_4__ {scalar_t__ iType; int b; } ;
typedef TYPE_2__ PLWriter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(PLWriter *VAR_3){
  if( VAR_3->dlw->iType>VAR_0 ){
    char VAR_4[VAR_2];
    int VAR_5 = FUNC_1(VAR_4, VAR_1);
    FUNC_0(VAR_3->dlw->b, VAR_4, VAR_5);
  }


  VAR_3->iPos = -1;

}
