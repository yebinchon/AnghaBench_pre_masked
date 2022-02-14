
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RFSFile ;
typedef int RFS ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,int ,int const*,int ) ;
 char* FUNC_6 (char*,char const*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool FUNC_11(RFS *VAR_0, char *VAR_1, const ut8 *VAR_2, const char *VAR_3) {
 char *VAR_4 = FUNC_9 (VAR_1, '>');
 if (VAR_4) {
  *VAR_4++ = 0;
  FUNC_7 (VAR_1);
  VAR_4 = FUNC_8 (VAR_4);
  if (*VAR_4 != '/') {
   char *VAR_5 = FUNC_6 ("%s/%s", VAR_3, VAR_4);
   FUNC_1 (VAR_4);
   VAR_4 = VAR_5;
  } else {
  }
  RFSFile *VAR_6 = FUNC_4 (VAR_0, VAR_4, 1);
  if (!VAR_6) {
   FUNC_0 ("Cannot open %s for writing\n", VAR_4);
   FUNC_1 (VAR_4);
   return 1;
  }
  FUNC_5 (VAR_0, VAR_6, 0, VAR_2 == ((void*)0) ? (const ut8 *) VAR_1 : VAR_2, FUNC_10 (VAR_1));
  FUNC_1 (VAR_4);
  FUNC_2 (VAR_0, VAR_6);
  FUNC_3 (VAR_6);
  return 1;
 }
 return 0;
}
