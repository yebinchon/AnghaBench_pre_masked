
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2)
{
    char *VAR_3 = FUNC_1(VAR_2);
    char *VAR_4 = VAR_3;
    char *VAR_5 = ((void*)0);
    int VAR_6;

    if (VAR_3 == ((void*)0))
        return -1;

    while ((VAR_4 = FUNC_4(VAR_4, VAR_0)) != ((void*)0)) {
        VAR_5 = VAR_4++;
    }
    if (VAR_5 == ((void*)0))
        return 0;
    VAR_5[VAR_1] = 0;

    FUNC_2("changing path to %s", VAR_3);
    VAR_6 = FUNC_3(VAR_3);
    FUNC_0(VAR_3);
    return VAR_6;
}
