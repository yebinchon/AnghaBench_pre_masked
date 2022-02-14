
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPSTR ;
typedef int CERT_ENHKEY_USAGE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int *,scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__*,char) ;

__attribute__((used)) static CERT_ENHKEY_USAGE *FUNC_4(LPSTR VAR_1)
{
    CERT_ENHKEY_USAGE *VAR_2 = FUNC_1(FUNC_0(), VAR_0,
     sizeof(CERT_ENHKEY_USAGE));

    if (VAR_2)
    {
        LPSTR VAR_3, VAR_4;

        for (VAR_3 = VAR_1, VAR_4 = FUNC_3(VAR_3, ','); VAR_2 && VAR_3 && *VAR_3;
         VAR_3 = VAR_4 ? VAR_4 + 1 : ((void*)0),
         VAR_4 = VAR_3 ? FUNC_3(VAR_3, ',') : ((void*)0))
        {
            if (VAR_4)
                *VAR_4 = 0;
            VAR_2 = FUNC_2(VAR_2, VAR_3);
        }
    }
    return VAR_2;
}
