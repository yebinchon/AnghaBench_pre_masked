
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int st8 ;


 int FUNC_0 (char*,int) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static st8 FUNC_2(char *VAR_0) {
 st8 VAR_1 = 0;
 ut8 VAR_2;
 FUNC_0 (VAR_0, 0);

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  switch (VAR_0[VAR_2]) {
  case 'a':
   VAR_1 |= 0x4;
   break;
  case 'i':
   VAR_1 |= 0x2;
   break;
  case 'f':
   VAR_1 |= 0x1;
   break;
  default:
   return -1;
  }
 }
 return VAR_1;
}
