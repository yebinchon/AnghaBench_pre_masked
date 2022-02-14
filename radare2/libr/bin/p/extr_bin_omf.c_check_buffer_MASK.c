
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (int const*,int) ;
 int* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,int) ;

__attribute__((used)) static bool FUNC_6(RBuffer *VAR_0) {
 int VAR_1;
 ut8 VAR_2;
 if (FUNC_2 (VAR_0, 0, &VAR_2, 1) != 1) {
  return 0;
 }
 if (VAR_2 != 0x80 && VAR_2 != 0x82) {
  return 0;
 }
 ut16 VAR_3 = FUNC_3 (VAR_0, 1);
 ut8 VAR_4; (void)FUNC_2 (VAR_0, 3, &VAR_4, 1);
 ut64 VAR_5 = FUNC_4 (VAR_0);
 if (VAR_4 + 2 != VAR_3 || VAR_5 < VAR_3 + 3) {
  return 0;
 }

 for (VAR_1 = 4; VAR_1 < VAR_4 + 4; VAR_1++) {
  if (FUNC_2 (VAR_0, VAR_1, &VAR_2, 1) != 1) {
   break;
  }
  if (VAR_2 > 0x7f) {
   return 0;
  }
 }
 const ut8 *VAR_6 = FUNC_1 (VAR_0, ((void*)0));
 if (VAR_6 == ((void*)0)) {

  ut8 VAR_7[1024] = {0};
  FUNC_2 (VAR_0, 0, VAR_7, sizeof (VAR_7));
  return FUNC_0 (VAR_7, sizeof (VAR_7));
 }
 FUNC_5 (VAR_6, 0);
 return FUNC_0 (VAR_6, VAR_5);
}
