
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int RECT ;
typedef int * LPRECT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ,int *,int,int,int) ;
 int VAR_13 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static BOOL FUNC_5(HDC VAR_14, LPRECT VAR_15, UINT VAR_16)
{
    UINT VAR_17;
    RECT VAR_18 = *VAR_15;

    if(VAR_16 & (VAR_10 | VAR_7 | VAR_8))
        VAR_17 = VAR_12;
    else
        VAR_17 = VAR_11;

    if(VAR_16 & VAR_7)
    {
        if(VAR_16 & VAR_9)
            FUNC_3(VAR_14, &VAR_18, VAR_17, VAR_2|VAR_3|VAR_0, 1);
        else
            FUNC_3(VAR_14, &VAR_18, VAR_17, (VAR_16&VAR_8)|VAR_3|VAR_4|VAR_0, 1);

        FUNC_4( VAR_14, &VAR_18 );
    }
    else
    {
        if(VAR_16 & VAR_9)
        {
            FUNC_3(VAR_14, &VAR_18, VAR_17, VAR_2|VAR_3|VAR_0, 1);
            FUNC_0(VAR_14, &VAR_18, FUNC_1(VAR_5));
        }
        else
        {
            FUNC_3(VAR_14, VAR_15, VAR_17, (VAR_16&VAR_8) | VAR_1 | VAR_3 | VAR_4, 1);
        }
    }


    if(VAR_16 & VAR_6)
        FUNC_2(VAR_15, -2, -2);

    return VAR_13;
}
