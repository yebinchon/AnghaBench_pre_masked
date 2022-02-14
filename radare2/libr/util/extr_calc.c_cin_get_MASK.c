
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char oc; char* calc_buf; size_t calc_i; } ;
typedef TYPE_1__ RNumCalc ;
typedef int RNum ;



__attribute__((used)) static int FUNC_0(RNum *VAR_0, RNumCalc *VAR_1, char *VAR_2) {
 if (VAR_1->oc) {
  *VAR_2 = VAR_1->oc;
  VAR_1->oc = 0;
 } else {
  if (!VAR_1->calc_buf || !*VAR_1->calc_buf) {
   return 0;
  }
  *VAR_2 = VAR_1->calc_buf[VAR_1->calc_i];
  if (*VAR_2) {
   VAR_1->calc_i++;
  } else {
   return 0;
  }
 }
 return 1;
}
