
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int components ;
struct TYPE_3__ {int member_0; int dwSchemeLength; int nScheme; int lpszScheme; int member_1; } ;
typedef TYPE_1__ URL_COMPONENTSW ;
typedef int * SchemeDllRetrieveEncodedObjectW ;
typedef int * LPSTR ;
typedef int LPCWSTR ;
typedef int * HCRYPTOIDFUNCSET ;
typedef scalar_t__ HCRYPTOIDFUNCADDR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ,void**,scalar_t__*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;



 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,...) ;
 int FUNC_7 (int ,int ,int ,int,int *,int,int *,int *) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static BOOL FUNC_9(LPCWSTR VAR_8,
 SchemeDllRetrieveEncodedObjectW *VAR_9, HCRYPTOIDFUNCADDR *VAR_10)
{
    URL_COMPONENTSW VAR_11 = { sizeof(VAR_11), 0 };
    BOOL VAR_12;

    FUNC_6("(%s, %p, %p)\n", FUNC_8(VAR_8), VAR_9, VAR_10);

    *VAR_9 = ((void*)0);
    *VAR_10 = 0;
    VAR_11.dwSchemeLength = 1;
    VAR_12 = FUNC_4(VAR_8, 0, 0, &VAR_11);
    if (VAR_12)
    {




        switch (VAR_11.nScheme)
        {
        case 129:
            *VAR_9 = VAR_3;
            break;
        case 128:
            *VAR_9 = VAR_5;
            break;
        case 130:
            *VAR_9 = VAR_4;
            break;
        default:
        {
            int VAR_13 = FUNC_7(VAR_0, 0, VAR_11.lpszScheme,
             VAR_11.dwSchemeLength, ((void*)0), 0, ((void*)0), ((void*)0));

            if (VAR_13)
            {
                LPSTR VAR_14 = FUNC_2(VAR_13);

                if (VAR_14)
                {
                    static HCRYPTOIDFUNCSET VAR_15 = ((void*)0);

                    if (!VAR_15)
                        VAR_15 = FUNC_1(
                         VAR_6, 0);
                    FUNC_7(VAR_0, 0, VAR_11.lpszScheme,
                     VAR_11.dwSchemeLength, VAR_14, VAR_13, ((void*)0), ((void*)0));
                    VAR_12 = FUNC_0(VAR_15, VAR_7,
                     VAR_14, 0, (void **)VAR_9, VAR_10);
                    FUNC_3(VAR_14);
                }
                else
                {
                    FUNC_5(VAR_1);
                    VAR_12 = VAR_2;
                }
            }
            else
                VAR_12 = VAR_2;
        }
        }
    }
    FUNC_6("returning %d\n", VAR_12);
    return VAR_12;
}
