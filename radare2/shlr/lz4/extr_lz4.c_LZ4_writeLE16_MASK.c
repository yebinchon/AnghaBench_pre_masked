
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut16 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(void* VAR_0, ut16 VAR_1) {
 if (FUNC_0 ()) {
  FUNC_1 (VAR_0, VAR_1);
 } else {
  ut8* VAR_2 = (ut8*)VAR_0;
  VAR_2[0] = (ut8) VAR_1;
  VAR_2[1] = (ut8)(VAR_1>>8);
 }
}
