
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PWCHAR ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*,int,int *,int) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static PWCHAR
FUNC_3(const CHAR *VAR_1)
{
    PWCHAR VAR_2;
    int VAR_3 = FUNC_0(VAR_0,
                                      0,
                                      VAR_1,
                                      -1,
                                      ((void*)0),
                                      0);
    if (VAR_3 == 0)
        return ((void*)0);
    VAR_2 = FUNC_1(FUNC_2(), 0, VAR_3 * sizeof(WCHAR));
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }
    FUNC_0(VAR_0,
                        0,
                        VAR_1,
                        -1,
                        VAR_2,
                        VAR_3);

    return VAR_2;
}
