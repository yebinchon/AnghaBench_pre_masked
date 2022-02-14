
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int process_t ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (char const*,char const* const*,int ) ;

__attribute__((used)) static process_t
FUNC_2(const char *VAR_0, bool VAR_1) {
    const char *VAR_2 = VAR_1 ? "1" : "0";
    const char *const VAR_3[] = {
        "shell", "settings", "put", "system", "show_touches", VAR_2
    };
    return FUNC_1(VAR_0, VAR_3, FUNC_0(VAR_3));
}
