
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int TSNode ;
typedef int RCore ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*) ;
 char* FUNC_4 (char*,int,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(RCore *VAR_0, const char *VAR_1, TSNode VAR_2, bool VAR_3) {
 TSNode VAR_4 = FUNC_6 (VAR_2, 0);
 ut32 VAR_5 = FUNC_7 (VAR_4);
 ut32 VAR_6 = FUNC_5 (VAR_4);
 char *VAR_7 = FUNC_4 ("%.*s", VAR_6 - VAR_5, VAR_1 + VAR_5);
 char *VAR_8 = FUNC_3 (VAR_0, VAR_7);
 FUNC_0 ("interpret_command cmd_string = '%s', result to interpret = '%s'\n", VAR_7, VAR_8);
 FUNC_2 (VAR_7);
 bool VAR_9 = FUNC_1 (VAR_0, VAR_8, VAR_3);
 FUNC_2 (VAR_8);
 return VAR_9;
}
