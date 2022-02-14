
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int validYMD; int Y; int M; int D; int iJD; int validJD; } ;
typedef TYPE_1__ DateTime ;



__attribute__((used)) static void FUNC_0(DateTime *VAR_0){
  int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
  if( VAR_0->validYMD ) return;
  if( !VAR_0->validJD ){
    VAR_0->Y = 2000;
    VAR_0->M = 1;
    VAR_0->D = 1;
  }else{
    VAR_1 = (int)((VAR_0->iJD + 43200000)/86400000);
    VAR_2 = (int)((VAR_1 - 1867216.25)/36524.25);
    VAR_2 = VAR_1 + 1 + VAR_2 - (VAR_2/4);
    VAR_3 = VAR_2 + 1524;
    VAR_4 = (int)((VAR_3 - 122.1)/365.25);
    VAR_5 = (36525*VAR_4)/100;
    VAR_6 = (int)((VAR_3-VAR_5)/30.6001);
    VAR_7 = (int)(30.6001*VAR_6);
    VAR_0->D = VAR_3 - VAR_5 - VAR_7;
    VAR_0->M = VAR_6<14 ? VAR_6-1 : VAR_6-13;
    VAR_0->Y = VAR_0->M>2 ? VAR_4 - 4716 : VAR_4 - 4715;
  }
  VAR_0->validYMD = 1;
}
