
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUFFER ;


 int FUNC_0 (int *,char*,char const*,char const*,...) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static inline void FUNC_3(BUFFER *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4) {
    if(VAR_3 && *VAR_3) {
        FUNC_0(VAR_0, "%s\"%s\":\"", VAR_1, VAR_2);
        FUNC_2(VAR_0, VAR_3);
        FUNC_1(VAR_0, "\"");
        FUNC_1(VAR_0, VAR_4);
    }
    else
        FUNC_0(VAR_0, "%s\"%s\":null%s", VAR_1, VAR_2, VAR_4);
}
