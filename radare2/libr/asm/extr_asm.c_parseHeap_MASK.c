
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RStrBuf ;
typedef int RParse ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(RParse *VAR_0, RStrBuf *VAR_1) {
 char *VAR_2 = FUNC_3 (VAR_1);
 size_t VAR_3 = FUNC_4 (VAR_1);
 char *VAR_4 = FUNC_1 (64 + (VAR_3 * 2));
 if (VAR_4) {
  *VAR_4 = 0;
  FUNC_6 (VAR_4 , VAR_2);

  FUNC_2 (VAR_0, VAR_2, VAR_4);
  FUNC_5 (VAR_1, VAR_4);
  FUNC_0 (VAR_4);
 }
}
