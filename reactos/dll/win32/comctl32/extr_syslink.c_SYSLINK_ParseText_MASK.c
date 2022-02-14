
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int * szUrl; int * szID; int state; } ;
struct TYPE_11__ {TYPE_1__ Link; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_12__ {char BreakChar; int Style; } ;
typedef TYPE_3__ SYSLINK_INFO ;
typedef scalar_t__ SL_ITEM_TYPE ;
typedef TYPE_4__* PDOC_ITEM ;
typedef char* LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char const*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_3 (TYPE_3__*,char*,int,scalar_t__,TYPE_4__*) ;
 int FUNC_4 (char*,TYPE_3__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int ) ;

__attribute__((used)) static UINT FUNC_10 (SYSLINK_INFO *VAR_8, LPCWSTR VAR_9)
{
    static const WCHAR VAR_10[] = { '<','a' };
    static const WCHAR VAR_11[] = { 'h','r','e','f','=','\"' };
    static const WCHAR VAR_12[] = { 'i','d','=','\"' };
    static const WCHAR VAR_13[] = { '<','/','a','>' };
    LPCWSTR VAR_14, VAR_15 = ((void*)0), VAR_16 = ((void*)0), VAR_17 = ((void*)0);
    int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
    PDOC_ITEM VAR_22 = ((void*)0);
    SL_ITEM_TYPE VAR_23 = VAR_7;
    LPCWSTR VAR_24, VAR_25;
    UINT VAR_26, VAR_27;

    FUNC_4("(%p %s)\n", VAR_8, FUNC_5(VAR_9));

    for(VAR_14 = VAR_9; *VAR_14 != 0;)
    {
        if(*VAR_14 == '<')
        {
            if(!FUNC_9(VAR_14, VAR_10, FUNC_0(VAR_10)) && (VAR_23 == VAR_7))
            {
                BOOL VAR_28 = VAR_0, VAR_29 = VAR_0;

                if(*(VAR_14 + 2) == '>')
                {

                    VAR_18 = 3;
                    VAR_29 = VAR_4;
                    VAR_28 = VAR_4;
                    VAR_17 = VAR_14;
                    VAR_20 = 0;
                    VAR_24 = ((void*)0);
                    VAR_25 = ((void*)0);
                }
                else if(*(VAR_14 + 2) == VAR_8->BreakChar)
                {

                    LPCWSTR *VAR_30 = ((void*)0), VAR_31;
                    UINT *VAR_32 = ((void*)0);

                    VAR_18 = 3;
                    VAR_31 = VAR_14 + VAR_18;
                    VAR_24 = ((void*)0);
                    VAR_25 = ((void*)0);

CheckParameter:

                    if(!FUNC_9(VAR_31, VAR_11, FUNC_0(VAR_11)))
                    {
                        VAR_18 += 6;
                        VAR_28 = VAR_4;
                        VAR_30 = &VAR_25;
                        VAR_32 = &VAR_27;
                    }
                    else if(!FUNC_9(VAR_31, VAR_12, FUNC_0(VAR_12)))
                    {
                        VAR_18 += 4;
                        VAR_28 = VAR_4;
                        VAR_30 = &VAR_24;
                        VAR_32 = &VAR_26;
                    }
                    else
                    {
                        VAR_28 = VAR_0;
                    }

                    if(VAR_28)
                    {


                        VAR_28 = VAR_0;
                        *VAR_30 = VAR_14 + VAR_18;
                        *VAR_32 = 0;

                        for(VAR_31 = *VAR_30; *VAR_31 != 0; VAR_31++)
                        {
                            VAR_18++;
                            if(*VAR_31 == '\"')
                            {
                                VAR_28 = VAR_4;
                                VAR_31++;
                                break;
                            }
                            (*VAR_32)++;
                        }
                    }
                    if(VAR_28)
                    {




                        if(*VAR_31 == VAR_8->BreakChar)
                        {

                            VAR_18++;
                            VAR_31++;
                            goto CheckParameter;
                        }
                        else if(*VAR_31 == '>')
                        {

                            VAR_29 = VAR_4;
                            VAR_18++;
                        }
                    }
                }

                if(VAR_29 && VAR_28)
                {


                    VAR_23 = VAR_6;
                    VAR_16 = VAR_14 + VAR_18;
                    VAR_20 = 0;
                    VAR_17 = VAR_14;
                }
                else
                {
                    VAR_18 = 1;
                    VAR_24 = ((void*)0);
                    VAR_25 = ((void*)0);
                    if(VAR_15 == ((void*)0))
                    {
                        VAR_15 = VAR_14;
                    }
                }
            }
            else if(!FUNC_9(VAR_14, VAR_13, FUNC_0(VAR_13)) && (VAR_23 == VAR_6) && VAR_17)
            {

                if(VAR_15 != ((void*)0) && VAR_19 > 0 && VAR_17 > VAR_15)
                {
                    VAR_22 = FUNC_3(VAR_8, VAR_15, VAR_17 - VAR_15, VAR_7, VAR_22);
                    if(VAR_22 == ((void*)0))
                    {
                        FUNC_2("Unable to create new document item!\n");
                        return VAR_21;
                    }
                    VAR_21++;
                    VAR_15 = ((void*)0);
                    VAR_19 = 0;
                }


                VAR_14 += 4;
                if(VAR_16 != ((void*)0) && VAR_20 > 0)
                {
                    VAR_22 = FUNC_3(VAR_8, VAR_16, VAR_20, VAR_6, VAR_22);
                    if(VAR_22 == ((void*)0))
                    {
                        FUNC_2("Unable to create new document item!\n");
                        return VAR_21;
                    }
                    VAR_21++;
                    if(VAR_23 == VAR_6)
                    {
                        int VAR_33;

                        if(!(VAR_8->Style & VAR_5))
                        {
                            VAR_22->u.Link.state |= VAR_1;
                        }

                        if(VAR_24 != ((void*)0))
                        {
                            VAR_33 = FUNC_7(VAR_26, FUNC_8(VAR_24));
                            VAR_33 = FUNC_7(VAR_33, VAR_3 - 1);
                            VAR_22->u.Link.szID = FUNC_1((VAR_33 + 1) * sizeof(WCHAR));
                            if(VAR_22->u.Link.szID != ((void*)0))
                            {
                                FUNC_6(VAR_22->u.Link.szID, VAR_24, VAR_33 + 1);
                            }
                        }
                        else
                            VAR_22->u.Link.szID = ((void*)0);
                        if(VAR_25 != ((void*)0))
                        {
                            VAR_33 = FUNC_7(VAR_27, FUNC_8(VAR_25));
                            VAR_33 = FUNC_7(VAR_33, VAR_2 - 1);
                            VAR_22->u.Link.szUrl = FUNC_1((VAR_33 + 1) * sizeof(WCHAR));
                            if(VAR_22->u.Link.szUrl != ((void*)0))
                            {
                                FUNC_6(VAR_22->u.Link.szUrl, VAR_25, VAR_33 + 1);
                            }
                        }
                        else
                            VAR_22->u.Link.szUrl = ((void*)0);
                    }
                    VAR_16 = ((void*)0);
                }
                VAR_23 = VAR_7;
                VAR_17 = ((void*)0);
                VAR_15 = ((void*)0);
                continue;
            }
            else
            {

                VAR_18 = 1;
                VAR_20++;
                if(VAR_23 == VAR_7 && VAR_15 == ((void*)0))
                {
                    VAR_15 = VAR_14;
                }
            }

            VAR_19 += VAR_18;
            VAR_14 += VAR_18;
        }
        else
        {
            VAR_19++;
            VAR_20++;


            if(VAR_15 == ((void*)0) && VAR_23 == VAR_7)
            {
                VAR_15 = VAR_14;
            }

            VAR_14++;
        }
    }

    if(VAR_15 != ((void*)0) && VAR_19 > 0)
    {
        VAR_22 = FUNC_3(VAR_8, VAR_15, VAR_19, VAR_23, VAR_22);
        if(VAR_22 == ((void*)0))
        {
            FUNC_2("Unable to create new document item!\n");
            return VAR_21;
        }
        if(VAR_23 == VAR_6)
        {
            int VAR_34;

            if(!(VAR_8->Style & VAR_5))
            {
                VAR_22->u.Link.state |= VAR_1;
            }

            if(VAR_24 != ((void*)0))
            {
                VAR_34 = FUNC_7(VAR_26, FUNC_8(VAR_24));
                VAR_34 = FUNC_7(VAR_34, VAR_3 - 1);
                VAR_22->u.Link.szID = FUNC_1((VAR_34 + 1) * sizeof(WCHAR));
                if(VAR_22->u.Link.szID != ((void*)0))
                {
                    FUNC_6(VAR_22->u.Link.szID, VAR_24, VAR_34 + 1);
                }
            }
            else
                VAR_22->u.Link.szID = ((void*)0);
            if(VAR_25 != ((void*)0))
            {
                VAR_34 = FUNC_7(VAR_27, FUNC_8(VAR_25));
                VAR_34 = FUNC_7(VAR_34, VAR_2 - 1);
                VAR_22->u.Link.szUrl = FUNC_1((VAR_34 + 1) * sizeof(WCHAR));
                if(VAR_22->u.Link.szUrl != ((void*)0))
                {
                    FUNC_6(VAR_22->u.Link.szUrl, VAR_25, VAR_34 + 1);
                }
            }
            else
                VAR_22->u.Link.szUrl = ((void*)0);
        }
        VAR_21++;
    }

    if(VAR_16 != ((void*)0) && VAR_20 > 0)
    {

        VAR_22 = FUNC_3(VAR_8, VAR_16, VAR_20, VAR_7, VAR_22);
        if(VAR_22 == ((void*)0))
        {
            FUNC_2("Unable to create new document item!\n");
            return VAR_21;
        }
        VAR_21++;
    }

    return VAR_21;
}
