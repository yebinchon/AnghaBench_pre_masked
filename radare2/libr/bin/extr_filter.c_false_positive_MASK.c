
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
 int VAR_1;
 ut8 VAR_2[0x100];
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 for (VAR_1 = 0; VAR_1 < 0x100; VAR_1++) {
  VAR_2[VAR_1] = 0;
 }
 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
  if (FUNC_0 (VAR_0[VAR_1])) {
   VAR_9++;
  } else if (VAR_0[VAR_1]>='a' && VAR_0[VAR_1]<='z') {
   VAR_4++;
  } else if (VAR_0[VAR_1]>='A' && VAR_0[VAR_1]<='Z') {
   VAR_3++;
  } else {
   VAR_5++;
  }
  if (VAR_0[VAR_1]=='\\') {
   VAR_5++;
  }
  if (VAR_0[VAR_1]==' ') {
   VAR_8++;
  }
  VAR_2[(ut8)VAR_0[VAR_1]] = 1;
  VAR_7++;
 }
 for (VAR_1 = 0; VAR_1<0x100; VAR_1++) {
  if (VAR_2[VAR_1]) {
   VAR_6++;
  }
 }
 if (VAR_7 > 2 && VAR_0[0] != '_') {
  if (VAR_7 < 10) {
   return 1;
  }
  if (VAR_5 >= (VAR_9 + VAR_3 + VAR_4)) {
   return 1;
  }
  if (VAR_4 < 3) {
   return 1;
  }
 }
 return 0;
}
