
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static BSTR FUNC_2(const char *VAR_1)
{
    BSTR VAR_2;
    int VAR_3;

    if(!VAR_1)
        return ((void*)0);

    VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
    VAR_2 = FUNC_1(((void*)0), VAR_3);
    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3);

    return VAR_2;
}
