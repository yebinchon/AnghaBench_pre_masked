
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int ITextRange ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_1 ;


__attribute__((used)) static HRESULT FUNC_6(ITextRange *VAR_2, LONG VAR_3, LONG *VAR_4)
{
    LONG VAR_5, VAR_6;

    switch (VAR_3)
    {
    case 128:
        VAR_5 = 0;
        FUNC_3(VAR_2, &VAR_6);
        break;
    default:
        FUNC_0("unit %d is not supported\n", VAR_3);
        return VAR_0;
    }

    if (VAR_4) {
        LONG VAR_7, VAR_8;

        FUNC_2(VAR_2, &VAR_7);
        FUNC_1(VAR_2, &VAR_8);
        *VAR_4 = VAR_6 - VAR_5 - (VAR_8 - VAR_7);
    }

    FUNC_5(VAR_2, VAR_5);
    FUNC_4(VAR_2, VAR_6);

    return VAR_1;
}
