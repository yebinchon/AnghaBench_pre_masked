
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef char WCHAR ;
typedef scalar_t__ HKEY ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (struct parser*) ;
 scalar_t__ FUNC_2 (char*,char**) ;
 int FUNC_3 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_4(struct parser *VAR_1, WCHAR *VAR_2)
{
    WCHAR *VAR_3 = VAR_2;

    FUNC_1(VAR_1);

    if (*VAR_3 == 'H' || *VAR_3 == 'h')
    {
        HKEY VAR_4;
        WCHAR *VAR_5;

        VAR_4 = FUNC_2(VAR_3, &VAR_5);

        if (VAR_4 && VAR_5 && *VAR_5)
            FUNC_0(VAR_4, VAR_5);
    }

    FUNC_3(VAR_1, VAR_0);
    return VAR_3;
}
