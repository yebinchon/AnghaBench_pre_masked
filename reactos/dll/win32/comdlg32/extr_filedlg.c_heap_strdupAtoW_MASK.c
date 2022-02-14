
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static WCHAR *FUNC_2(const char *VAR_1)
{
    WCHAR *VAR_2;
    INT VAR_3;

    if (!VAR_1)
        return ((void*)0);

    VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, 0, 0);
    VAR_2 = FUNC_1(VAR_3 * sizeof(WCHAR));
    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3);

    return VAR_2;
}
