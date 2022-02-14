
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut16 ;



__attribute__((used)) static inline ut16 FUNC_0(const void *VAR_0) {
 const ut8 *VAR_1 = (const ut8*)VAR_0;
 return (((ut16)VAR_1[0]) << 8) | (((ut16)VAR_1[1]) << 0);
}
