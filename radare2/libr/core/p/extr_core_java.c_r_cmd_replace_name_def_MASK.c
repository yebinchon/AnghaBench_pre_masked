
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,scalar_t__,char*,scalar_t__,char const*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (char*,scalar_t__,char const*,char const*) ;

__attribute__((used)) static char * FUNC_4 (const char *VAR_0, ut32 VAR_1, const char *VAR_2, ut32 VAR_3, const char *VAR_4, ut32 VAR_5, ut32 *VAR_6) {
 const char * VAR_7 = "L%s;";
 char *VAR_8 = VAR_0 && VAR_1 > 0 ? FUNC_1 (3 + VAR_1) : ((void*)0);
 char *VAR_9 = VAR_2 && VAR_3 > 0 ? FUNC_1 (3 + VAR_3) : ((void*)0);
 char *VAR_10 = ((void*)0);
 *VAR_6 = 0;
 if (VAR_8 && VAR_9) {
  FUNC_3 (VAR_8, VAR_1+3, VAR_7, VAR_0);
  FUNC_3 (VAR_9, VAR_3+3, VAR_7, VAR_2);
  VAR_10 = FUNC_2 (VAR_8, VAR_1+2, VAR_9, VAR_3+2, VAR_4, VAR_5, VAR_6);
 }
 FUNC_0 (VAR_8);
 FUNC_0 (VAR_9);
 return VAR_10;
}
