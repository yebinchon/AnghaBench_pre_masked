
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut16 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (void const*) ;

__attribute__((used)) static ut16 FUNC_2(const void* VAR_0) {
 if (FUNC_0()) {
  return FUNC_1(VAR_0);
 }
 const ut8* VAR_1 = (const ut8*)VAR_0;
 return (ut16)((ut16)VAR_1[0] + (VAR_1[1]<<8));
}
