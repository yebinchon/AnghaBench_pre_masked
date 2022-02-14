
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RListFree ;
typedef int RList ;
typedef int RBuffer ;
typedef int RBinSection ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (char const*,int) ;

__attribute__((used)) static RList *FUNC_9(RBuffer *VAR_1, int VAR_2, int VAR_3) {
 ut8 *VAR_4 = FUNC_0 (VAR_3, 32);
 (void)FUNC_3 (VAR_1, VAR_2, VAR_4, VAR_3 * 32);
 int VAR_5 = VAR_2;
 int VAR_6 = 0;
 int VAR_7;
 RList *VAR_8 = FUNC_5 ((RListFree)VAR_0);
 if (!VAR_8) {
  return ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  int VAR_9 = FUNC_6 (VAR_4 + VAR_6 + 16);
  int VAR_10 = FUNC_6 (VAR_4 + VAR_6 + 16 + 8);


  const char *VAR_11 = (const char *)(VAR_4 + VAR_6);
  char *VAR_12 = FUNC_7 (VAR_11, FUNC_8 (VAR_11, 16));
  RBinSection *VAR_13 = FUNC_2 (VAR_12, VAR_9, VAR_9 + VAR_10, 1);
  FUNC_1 (VAR_12);
  FUNC_4 (VAR_8, VAR_13);
  VAR_5 += 32;
  VAR_6 += 32;
 }
 return VAR_8;
}
