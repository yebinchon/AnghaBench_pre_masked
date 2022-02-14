
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlURIPtr ;


 int FUNC_0 (int ,char const**) ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,char const**) ;

__attribute__((used)) static int
FUNC_3(xmlURIPtr VAR_0, const char **VAR_1)
{
    const char *VAR_2;
    int VAR_3;

    VAR_2 = *VAR_1;



    VAR_3 = FUNC_2(VAR_0, &VAR_2);
    if ((VAR_3 != 0) || (*VAR_2 != '@'))
        VAR_2 = *VAR_1;
    else
        VAR_2++;
    VAR_3 = FUNC_0(VAR_0, &VAR_2);
    if (VAR_3 != 0) return(VAR_3);
    if (*VAR_2 == ':') {
        VAR_2++;
        VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3 != 0) return(VAR_3);
    }
    *VAR_1 = VAR_2;
    return(0);
}
