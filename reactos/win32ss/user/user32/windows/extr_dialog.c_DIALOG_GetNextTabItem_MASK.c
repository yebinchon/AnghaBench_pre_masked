
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static HWND FUNC_4( HWND VAR_11, HWND VAR_12, HWND VAR_13, BOOL VAR_14 )
{
    LONG VAR_15;
    LONG VAR_16;
    UINT VAR_17 = VAR_14 ? VAR_6 : VAR_5;
    HWND VAR_18 = 0;
    HWND VAR_19 = 0;

    if(!VAR_13)
    {
        VAR_19 = FUNC_1(VAR_12,VAR_2);
        if(VAR_14) VAR_19 = FUNC_1(VAR_19,VAR_4);
    }
    else if (FUNC_3( VAR_11, VAR_13 ))
    {
        VAR_19 = FUNC_1(VAR_13,VAR_17);
        if(!VAR_19)
        {
            if(FUNC_0(VAR_13) != VAR_11)

                VAR_19 = FUNC_1(FUNC_0(VAR_13),VAR_17);
            else
                VAR_19 = FUNC_1(VAR_13, VAR_14 ? VAR_4 : VAR_3);
        }
    }

    while(VAR_19)
    {
        VAR_15 = FUNC_2(VAR_19,VAR_1);
        VAR_16 = FUNC_2(VAR_19,VAR_0);
        if( (VAR_16 & VAR_8) && (VAR_15 & VAR_10) && !(VAR_15 & VAR_7))
        {
            HWND VAR_20;
            VAR_20 = FUNC_4(VAR_11,VAR_19,((void*)0),VAR_14 );
            if (VAR_20) return (VAR_20);
        }
        else if( (VAR_15 & VAR_9) && (VAR_15 & VAR_10) && !(VAR_15 & VAR_7))
        {
            return (VAR_19);
        }
        VAR_19 = FUNC_1(VAR_19,VAR_17);
    }
    if(VAR_13)
    {
        HWND VAR_21 = FUNC_0(VAR_13);
        while(VAR_21)
        {
            if(VAR_21 == VAR_11) break;
            VAR_18 = FUNC_4(VAR_11,FUNC_0(VAR_21),VAR_21,VAR_14 );
            if(VAR_18) break;
            VAR_21 = FUNC_0(VAR_21);
        }
        if(!VAR_18)
            VAR_18 = FUNC_4(VAR_11,VAR_11,((void*)0),VAR_14 );
    }
    return VAR_18 ? VAR_18 : VAR_13;
}
