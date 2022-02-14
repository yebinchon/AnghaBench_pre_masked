
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_6__ {int member_1; int member_2; int member_3; TYPE_1__ member_0; } ;
typedef TYPE_2__ Mctest ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_2 (int*,char const*,char*,char const*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(
  const char *VAR_1,
  const char *VAR_2,
  int *VAR_3
){
  int VAR_4;
  Mctest VAR_5[] = {
    { { VAR_0, 10,10, 100,100 }, 100, 10, 5 },
  };

  for(VAR_4=0; VAR_4<FUNC_0(VAR_5); VAR_4++){
    if( FUNC_2(VAR_3, VAR_2, "mc1.%s.%d", VAR_1, VAR_4) ){
      FUNC_1(VAR_1, &VAR_5[VAR_4], VAR_3);
      FUNC_3(*VAR_3);
    }
  }
}
