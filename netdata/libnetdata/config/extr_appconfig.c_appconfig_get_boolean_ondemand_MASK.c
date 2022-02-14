
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct config*,char const*,char const*,char*) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct config *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
    char *VAR_7;

    if(VAR_6 == VAR_0)
        VAR_7 = "auto";

    else if(VAR_6 == VAR_1)
        VAR_7 = "no";

    else
        VAR_7 = "yes";

    VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
    if(!VAR_7) return VAR_6;

    if(!FUNC_1(VAR_7, "yes"))
        return VAR_2;
    else if(!FUNC_1(VAR_7, "no"))
        return VAR_1;
    else if(!FUNC_1(VAR_7, "auto") || !FUNC_1(VAR_7, "on demand"))
        return VAR_0;

    return VAR_6;
}
