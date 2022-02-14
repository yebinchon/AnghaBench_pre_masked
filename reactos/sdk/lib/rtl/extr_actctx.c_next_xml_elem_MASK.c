
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* ptr; int len; } ;
typedef TYPE_1__ xmlstr_t ;
struct TYPE_6__ {char const* ptr; char const* end; } ;
typedef TYPE_2__ xmlbuf_t ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char,int) ;

__attribute__((used)) static BOOL FUNC_2(xmlbuf_t* VAR_1, xmlstr_t* VAR_2)
{
    const WCHAR* VAR_3;

    for (;;)
    {
        VAR_3 = FUNC_1(VAR_1->ptr, '<', VAR_1->end - VAR_1->ptr);
        if (!VAR_3)
        {
            VAR_1->ptr = VAR_1->end;
            return VAR_0;
        }
        VAR_3++;
        if (VAR_3 + 3 < VAR_1->end && VAR_3[0] == '!' && VAR_3[1] == '-' && VAR_3[2] == '-')
        {
            for (VAR_3 += 3; VAR_3 + 3 <= VAR_1->end; VAR_3++)
                if (VAR_3[0] == '-' && VAR_3[1] == '-' && VAR_3[2] == '>') break;

            if (VAR_3 + 3 > VAR_1->end)
            {
                VAR_1->ptr = VAR_1->end;
                return VAR_0;
            }
            VAR_1->ptr = VAR_3 + 3;
        }
        else break;
    }

    VAR_1->ptr = VAR_3;
    while (VAR_3 < VAR_1->end && !FUNC_0(*VAR_3) && *VAR_3 != '>' && (*VAR_3 != '/' || VAR_3 == VAR_1->ptr))
        VAR_3++;

    VAR_2->ptr = VAR_1->ptr;
    VAR_2->len = VAR_3 - VAR_1->ptr;
    VAR_1->ptr = VAR_3;
    return VAR_1->ptr != VAR_1->end;
}
