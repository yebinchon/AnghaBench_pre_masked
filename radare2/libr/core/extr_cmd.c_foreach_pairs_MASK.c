
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int RCore ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_0, const char *VAR_1, const char *VAR_2) {
 const char *VAR_3;
 int VAR_4 = 0;
 for (VAR_3 = VAR_2 ; ; ) {
  char *VAR_5 = FUNC_4 (VAR_3, ' ');
  if (VAR_5) {
   *VAR_5 = 0;
  }
  if (VAR_3 && *VAR_3) {
   ut64 VAR_6 = FUNC_3 (((void*)0), VAR_3);
   if (VAR_4%2) {
    FUNC_0 (VAR_0, VAR_6);
    FUNC_1 (VAR_0, VAR_1);
   } else {
    FUNC_2 (VAR_0, VAR_6, 1);
   }
   VAR_4++;
  }
  if (!VAR_5) {
   break;
  }
  VAR_3 = VAR_5 + 1;
 }
}
