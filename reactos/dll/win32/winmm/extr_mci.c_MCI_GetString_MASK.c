
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static DWORD FUNC_3(LPWSTR* VAR_2, LPWSTR* VAR_3)
{
    LPWSTR VAR_4 = *VAR_3;


    if (*VAR_4 == '"') {
 VAR_4 = FUNC_1(*VAR_2 = VAR_4 + 1, '"');
 if (!VAR_4) return VAR_1;

 if (VAR_4[-1] == '\\') FUNC_0("Ooops: un-escaped \"\n");
 *VAR_4++ = '\0';
 if (*VAR_4 != ' ' && *VAR_4 != '\0') return VAR_0;
    } else {
 VAR_4 = FUNC_1(VAR_4, ' ');

 if (VAR_4) {
     *VAR_4++ = '\0';
 } else {
     VAR_4 = *VAR_3 + FUNC_2(*VAR_3);
 }
 *VAR_2 = *VAR_3;
    }

    *VAR_3 = VAR_4;
    return 0;
}
