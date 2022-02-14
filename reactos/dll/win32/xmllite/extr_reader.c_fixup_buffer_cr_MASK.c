
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; int written; scalar_t__ prev_cr; } ;
typedef TYPE_1__ encoded_buffer ;
typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(encoded_buffer *VAR_2, int VAR_3)
{
    BOOL VAR_4 = VAR_2->prev_cr;
    const WCHAR *VAR_5;
    WCHAR *VAR_6;

    VAR_5 = VAR_6 = (WCHAR*)VAR_2->data + VAR_3;
    while ((const char*)VAR_5 < VAR_2->data + VAR_2->written)
    {
        if (*VAR_5 == '\r')
        {
            *VAR_6++ = '\n';
            VAR_5++;
            VAR_4 = VAR_1;
            continue;
        }
        if(VAR_4 && *VAR_5 == '\n')
            VAR_5++;
        else
            *VAR_6++ = *VAR_5++;
        VAR_4 = VAR_0;
    }

    VAR_2->written = (char*)VAR_6 - VAR_2->data;
    VAR_2->prev_cr = VAR_4;
    *VAR_6 = 0;
}
