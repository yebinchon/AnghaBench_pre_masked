
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut16 ;


 int VAR_0 ;

__attribute__((used)) static inline ut16 FUNC_0(const void *VAR_1) {
 if (!VAR_1) {
  return VAR_0;
 }
 const ut8 *VAR_2 = (const ut8*)VAR_1;
 return (((ut16)VAR_2[0]) << 8) | (((ut16)VAR_2[1]) << 0);
}
