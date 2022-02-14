
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static WCHAR FUNC_2(void)
{
    static WCHAR VAR_2;

    if(!VAR_2)
    {
        WCHAR VAR_3[] = {'.', 0};
        FUNC_1(VAR_1, VAR_0, VAR_3, FUNC_0(VAR_3));
        VAR_2 = VAR_3[0];
    }
    return VAR_2;
}
