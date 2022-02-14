
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static const char *
FUNC_2(void)
{
    const char *VAR_1;

    VAR_1 = FUNC_0(FUNC_1("TMPDIR"));
    if (VAR_1)
        return VAR_1;

    VAR_1 = FUNC_0(FUNC_1("TMP"));
    if (VAR_1)
        return VAR_1;

    VAR_1 = FUNC_0(FUNC_1("TEMP"));
    if (VAR_1)
        return VAR_1;

    VAR_1 = FUNC_0("/var/tmp");
    if (VAR_1)
        return VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1)
        return VAR_1;

    return ((void*)0);
}
