
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zNum ;
struct TYPE_2__ {unsigned int szTest; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,char*) ;
 int FUNC_1 (unsigned int,char*,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

void FUNC_3(void){
  unsigned VAR_1, VAR_2;
  unsigned VAR_3, VAR_4;
  char VAR_5[2000];

  VAR_2 = VAR_0.szTest;
  for(VAR_1=1; VAR_1<=VAR_2; VAR_1++){
    VAR_3 = FUNC_2(VAR_1, VAR_2);
    VAR_4 = FUNC_2(VAR_3, VAR_2);
    FUNC_1(VAR_3, VAR_5, sizeof(VAR_5));
    FUNC_0("%5d %5d %5d %s\n", VAR_1, VAR_3, VAR_4, VAR_5);
  }
}
