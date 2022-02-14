
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;


 int VAR_0 ;

__attribute__((used)) static inline ut64 FUNC_0(int VAR_1) {
 ut64 VAR_2 = VAR_0;
 if (VAR_1 > 0 && VAR_1 < 64) {
  VAR_2 = (ut64)(((ut64)(2) << VAR_1) - 1);
  if (!VAR_2) {
   VAR_2 = VAR_0;
  }
 }
 return VAR_2;
}
