
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 const ut64 *VAR_2 = (const ut64*)VAR_0;
 const ut64 *VAR_3 = (const ut64*)VAR_1;
 if (*VAR_2 > *VAR_3) {
  return 1;
 }
 if (*VAR_2 == *VAR_3) {
  return 0;
 }
 return -1;
}
