
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {scalar_t__ in_text; } ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct RtfData*,char const*,int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (char*,char*,int const) ;

__attribute__((used)) static BOOL FUNC_2(struct RtfData* VAR_2, const char* VAR_3)
{
    const char* VAR_4;
    const char* VAR_5;
    const char* VAR_6;
    unsigned VAR_7;

    if (!VAR_2->in_text)
    {
        if (!FUNC_0(VAR_2, " ", 1)) return VAR_0;
        VAR_2->in_text = VAR_1;
    }
    for (VAR_5 = VAR_4 = VAR_3; *VAR_4; VAR_4++)
    {
        if (*VAR_4 & 0x80)
        {
            static char VAR_8[8];
            VAR_7 = FUNC_1(VAR_8, "\\'%x", *(const BYTE*)VAR_4);
            VAR_6 = VAR_8;
        }
        else switch (*VAR_4)
        {
        case '{': VAR_7 = 2; VAR_6 = "\\{"; break;
        case '}': VAR_7 = 2; VAR_6 = "\\}"; break;
        case '\\': VAR_7 = 2; VAR_6 = "\\\\"; break;
        default: continue;
        }
        if ((VAR_4 != VAR_5 && !FUNC_0(VAR_2, VAR_5, VAR_4 - VAR_5)) ||
            !FUNC_0(VAR_2, VAR_6, VAR_7)) return VAR_0;
        VAR_5 = VAR_4 + 1;
    }
    return FUNC_0(VAR_2, VAR_5, VAR_4 - VAR_5);
}
