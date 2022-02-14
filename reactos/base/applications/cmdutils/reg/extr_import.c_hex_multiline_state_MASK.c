
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int file; } ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct parser*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct parser*) ;
 int FUNC_4 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_5(struct parser *VAR_3, WCHAR *VAR_4)
{
    WCHAR *VAR_5;

    if (!(VAR_5 = FUNC_1(VAR_3->file)))
    {
        FUNC_3(VAR_3);
        FUNC_4(VAR_3, VAR_2);
        return VAR_4;
    }

    while (*VAR_5 == ' ' || *VAR_5 == '\t') VAR_5++;
    if (!*VAR_5 || *VAR_5 == ';') return VAR_5;

    if (!FUNC_2(*VAR_5)) goto invalid;

    FUNC_4(VAR_3, VAR_0);
    return VAR_5;

invalid:
    FUNC_0(VAR_3);
    FUNC_4(VAR_3, VAR_1);
    return VAR_5;
}
