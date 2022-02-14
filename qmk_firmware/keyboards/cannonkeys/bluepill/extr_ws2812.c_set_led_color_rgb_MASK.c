
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; int r; int g; } ;
typedef TYPE_1__ LED_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int * VAR_3 ;

void FUNC_1(LED_TYPE VAR_4, int VAR_5){
  for(int VAR_6 = 0; VAR_6 < 4; VAR_6++)
    VAR_3[VAR_2 + VAR_0*VAR_5 + VAR_6] = FUNC_0(VAR_4.g, VAR_6);
  for(int VAR_7 = 0; VAR_7 < 4; VAR_7++)
    VAR_3[VAR_2 + VAR_0*VAR_5 + VAR_1+VAR_7] = FUNC_0(VAR_4.r, VAR_7);
  for(int VAR_8 = 0; VAR_8 < 4; VAR_8++)
    VAR_3[VAR_2 + VAR_0*VAR_5 + VAR_1*2+VAR_8] = FUNC_0(VAR_4.b, VAR_8);
}
