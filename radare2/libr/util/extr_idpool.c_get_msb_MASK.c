
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;



__attribute__((used)) static ut32 FUNC_0(ut32 VAR_0) {
 int VAR_1;
 for (VAR_1 = 31; VAR_1 > (-1); VAR_1--) {
  if (VAR_0 & (0x1U << VAR_1)) {
   return (VAR_0 & (0x1U << VAR_1));
  }
 }
 return 0;
}
