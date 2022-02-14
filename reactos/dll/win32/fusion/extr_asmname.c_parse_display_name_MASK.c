
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* displayname; char* name; char* procarch; char* culture; } ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef TYPE_1__ IAssemblyNameImpl ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_8 (char*) ;
 int VAR_8 ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_10(IAssemblyNameImpl *VAR_9, LPCWSTR VAR_10)
{
    LPWSTR VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    HRESULT VAR_16 = VAR_3;
    BOOL VAR_17 = VAR_1;

    if (!VAR_10)
        return VAR_3;

    VAR_9->displayname = FUNC_8(VAR_10);
    if (!VAR_9->displayname)
        return VAR_0;

    VAR_11 = FUNC_8(VAR_10);
    VAR_12 = VAR_11;
    if (!VAR_11)
    {
        VAR_16 = VAR_0;
        goto done;
    }

    VAR_13 = FUNC_9(VAR_11, ',');
    if (VAR_13) *VAR_13 = '\0';


    if( !VAR_13 && FUNC_9(VAR_11, ' ') )
    {
        VAR_16 = VAR_2;
        goto done;
    }

    VAR_9->name = FUNC_8(VAR_11);
    if (!VAR_9->name)
    {
        VAR_16 = VAR_0;
        goto done;
    }

    if (!VAR_13)
        goto done;

    VAR_11 = VAR_13 + 1;
    while (!VAR_17)
    {
        VAR_13 = FUNC_9(VAR_11, '=');
        if (!VAR_13)
        {
            VAR_16 = VAR_2;
            goto done;
        }

        *(VAR_13++) = '\0';
        if (!*VAR_13)
        {
            VAR_16 = VAR_2;
            goto done;
        }

        if (!(VAR_14 = FUNC_9(VAR_13, ',')))
        {
            if (!(VAR_14 = FUNC_9(VAR_13, '\0')))
            {
                VAR_16 = VAR_2;
                goto done;
            }

            VAR_17 = VAR_4;
        }

        *VAR_14 = '\0';
        if (!(VAR_15 = FUNC_6( VAR_13, VAR_14 - VAR_13 )))
        {
            VAR_16 = VAR_2;
            goto done;
        }
        while (*VAR_11 == ' ') VAR_11++;

        if (!FUNC_2(VAR_11, VAR_8))
            VAR_16 = FUNC_7( VAR_9, VAR_15 );
        else if (!FUNC_2(VAR_11, VAR_5))
            VAR_16 = FUNC_3( VAR_9, VAR_15 );
        else if (!FUNC_2(VAR_11, VAR_7))
            VAR_16 = FUNC_5( VAR_9, VAR_15 );
        else if (!FUNC_2(VAR_11, VAR_6))
        {
            VAR_9->procarch = VAR_15;
            VAR_15 = ((void*)0);

            VAR_16 = FUNC_4( VAR_9, VAR_9->procarch );
        }
        FUNC_1( VAR_15 );

        if (FUNC_0(VAR_16))
            goto done;

        VAR_11 = VAR_14 + 1;
    }

done:
    FUNC_1(VAR_12);
    if (FUNC_0(VAR_16))
    {
        FUNC_1(VAR_9->displayname);
        FUNC_1(VAR_9->name);
        FUNC_1(VAR_9->culture);
        FUNC_1(VAR_9->procarch);
    }
    return VAR_16;
}
