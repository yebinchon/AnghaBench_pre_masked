
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 () ;

void
FUNC_5(int *VAR_1) {
 if (VAR_0 == 0) {
  FUNC_1(*VAR_1, 128,
      "Argument passed into cleanup function should match tsd "
      "value");
 }
 ++VAR_0;





 bool VAR_2 = 0;
 switch (*VAR_1) {
 case 128:
  *VAR_1 = 1;
  VAR_2 = 1;
  break;
 case 1:
  *VAR_1 = 2;
  VAR_2 = 1;
  break;
 case 2:
  return;
 default:
  FUNC_4();
 }

 if (VAR_2) {
  void *VAR_3 = FUNC_3(1, 0);
  FUNC_0(VAR_3, "Unexpeced mallocx() failure");
  FUNC_2(VAR_3, 0);
 }
}
