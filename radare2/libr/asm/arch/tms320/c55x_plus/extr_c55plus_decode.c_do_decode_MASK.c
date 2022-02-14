
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int,int,int,int*,int*,int*,int,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int*,int,int*) ;
 char* FUNC_8 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_9(ut32 VAR_1, ut32 VAR_2, ut32 VAR_3, ut32 *VAR_4,
 st32 *VAR_5, int *VAR_6)
{
 st32 VAR_7, VAR_8;
 ut32 VAR_9, VAR_10, VAR_11;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 ut32 VAR_14 = 0x800;

 *VAR_4 = 0;

 VAR_9 = 0;
 VAR_11 = 0;
 VAR_10 = 0;

 VAR_7 = FUNC_2(VAR_2 + VAR_1);
 if (FUNC_5(VAR_7)) {
  VAR_8 = VAR_7;
  VAR_1++;
  FUNC_7(&VAR_14, VAR_7, VAR_6);
  if (*VAR_6 < 0) {
   return ((void*)0);
  }
  VAR_7 = FUNC_2(VAR_2 + VAR_1);
  *VAR_4 = 1;
 } else {
  VAR_8 = 0x223;
 }

 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_7;
 }

 if (VAR_0) {
  FUNC_6("MAGIC VALUE 0x%x\n", 0x800);
 }

 if (VAR_8 == 0x1E1 || VAR_8 == 0x1E2) {
  VAR_13 = FUNC_0(VAR_8, VAR_2, VAR_1, &VAR_10, &VAR_9,
   &VAR_11, VAR_14, VAR_3, VAR_6);
  if(*VAR_6 < 0) {
   return ((void*)0);
  }
  VAR_13 = FUNC_8(VAR_13, " ", 1);
 }

 if (VAR_7 == 0x223) {
  VAR_12 = FUNC_8(VAR_13, ".byte 0x", 1);
  VAR_13 = FUNC_3(FUNC_4(VAR_2, 1));
  VAR_12 = FUNC_8(VAR_12, VAR_13, 2);
  *VAR_4 = *VAR_4 + 1;
 } else {
  FUNC_1 (VAR_13);
  VAR_13 = FUNC_0(VAR_7, VAR_2, VAR_1, &VAR_10,
   &VAR_9, &VAR_11, VAR_14, VAR_3, VAR_6);
  if (*VAR_6 < 0) {
   FUNC_1 (VAR_13);
   return ((void*)0);
  }
  VAR_12 = FUNC_8(VAR_13, VAR_12, 1);


  *VAR_4 += VAR_10;
 }

 return VAR_12;
}
