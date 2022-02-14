
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static inline ut16 FUNC_1(const void *VAR_1, size_t VAR_2) {
 if (!VAR_1) {
  return VAR_0;
 }
 const ut8 *VAR_3 = (const ut8*)VAR_1 + VAR_2;
 return FUNC_0 (VAR_3);
}
