
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int * PLOGFONTW ;
typedef int LPWSTR ;
typedef int LOGFONTW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;

__attribute__((used)) static
VOID
FUNC_1(PLOGFONTW VAR_2, LPWSTR VAR_3, PLOGFONTW VAR_4)
{
    BOOL VAR_5;

    VAR_5 = FUNC_0(VAR_0,
                                 VAR_3,
                                 VAR_1,
                                 VAR_2,
                                 sizeof(LOGFONTW));
    if (!VAR_5)
        *VAR_2 = *VAR_4;
}
