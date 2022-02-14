
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int left; int top; int right; int bottom; } ;
struct TYPE_8__ {int cx; int cy; } ;
struct TYPE_7__ {int tmAveCharWidth; int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef char* LPCWSTR ;
typedef int LONG ;
typedef int INT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ,TYPE_3__*,char*,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int const) ;

LONG FUNC_6( HDC VAR_2,
                         INT VAR_3,
                         INT VAR_4,
                         LPCWSTR VAR_5,
                         INT VAR_6,
                         INT VAR_7,
                         const INT *VAR_8,
                         INT VAR_9,
                         BOOL VAR_10 )
{
    INT VAR_11;
    SIZE VAR_12;
    int VAR_13, VAR_14;
    int VAR_15 = VAR_3;
    TEXTMETRICW VAR_16;

    if (!VAR_8)
        VAR_7=0;

    FUNC_3( VAR_2, &VAR_16 );

    if (VAR_7 == 1)
    {
        VAR_11 = *VAR_8;
        VAR_7 = 0;
    }
    else
    {
        VAR_11 = 8 * VAR_16.tmAveCharWidth;
    }

    while (VAR_6 > 0)
    {
        RECT VAR_17;
        INT VAR_18;
        VAR_18 = VAR_3;
        VAR_17.left = VAR_18;


        for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
            if (VAR_5[VAR_13] != '\t') break;
        for (VAR_14 = VAR_13; VAR_14 < VAR_6; VAR_14++)
            if (VAR_5[VAR_14] == '\t') break;

        FUNC_2( VAR_2, VAR_5 + VAR_13, VAR_14 - VAR_13 , &VAR_12 );

        if( VAR_13) {

            for (; VAR_7 > VAR_13; VAR_8++, VAR_7--)
            {
                if( VAR_9 + FUNC_5( *VAR_8) > VAR_3) {
                    if( VAR_8[ VAR_13 - 1] >= 0) {

                        VAR_3 = VAR_9 + VAR_8[ VAR_13-1] + VAR_12.cx;
                        break;
                    }
                    else
                    {



                        if (VAR_9 - VAR_8[ VAR_13 - 1] - VAR_12.cx > VAR_3)
                        {
                            VAR_3 = VAR_9 - VAR_8[ VAR_13 - 1];
                            VAR_18 = VAR_3 - VAR_12.cx;
                            break;
                        }
                    }
                }
            }


            if ((VAR_7 <= VAR_13) && (VAR_11 > 0)) {
                VAR_18 = VAR_9 + ((VAR_3 - VAR_9) / VAR_11 + VAR_13) * VAR_11;
                VAR_3 = VAR_18 + VAR_12.cx;
            } else if ((VAR_7 <= VAR_13) && (VAR_11 < 0)) {
                VAR_3 = VAR_9 + ((VAR_3 - VAR_9 + VAR_12.cx) / -VAR_11 + VAR_13)
                    * -VAR_11;
                VAR_18 = VAR_3 - VAR_12.cx;
            }
        } else
            VAR_3 += VAR_12.cx;

        if (VAR_10)
        {
            VAR_17.top = VAR_4;
            VAR_17.right = VAR_3;
            VAR_17.bottom = VAR_4 + VAR_12.cy;

            FUNC_0( VAR_2, VAR_18, VAR_4, FUNC_1(VAR_2) == VAR_1 ? VAR_0 : 0,
                         &VAR_17, VAR_5 + VAR_13, VAR_14 - VAR_13, ((void*)0) );
        }
        VAR_6 -= VAR_14;
        VAR_5 += VAR_14;
    }

    if(!VAR_12.cy)
        VAR_12.cy = VAR_16.tmHeight;

    return FUNC_4(VAR_3 - VAR_15, VAR_12.cy);
}
