
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIQUERY ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__**) ;
 int FUNC_4 (int *,char const*) ;
 int * FUNC_5 (scalar_t__) ;
 int * FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static LPWSTR FUNC_10(MSIQUERY *VAR_2, LPCWSTR VAR_3, MSIRECORD *VAR_4)
{
    MSIRECORD *VAR_5;
    LPWSTR VAR_6, VAR_7;
    UINT VAR_8, VAR_9 = 0, VAR_10 = 0;
    int VAR_11;

    VAR_8 = FUNC_3(VAR_2, VAR_1, &VAR_5);
    if (VAR_8 != VAR_0)
        return ((void*)0);

    do
    {
        VAR_6 = FUNC_6(VAR_5, ++VAR_9);
        VAR_11 = FUNC_9( VAR_3, VAR_6 );
        FUNC_7(VAR_6);
    } while (VAR_11);

    FUNC_8(&VAR_5->hdr);

    VAR_8 = FUNC_2(VAR_4, VAR_9, ((void*)0), &VAR_10);
    if (VAR_8 != VAR_0)
        return ((void*)0);
    VAR_10++;

    if (FUNC_1(VAR_4, VAR_9))
    {

        const WCHAR VAR_12[] = {'\'', 0};
        VAR_10 += 2;
        VAR_7 = FUNC_5(VAR_10*sizeof(WCHAR));
        if (!VAR_7)
            return ((void*)0);

        FUNC_4(VAR_7, VAR_12);
        VAR_8 = FUNC_2(VAR_4, VAR_9, VAR_7+1, &VAR_10);
        FUNC_4(VAR_7+1+VAR_10, VAR_12);
    }
    else
    {

        VAR_7 = FUNC_5(VAR_10*sizeof(WCHAR));
        if (!VAR_7)
            return ((void*)0);

        VAR_8 = FUNC_2(VAR_4, VAR_9, VAR_7, &VAR_10);
    }

    if (VAR_8 != VAR_0)
    {
        FUNC_0("failed to get string!\n");
        FUNC_7(VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
