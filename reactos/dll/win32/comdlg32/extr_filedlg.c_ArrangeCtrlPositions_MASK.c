
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bottom; int right; scalar_t__ left; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef int LPPOINT ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(HWND VAR_8, HWND VAR_9, BOOL VAR_10)
{
    HWND VAR_11, VAR_12;
    RECT VAR_13, VAR_14, VAR_15;
    INT VAR_16 = 0;
    int VAR_17, VAR_18;




     if (VAR_10)
     {
         RECT VAR_19, VAR_20;
         FUNC_3(FUNC_1(VAR_9, VAR_6), &VAR_19);
         FUNC_3(FUNC_1(VAR_9, VAR_2), &VAR_20);



          VAR_16 = VAR_19.bottom - VAR_20.bottom;
    }
    FUNC_0(VAR_9, &VAR_13);


    VAR_13.bottom -= VAR_16;

    VAR_12 = FUNC_1(VAR_8, VAR_7);
    if (VAR_12)
    {
        FUNC_3(VAR_12, &VAR_15);
        FUNC_4(0, VAR_8, (LPPOINT)&VAR_15, 2);




        FUNC_6(VAR_12, 0,
                     0, 0,
                     VAR_13.right, VAR_13.bottom,
                     VAR_3 | VAR_5);
    }
    else
        FUNC_5(&VAR_15);


    VAR_11 = FUNC_2(VAR_8, VAR_0);
    while (VAR_11)
    {
        if (VAR_11 != VAR_12)
        {
            FUNC_3(VAR_11, &VAR_14);
            FUNC_4(0, VAR_8, (LPPOINT)&VAR_14, 2);


            if (VAR_12 && VAR_14.left > VAR_15)
            {

                VAR_14.left += VAR_13.right;
                VAR_14.left -= VAR_15;
            }

            if (VAR_14.top >= VAR_15)
            {

                VAR_14.top += VAR_13.bottom;
                VAR_14.top -= VAR_15 - VAR_15;
            }

            FUNC_6(VAR_11, 0, VAR_14.left, VAR_14.top,
                         0, 0, VAR_4 | VAR_5);
        }
        VAR_11 = FUNC_2(VAR_11, VAR_1);
    }


    VAR_11 = FUNC_2(VAR_9, VAR_0);
    while (VAR_11)
    {
        if (VAR_11 != VAR_8)
        {
            FUNC_3(VAR_11, &VAR_14);
            FUNC_4(0, VAR_9, (LPPOINT)&VAR_14, 2);




            VAR_14.left += VAR_15;
            VAR_14.top += VAR_15;

            FUNC_6(VAR_11, 0, VAR_14.left, VAR_14.top,
                         0, 0, VAR_4 | VAR_5);
        }
        VAR_11 = FUNC_2(VAR_11, VAR_1);
    }




    FUNC_0(VAR_9, &VAR_13);
    FUNC_0(VAR_8, &VAR_14);
    FUNC_7( "parent %s child %s stc32 %s\n", FUNC_8( &VAR_13),
            FUNC_8( &VAR_14), FUNC_8( &VAR_15));

    if (VAR_12)
    {

        if (VAR_13.right > VAR_15 - VAR_15)
            VAR_17 = VAR_14.right - ( VAR_15 - VAR_15);
        else
            VAR_17 = VAR_14.right - VAR_13.right;

        if (VAR_13.bottom > VAR_15 - VAR_15)
            VAR_18 = VAR_14.bottom - ( VAR_15 - VAR_15) - VAR_16;
        else



            VAR_18 = VAR_14.bottom - VAR_13.bottom;
    }
    else
    {
        VAR_17 = 0;
        VAR_18 = VAR_14.bottom - VAR_16;
    }

    FUNC_3(VAR_9, &VAR_13);
    FUNC_6(VAR_9, 0,
                 0, 0,
                 VAR_13.right - VAR_13.left + VAR_17,
                 VAR_13.bottom - VAR_13.top + VAR_18,
                 VAR_3 | VAR_5);
}
