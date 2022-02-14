
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (struct env_set*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t const,int,int *) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*,size_t const,char*,char const*,unsigned int) ;
 int FUNC_6 (struct env_set*,char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

void
FUNC_9(struct env_set *VAR_1, const char *VAR_2, const char *VAR_3)
{
    unsigned int VAR_4 = 1;
    const size_t VAR_5 = FUNC_8(VAR_2) + 5;
    char *VAR_6 = FUNC_3(VAR_5, 1, ((void*)0));
    FUNC_7(VAR_6, VAR_2);
    while (((void*)0) != FUNC_1(VAR_1, VAR_6) && VAR_4 < 1000)
    {
        FUNC_0(FUNC_5(VAR_6, VAR_5, "%s_%u", VAR_2, VAR_4));
        VAR_4++;
    }
    if (VAR_4 < 1000)
    {
        FUNC_6(VAR_1, VAR_6, VAR_3);
    }
    else
    {
        FUNC_4(VAR_0, "Too many same-name env variables, ignoring: %s", VAR_2);
    }
    FUNC_2(VAR_6);
}
