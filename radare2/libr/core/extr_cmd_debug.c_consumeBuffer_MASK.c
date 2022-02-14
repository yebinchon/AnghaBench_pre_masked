
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(RBuffer *VAR_1, const char *VAR_2, const char *VAR_3) {
 if (!VAR_1) {
  if (VAR_3) {
   FUNC_3 ("%s\n", VAR_3);
  }
  return;
 }
 if (VAR_2) {
  FUNC_3 ("%s", VAR_2);
 }
 int VAR_4;
 FUNC_1 (VAR_1, 0, VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_1); VAR_4++) {
  FUNC_3 ("%02x", FUNC_0 (VAR_1));
 }
 FUNC_3 ("\n");
}
