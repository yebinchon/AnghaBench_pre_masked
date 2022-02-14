
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treething {scalar_t__ qu; int * ans; } ;
typedef scalar_t__ adns_query ;
typedef int adns_answer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int **,void**) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void) {
  adns_query VAR_3;
  adns_answer *VAR_4;
  void *VAR_5;
  struct treething *VAR_6;
  int VAR_7;

  for (;;) {
    VAR_3= 0; VAR_5= 0; VAR_4= 0;
    VAR_7= FUNC_0(VAR_2,&VAR_3,&VAR_4,&VAR_5);
    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) break;
    FUNC_1(!VAR_7);
    VAR_6= VAR_5;
    VAR_6->ans= VAR_4;
    VAR_6->qu= 0;
  }
}
