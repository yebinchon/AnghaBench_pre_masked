
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsAString ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int BSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_13(const VARIANT *VAR_3, nsAString *VAR_4)
{
    BSTR VAR_5;
    BOOL VAR_6;
    HRESULT VAR_7;

    switch(FUNC_7(VAR_3)) {
    case 131:
        return FUNC_12(VAR_4, FUNC_3(VAR_3))?
            VAR_2 : VAR_1;
    case 128:
        VAR_7 = FUNC_10(FUNC_6(VAR_3), 0, 0, &VAR_5);
        break;
    case 129:
        VAR_7 = FUNC_9(FUNC_5(VAR_3), 0, 0, &VAR_5);
        break;
    case 130:
        VAR_7 = FUNC_8(FUNC_4(VAR_3), 0, 0, &VAR_5);
        break;
    default:
        FUNC_1("unsupported arg %s\n", FUNC_11(VAR_3));
        return VAR_0;
    }
    if (FUNC_0(VAR_7))
        return VAR_7;

    VAR_6 = FUNC_12(VAR_4, VAR_5);
    FUNC_2(VAR_5);
    return VAR_6 ? VAR_2 : VAR_1;
}
