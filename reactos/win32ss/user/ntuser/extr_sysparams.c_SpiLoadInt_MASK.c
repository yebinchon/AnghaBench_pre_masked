
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int awcBuffer ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int PCWSTR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
INT
FUNC_2(PCWSTR VAR_1, PCWSTR VAR_2, INT VAR_3)
{
    WCHAR VAR_4[12];
    ULONG VAR_5;

    VAR_5 = sizeof(VAR_4);
    if (!FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4, VAR_5))
    {
        return VAR_3;
    }
    return FUNC_1(VAR_4);
}
