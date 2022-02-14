
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int section ;
typedef int filename ;
typedef int buffer ;
typedef scalar_t__ WCHAR ;
typedef int PCWSTR ;
typedef scalar_t__* LPWSTR ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,scalar_t__*,int,int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (scalar_t__*,char) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_8( HINF VAR_2, PCWSTR VAR_3, void *VAR_4 )
{
    INFCONTEXT VAR_5;

    BOOL VAR_6 = FUNC_0( VAR_2, VAR_3, ((void*)0), &VAR_5 );

    for (; VAR_6; VAR_6 = FUNC_1( &VAR_5, &VAR_5 ))
    {
        WCHAR VAR_7[VAR_0];
        WCHAR VAR_8[VAR_0];
        WCHAR VAR_9[VAR_0];
        WCHAR VAR_10[VAR_0];
        WCHAR VAR_11[VAR_0];
        LPWSTR VAR_12;

        if (!FUNC_2( &VAR_5, 1, VAR_8,
                                   sizeof(VAR_8)/sizeof(WCHAR), ((void*)0) ))
            continue;

        if (!FUNC_2( &VAR_5, 2, VAR_9,
                                   sizeof(VAR_9)/sizeof(WCHAR), ((void*)0) ))
            continue;

        if (!FUNC_2( &VAR_5, 4, VAR_7,
                                   sizeof(VAR_7)/sizeof(WCHAR), ((void*)0) ))
            continue;

        VAR_12 = FUNC_6(VAR_7,'=');
        if (VAR_12)
        {
            *VAR_12 = 0;
            FUNC_7(VAR_10,VAR_7);
            VAR_12++;
            FUNC_7(VAR_11,VAR_12);
        }
        else
        {
            FUNC_7(VAR_10,VAR_7);
            VAR_11[0]=0;
        }

        FUNC_3("Writing %s = %s in %s of file %s\n",FUNC_5(VAR_10),
               FUNC_5(VAR_11),FUNC_5(VAR_9),FUNC_5(VAR_8));
        FUNC_4(VAR_9,VAR_10,VAR_11,VAR_8);

    }
    return VAR_1;
}
