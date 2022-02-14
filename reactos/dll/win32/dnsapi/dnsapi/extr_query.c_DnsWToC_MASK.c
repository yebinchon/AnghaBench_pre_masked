
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PCHAR ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int const*,int,int *,int,int *,int ) ;

__attribute__((used)) static PCHAR
FUNC_3(const WCHAR *VAR_1)
{
    PCHAR VAR_2;
    int VAR_3 = FUNC_2(VAR_0,
                                      0,
                                      VAR_1,
                                      -1,
                                      ((void*)0),
                                      0,
                                      ((void*)0),
                                      0);
    if (VAR_3 == 0)
        return ((void*)0);
    VAR_2 = FUNC_0(FUNC_1(), 0, VAR_3);
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }
    FUNC_2(VAR_0,
                        0,
                        VAR_1,
                        -1,
                        VAR_2,
                        VAR_3,
                        ((void*)0),
                        0);

    return VAR_2;
}
