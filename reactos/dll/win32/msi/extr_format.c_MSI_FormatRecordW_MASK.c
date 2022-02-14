
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_13__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef scalar_t__* LPWSTR ;
typedef int* LPDWORD ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (char*,int *,TYPE_1__*,scalar_t__*,int*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *,int **,int*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__*,int *,int) ;
 int * FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

UINT FUNC_12( MSIPACKAGE* VAR_4, MSIRECORD* VAR_5, LPWSTR VAR_6,
                        LPDWORD VAR_7 )
{
    WCHAR *VAR_8, *VAR_9 = ((void*)0);
    UINT VAR_10 = VAR_0;
    DWORD VAR_11;
    MSIRECORD *VAR_12;
    int VAR_13, VAR_14;

    FUNC_4("%p %p %p %p\n", VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_7(VAR_5);

    if (!(VAR_8 = FUNC_9( VAR_5, 0 )))
        VAR_8 = FUNC_5( VAR_5 );

    VAR_13 = FUNC_1(VAR_5);
    VAR_12 = FUNC_0(VAR_5);
    if (!VAR_12)
    {
        VAR_10 = VAR_2;
        goto end;
    }
    FUNC_3(VAR_12, 0, VAR_8);
    for (VAR_14 = 1; VAR_14 <= VAR_13; VAR_14++)
    {
        if (FUNC_2(VAR_5, VAR_14))
        {
            FUNC_6(VAR_4, FUNC_2(VAR_5, VAR_14), &VAR_9, &VAR_11, ((void*)0));
            FUNC_3(VAR_12, VAR_14, VAR_9);
            FUNC_10(VAR_9);
        }
    }

    FUNC_6(VAR_4, VAR_8, &VAR_9, &VAR_11, VAR_12);
    if (VAR_6)
    {
        if (*VAR_7>VAR_11)
        {
            FUNC_8(VAR_6,VAR_9,VAR_11*sizeof(WCHAR));
            VAR_10 = VAR_3;
            VAR_6[VAR_11] = 0;
        }
        else
        {
            if (*VAR_7 > 0)
            {
                FUNC_8(VAR_6,VAR_9,(*VAR_7)*sizeof(WCHAR));
                VAR_6[(*VAR_7)-1] = 0;
            }
            VAR_10 = VAR_1;
        }
    }
    else VAR_10 = VAR_3;

    *VAR_7 = VAR_11;
    FUNC_11(&VAR_12->hdr);
end:
    FUNC_10( VAR_8 );
    FUNC_10( VAR_9 );
    return VAR_10;
}
