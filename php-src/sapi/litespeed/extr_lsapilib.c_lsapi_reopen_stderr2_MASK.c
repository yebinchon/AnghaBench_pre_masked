
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,int) ;
 char const* VAR_3 ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4)
{
    int VAR_5 = FUNC_4(VAR_4, VAR_2 | VAR_1 | VAR_0, 0644);
    if (VAR_5 == -1)
    {
        FUNC_0(((void*)0), "Failed to open custom stderr log", VAR_4);
        return -1;
    }
    if (VAR_5 != 2)
    {
        FUNC_2(VAR_5, 2);
        FUNC_1(VAR_5);
        FUNC_2(2, 1);
    }
    if (VAR_3 && VAR_4 != VAR_3)
    {
        FUNC_3(VAR_3);
        VAR_3 = ((void*)0);
    }
    VAR_3 = FUNC_5(VAR_4);
    return 0;
}
