
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int data_size; void* backslash; scalar_t__ data; } ;
typedef char WCHAR ;
typedef int BYTE ;
typedef void* BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static BOOL FUNC_3(struct parser *VAR_2, WCHAR **VAR_3)
{
    size_t VAR_4;
    BYTE *VAR_5;
    WCHAR *VAR_6;

    VAR_2->backslash = VAR_0;


    VAR_4 = ((FUNC_1(*VAR_3) + 1) / 2) + VAR_2->data_size;
    VAR_2->data = FUNC_0(VAR_2->data, VAR_4);

    VAR_6 = *VAR_3;
    VAR_5 = (BYTE *)VAR_2->data + VAR_2->data_size;

    while (*VAR_6)
    {
        WCHAR *VAR_7;
        unsigned long VAR_8;

        VAR_8 = FUNC_2(VAR_6, &VAR_7, 16);
        if (VAR_8 > 0xff) return VAR_0;

        if (VAR_6 == VAR_7 && VAR_8 == 0)
        {
            while (*VAR_7 == ' ' || *VAR_7 == '\t') VAR_7++;
            if (*VAR_7 == '\\')
            {
                VAR_2->backslash = VAR_1;
                *VAR_3 = VAR_7 + 1;
                return VAR_1;
            }
            else if (*VAR_7 == ';')
                return VAR_1;
            return VAR_0;
        }

        *VAR_5++ = VAR_8;
        VAR_2->data_size++;

        if (*VAR_7 && *VAR_7 != ',')
        {
            while (*VAR_7 == ' ' || *VAR_7 == '\t') VAR_7++;
            if (*VAR_7 && *VAR_7 != ';') return VAR_0;
            return VAR_1;
        }

        if (*VAR_7) VAR_7++;
        VAR_6 = VAR_7;
    }

    return VAR_1;
}
