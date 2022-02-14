
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (int *,char*,char*,char*,char const*) ;

__attribute__((used)) static void FUNC_3(REgg *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, int VAR_5, const char *VAR_6) {

 char *VAR_7, VAR_8[64];
 char *VAR_9 = ((void*)0);
 char *VAR_10 = "beq";

 if (VAR_1) {
  *VAR_1 = '\0';
  VAR_10 = VAR_3?"bge":"bgt";
  VAR_9 = VAR_1+1;
 } else
 if (VAR_2) {
  *VAR_2 = '\0';
  VAR_10 = VAR_3?"ble":"blt";
  VAR_9 = VAR_2+1;
 }
 if (!VAR_9) {
  if (VAR_3) {
   VAR_9 = VAR_3+1;
   VAR_10 = "bne";
  } else {
   VAR_9 = "0";
   VAR_10 = VAR_4?"bne":"beq";
  }
 }

 if (*VAR_9 == '=') {
  VAR_9++;
 }
 VAR_7 = FUNC_1 (VAR_0, VAR_8, VAR_9, 0);
 FUNC_2 (VAR_0, "%s (%s) => (%s)\n", VAR_10, VAR_7, VAR_6);
 FUNC_0 (VAR_7);
}
