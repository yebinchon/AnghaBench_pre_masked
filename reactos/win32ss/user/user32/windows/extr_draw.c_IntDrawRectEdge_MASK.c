
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_1__* LPRECT ;
typedef int HDC ;
typedef int HBRUSH ;
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
 int VAR_13 ;
 int VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 int* VAR_22 ;
 char* VAR_23 ;
 int* VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_4(HDC VAR_30, LPRECT VAR_31, UINT VAR_32, UINT VAR_33, UINT VAR_34)
{
    signed char VAR_35, VAR_36;
    signed char VAR_37, VAR_38;
    HBRUSH VAR_39, VAR_40, VAR_41, VAR_42;
    RECT VAR_43 = *VAR_31, VAR_44;
    int VAR_45 = 0, VAR_46 = 0, VAR_47 = 0, VAR_48 = 0;
    BOOL VAR_49 = !( ((VAR_32 & VAR_0) == VAR_0
                       || (VAR_32 & VAR_1) == VAR_1)
                      && !(VAR_33 & (VAR_6|VAR_9)) );

    VAR_39 = VAR_40 = VAR_41 = VAR_42 = FUNC_1(VAR_25);


    if(VAR_33 & VAR_9)
    {
        VAR_35 = VAR_37 = VAR_22[VAR_32 & (VAR_0|VAR_1)];
        VAR_36 = VAR_38 = VAR_24[VAR_32 & (VAR_0|VAR_1)];
    }
    else if(VAR_33 & VAR_6)
    {
        VAR_35 = VAR_37 = VAR_21[VAR_32 & (VAR_0|VAR_1)];
        VAR_36 = VAR_38 = VAR_23[VAR_32 & (VAR_0|VAR_1)];
 if( VAR_35 != -1 ) VAR_35 = VAR_37 = VAR_15;
    }
    else if(VAR_33 & VAR_11)
    {
        VAR_35 = VAR_18[VAR_32 & (VAR_0|VAR_1)];
        VAR_36 = VAR_20[VAR_32 & (VAR_0|VAR_1)];
        VAR_37 = VAR_27[VAR_32 & (VAR_0|VAR_1)];
        VAR_38 = VAR_29[VAR_32 & (VAR_0|VAR_1)];
    }
    else
    {
        VAR_35 = VAR_17[VAR_32 & (VAR_0|VAR_1)];
        VAR_36 = VAR_19[VAR_32 & (VAR_0|VAR_1)];
        VAR_37 = VAR_26[VAR_32 & (VAR_0|VAR_1)];
        VAR_38 = VAR_28[VAR_32 & (VAR_0|VAR_1)];
    }

    if((VAR_33 & VAR_4) == VAR_4) VAR_45 = VAR_34;
    if((VAR_33 & VAR_14) == VAR_14) VAR_47 = VAR_34;
    if((VAR_33 & VAR_5) == VAR_5) VAR_48 = VAR_34;
    if((VAR_33 & VAR_13) == VAR_13) VAR_46 = VAR_34;

    if(VAR_35 != -1) VAR_39 = FUNC_2(VAR_35);
    if(VAR_36 != -1) VAR_40 = FUNC_2(VAR_36);
    if(VAR_37 != -1) VAR_41 = FUNC_2(VAR_37);
    if(VAR_38 != -1) VAR_42 = FUNC_2(VAR_38);


    if(VAR_33 & VAR_12)
    {
        VAR_44 = VAR_43;
        VAR_44.bottom = VAR_44.top + VAR_34;
        FUNC_0( VAR_30, &VAR_44, VAR_40 );
    }
    if(VAR_33 & VAR_7)
    {
        VAR_44 = VAR_43;
        VAR_44.right = VAR_44.left + VAR_34;
        FUNC_0( VAR_30, &VAR_44, VAR_40 );
    }
    if(VAR_33 & VAR_3)
    {
        VAR_44 = VAR_43;
        VAR_44.top = VAR_44.bottom - VAR_34;
        FUNC_0( VAR_30, &VAR_44, VAR_42 );
    }
    if(VAR_33 & VAR_10)
    {
        VAR_44 = VAR_43;
        VAR_44.left = VAR_44.right - VAR_34;
        FUNC_0( VAR_30, &VAR_44, VAR_42 );
    }


    if(VAR_33 & VAR_12)
    {
        FUNC_3( &VAR_44, VAR_43.left + VAR_46, VAR_43.top + VAR_34,
                 VAR_43.right - VAR_47, VAR_43.top + 2 * VAR_34 );
        FUNC_0( VAR_30, &VAR_44, VAR_39 );
    }
    if(VAR_33 & VAR_7)
    {
        FUNC_3( &VAR_44, VAR_43.left + VAR_34, VAR_43.top + VAR_46,
                 VAR_43.left + 2 * VAR_34, VAR_43.bottom - VAR_45 );
        FUNC_0( VAR_30, &VAR_44, VAR_39 );
    }
    if(VAR_33 & VAR_3)
    {
        FUNC_3( &VAR_44, VAR_43.left + VAR_45, VAR_43.bottom - 2 * VAR_34,
                 VAR_43.right - VAR_48, VAR_43.bottom - VAR_34 );
        FUNC_0( VAR_30, &VAR_44, VAR_41 );
    }
    if(VAR_33 & VAR_10)
    {
        FUNC_3( &VAR_44, VAR_43.right - 2 * VAR_34, VAR_43.top + VAR_47,
                 VAR_43.right - VAR_34, VAR_43.bottom - VAR_48 );
        FUNC_0( VAR_30, &VAR_44, VAR_41 );
    }

    if( ((VAR_33 & VAR_8) && VAR_49) || (VAR_33 & VAR_2) )
    {
        int VAR_50 = (VAR_22[VAR_32 & (VAR_0|VAR_1)] != -1 ? VAR_34 : 0)
                + (VAR_24[VAR_32 & (VAR_0|VAR_1)] != -1 ? VAR_34 : 0);

        if(VAR_33 & VAR_7) VAR_43.left += VAR_50;
        if(VAR_33 & VAR_10) VAR_43.right -= VAR_50;
        if(VAR_33 & VAR_12) VAR_43.top += VAR_50;
        if(VAR_33 & VAR_3) VAR_43.bottom -= VAR_50;

        if((VAR_33 & VAR_8) && VAR_49)
 {
            FUNC_0(VAR_30, &VAR_43, FUNC_2(VAR_33 & VAR_9 ?
             VAR_16 : VAR_15));
 }

 if(VAR_33 & VAR_2)
     *VAR_31 = VAR_43;
    }

    return VAR_49;
}
