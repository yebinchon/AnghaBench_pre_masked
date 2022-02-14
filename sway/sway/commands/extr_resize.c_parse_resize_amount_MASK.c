
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resize_amount {int amount; void* unit; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, char **VAR_3,
  struct resize_amount *VAR_4) {
 char *VAR_5;
 VAR_4->amount = (int)FUNC_1(VAR_3[0], &VAR_5, 10);
 if (*VAR_5) {

  VAR_4->unit = FUNC_0(VAR_5);
  return 1;
 }
 if (VAR_2 == 1) {
  VAR_4->unit = VAR_0;
  return 1;
 }

 VAR_4->unit = FUNC_0(VAR_3[1]);
 if (VAR_4->unit == VAR_1) {
  VAR_4->unit = VAR_0;
  return 1;
 }
 return 2;
}
