
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(BSTR VAR_2, BSTR VAR_3)
{
    for (;;)
    {
        while (*VAR_2 == '\r' || *VAR_2 == '\n') VAR_2++;
        while (*VAR_3 == '\r' || *VAR_3 == '\n') VAR_3++;
        if (*VAR_2 != *VAR_3) return VAR_0;
        if (!*VAR_2) return VAR_1;
        VAR_2++;
        VAR_3++;
    }
}
