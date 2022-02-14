
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 char* FUNC_0 (struct config*,char const*,char const*,char*) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct config *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
    char *VAR_4;
    if(VAR_3) VAR_4 = "yes";
    else VAR_4 = "no";

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
    if(!VAR_4) return VAR_3;

    if(!FUNC_1(VAR_4, "yes") || !FUNC_1(VAR_4, "true") || !FUNC_1(VAR_4, "on") || !FUNC_1(VAR_4, "auto") || !FUNC_1(VAR_4, "on demand")) return 1;
    return 0;
}
