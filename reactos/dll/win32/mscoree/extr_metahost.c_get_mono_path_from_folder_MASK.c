
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_2, LPWSTR VAR_3, int VAR_4)
{
    static const WCHAR VAR_5[] = {'\\','m','o','n','o','-','1','.','0', 0};
    static const WCHAR VAR_6[] = {'\\','m','o','n','o','-','2','.','0', 0};
    WCHAR VAR_7[VAR_1];
    BOOL VAR_8 = VAR_0;

    FUNC_2(VAR_3, VAR_2);

    if (VAR_4 == 1)
        FUNC_1(VAR_3, VAR_5);
    else if (VAR_4 == 2)
        FUNC_1(VAR_3, VAR_6);

    VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_4);

    return VAR_8;
}
