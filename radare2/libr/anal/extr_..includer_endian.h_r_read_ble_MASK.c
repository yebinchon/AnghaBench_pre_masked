
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;


 int VAR_0 ;
 int FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*,int) ;
 int FUNC_2 (void const*,int) ;

__attribute__((used)) static inline ut64 FUNC_3(const void *VAR_1, bool VAR_2, int VAR_3) {
 switch (VAR_3) {
 case 8:
  return (ut64) ((const ut8*)VAR_1)[0];
 case 16:
  return FUNC_0 (VAR_1, VAR_2);
 case 32:
  return FUNC_1 (VAR_1, VAR_2);
 case 64:
  return FUNC_2 (VAR_1, VAR_2);
 default:
  return VAR_0;
 }
}
