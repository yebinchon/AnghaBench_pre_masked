
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char) ;
 char* FUNC_1 (void*,char const*) ;

__attribute__((used)) static char *FUNC_2(void *VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_1(VAR_1, VAR_2);
    char *VAR_4 = VAR_3;
    while (*VAR_4) {
        if (FUNC_0(VAR_0, *VAR_4) || ((unsigned char)*VAR_4) < 32)
            *VAR_4 = '_';
        VAR_4++;
    }
    return VAR_3;
}
