
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFanout; } ;
typedef TYPE_1__ DbParameters ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,...) ;

__attribute__((used)) static void FUNC_1(
  DbParameters *VAR_1,
  int VAR_2,
  int VAR_3,
  char *VAR_4
){
  if( VAR_2==0 ){
    FUNC_0(VAR_4, VAR_0, "k.%.10d", VAR_3);
  }else{
    int VAR_5 = 1;
    int VAR_6;
    for(VAR_6=0; VAR_6<VAR_2; VAR_6++) VAR_5 = VAR_5 * VAR_1->nFanout;
    FUNC_0(VAR_4, VAR_0, "c.%d.%.10d", VAR_2, VAR_5*(VAR_3/VAR_5));
  }
}
