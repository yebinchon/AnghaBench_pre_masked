
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct X500TokenW {char* start; char* end; } ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static BOOL FUNC_4(LPCWSTR VAR_3, struct X500TokenW *VAR_4,
 LPCWSTR *VAR_5)
{
    BOOL VAR_6 = VAR_2;

    while (*VAR_3 && FUNC_3(*VAR_3))
        VAR_3++;
    if (*VAR_3)
    {
        VAR_4->start = VAR_3;
        while (*VAR_3 && *VAR_3 != '=' && !FUNC_3(*VAR_3))
            VAR_3++;
        if (*VAR_3 && (*VAR_3 == '=' || FUNC_3(*VAR_3)))
            VAR_4->end = VAR_3;
        else
        {
            FUNC_1("missing equals char at %s\n", FUNC_2(VAR_4->start));
            if (VAR_5)
                *VAR_5 = VAR_4->start;
            FUNC_0(VAR_0);
            VAR_6 = VAR_1;
        }
    }
    else
        VAR_4->start = ((void*)0);
    return VAR_6;
}
