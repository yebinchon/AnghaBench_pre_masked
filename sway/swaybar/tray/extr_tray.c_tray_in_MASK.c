
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(int VAR_1, short VAR_2, void *VAR_3) {
 sd_bus *VAR_4 = VAR_3;
 int VAR_5;
 while ((VAR_5 = FUNC_0(VAR_4, ((void*)0))) > 0) {

 }
 if (VAR_5 < 0) {
  FUNC_2(VAR_0, "Failed to process bus: %s", FUNC_1(-VAR_5));
 }
}
