
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int remote ;
typedef int process_t ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (char const*,char const* const*,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;

process_t
FUNC_3(const char *VAR_0, const char *VAR_1) {
    char VAR_2[108 + 14 + 1];
    FUNC_2(VAR_2, sizeof(VAR_2), "localabstract:%s", VAR_1);
    const char *const VAR_3[] = {"reverse", "--remove", VAR_2};
    return FUNC_1(VAR_0, VAR_3, FUNC_0(VAR_3));
}
