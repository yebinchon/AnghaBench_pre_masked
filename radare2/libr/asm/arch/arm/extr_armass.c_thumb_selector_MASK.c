
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static ut64 FUNC_15(char *VAR_1[]) {
 FUNC_0(VAR_1);
 ut64 VAR_2 = 0;
 ut8 VAR_3;
 for (VAR_3 = 0; VAR_3 < 15; VAR_3++) {
  if (VAR_1[VAR_3] == ((void*)0)) {
   break;
  }
  if (FUNC_7 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 1 << (VAR_3*4);
   continue;
  }
  VAR_0 = 0;
  FUNC_3 (VAR_1[VAR_3]);
  if (!VAR_0) {
   VAR_2 |= 2 << (VAR_3*4);
   continue;
  }
  VAR_0 = 0;
  FUNC_14 (VAR_1[VAR_3]);
  if (!VAR_0) {
   VAR_2 |= 3 << (VAR_3*4);
   continue;
  }
  if (FUNC_1 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 4 << (VAR_3*4);
   continue;
  }
  if (FUNC_2 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 5 << (VAR_3*4);
   continue;
  }
  if (FUNC_11 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 6 << (VAR_3*4);
   continue;
  }
  if (FUNC_12 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 7 << (VAR_3*4);
   continue;
  }
  VAR_0 = 0;
  FUNC_5(VAR_1[VAR_3]);
  if (!VAR_0) {
   VAR_2 |= 8 << (VAR_3*4);
   continue;
  }
  VAR_0 = 0;
  FUNC_6(VAR_1[VAR_3]);
  if (!VAR_0) {
   VAR_2 |= 9 << (VAR_3*4);
   continue;
  }
  if (FUNC_9 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 0xa << (VAR_3*4);
   continue;
  }
  if (FUNC_8 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 0xb << (VAR_3*4);
   continue;
  }
  if (FUNC_10 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 0xc << (VAR_3*4);
   continue;
  }
  if (FUNC_13 (VAR_1[VAR_3]) != -1) {
   VAR_2 |= 0xd << (VAR_3*4);
   continue;
  }
  VAR_0 = 0;
  FUNC_4(VAR_1[VAR_3]);
  if (!VAR_0) {
   VAR_2 |= 0xe << (VAR_3*4);
   continue;
  }
  VAR_2 |= 0xf << (VAR_3*4);
 }
 VAR_0 = 0;
 return VAR_2;
}
