
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int *,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ) ;
 size_t FUNC_4 (char*) ;

BOOL FUNC_5(const char *VAR_4)
{
    WCHAR *VAR_5, *VAR_6;
    BOOL VAR_7;

    VAR_5 = FUNC_2(VAR_4);
    if(!VAR_5 || FUNC_4(VAR_5) < VAR_3)
        return VAR_0;

    for(VAR_6 = VAR_5; *VAR_6; VAR_6++) {
        if(*VAR_6 == '\\')
            *VAR_6 = '/';
    }

    FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_1);
    VAR_5[VAR_3] = 0;

    VAR_7 = !FUNC_3(VAR_5, VAR_2);
    FUNC_1(VAR_5);
    return VAR_7;
}
