
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int file; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ) ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_3, WCHAR *VAR_4)
{
    WCHAR *VAR_5, *VAR_6;

    if (!(VAR_5 = FUNC_0(VAR_3->file)))
        return ((void*)0);

    for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
    {
        switch (*VAR_6)
        {
        case '[':
            FUNC_1(VAR_3, VAR_1);
            return VAR_6 + 1;
        case '@':
            FUNC_1(VAR_3, VAR_0);
            return VAR_6;
        case '"':
            FUNC_1(VAR_3, VAR_2);
            return VAR_6 + 1;
        case ' ':
        case '\t':
            break;
        default:
            return VAR_6;
        }
    }

    return VAR_6;
}
