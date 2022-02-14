
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;


 char* FUNC_0 (struct config*,char const*,char const*,char*) ;
 int FUNC_1 (char*,char*,long long) ;
 long long FUNC_2 (char*,int *,int ) ;

long long FUNC_3(struct config *VAR_0, const char *VAR_1, const char *VAR_2, long long VAR_3)
{
    char VAR_4[100], *VAR_5;
    FUNC_1(VAR_4, "%lld", VAR_3);

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
    if(!VAR_5) return VAR_3;

    return FUNC_2(VAR_5, ((void*)0), 0);
}
