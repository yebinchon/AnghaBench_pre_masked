
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nk_handle ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(nk_handle VAR_0, const char *VAR_1, int VAR_2)
{
    char *VAR_3 = 0;
    (void)VAR_0;
    if (!VAR_2) return;
    VAR_3 = (char*)FUNC_2((size_t)VAR_2+1);
    if (!VAR_3) return;
    FUNC_3(VAR_3, VAR_1, (size_t)VAR_2);
    VAR_3[VAR_2] = '\0';
    FUNC_0(VAR_3);
    FUNC_1(VAR_3);
}
