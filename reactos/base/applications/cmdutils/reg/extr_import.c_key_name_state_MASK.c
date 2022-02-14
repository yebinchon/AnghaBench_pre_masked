
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef char WCHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct parser*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct parser*,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static WCHAR *FUNC_4(struct parser *VAR_4, WCHAR *VAR_5)
{
    WCHAR *VAR_6 = VAR_5, *VAR_7;

    if (*VAR_6 == ' ' || *VAR_6 == '\t' || !(VAR_7 = FUNC_3(VAR_6, ']')))
        goto done;

    *VAR_7 = 0;

    if (*VAR_6 == '-')
    {
        FUNC_2(VAR_4, VAR_0);
        return VAR_6 + 1;
    }
    else if (FUNC_0(VAR_4, VAR_6) != VAR_1)
        FUNC_1(VAR_3, VAR_6);

done:
    FUNC_2(VAR_4, VAR_2);
    return VAR_6;
}
