
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,char*,int) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static ut32 FUNC_5(const char *VAR_0) {



 char *VAR_1 = FUNC_4 (VAR_0);
 VAR_1 = FUNC_2 (VAR_1, ".", "0", 1);
 char *VAR_2 = FUNC_3 (VAR_1, '-');
 if (VAR_2) {
  *VAR_2 = 0;
 }
 ut32 VAR_3 = FUNC_0 (VAR_1);
 FUNC_1 (VAR_1);
 return VAR_3;
}
