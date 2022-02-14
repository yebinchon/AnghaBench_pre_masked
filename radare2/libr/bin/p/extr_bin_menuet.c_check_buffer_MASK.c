
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 ut8 VAR_1[8];
 if (FUNC_2 (VAR_0, 0, VAR_1, sizeof (VAR_1)) != sizeof (VAR_1)) {
  return 0;
 }
 if (FUNC_3 (VAR_0) >= 32 && !FUNC_1 (VAR_1, "MENUET0", 7)) {
  switch (VAR_1[7]) {
  case '0':
  case '1':
  case '2':
   return 1;
  }
  FUNC_0 ("Unsupported MENUET version header\n");
 }
 return 0;
}
