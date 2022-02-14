
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 char* FUNC_0 (struct config*,char const*,char const*,char const*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;

int FUNC_3(struct config *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    int VAR_4 = 0;
    const char *VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if(!VAR_5) goto fallback;

    if(!FUNC_1(VAR_5, &VAR_4)) {
        FUNC_2("config option '[%s].%s = %s' is configured with an valid duration", VAR_1, VAR_2, VAR_5);
        goto fallback;
    }

    return VAR_4;

    fallback:
    if(!FUNC_1(VAR_3, &VAR_4))
        FUNC_2("INTERNAL ERROR: default duration supplied for option '[%s].%s = %s' is not a valid duration", VAR_1, VAR_2, VAR_3);

    return VAR_4;
}
