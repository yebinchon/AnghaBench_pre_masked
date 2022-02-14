
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int error ;
struct TYPE_9__ {scalar_t__ right; scalar_t__ left; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_8__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_7__ {char tmBreakChar; } ;
typedef TYPE_1__ TEXTMETRICA ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef char* PCSTR ;
typedef scalar_t__ INT ;
typedef int HDC ;


 int FUNC_0 (int ,char const*,int,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,char*,int,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(HDC VAR_0, PCSTR VAR_1, RECT *VAR_2)
{
    INT VAR_3,
                VAR_4,
                VAR_5 = VAR_2->right - VAR_2->left,
                VAR_6 = 0, VAR_7;
    const char *VAR_8, *VAR_9;
    SIZE VAR_10;
    TEXTMETRICA VAR_11;
    struct err
    {
        const char *start;
        int len;
        int GetTextExtentExPointWWidth;
    } VAR_12[20];

    FUNC_1(VAR_0, &VAR_11);
    VAR_3 = VAR_2->top;
    do {
        VAR_4 = 0;
        while (*VAR_1 == VAR_11.tmBreakChar) VAR_1++;
        VAR_8 = VAR_1;

        do {
            VAR_9 = VAR_1;


            if (*VAR_1 == '\0') break;

            while (*VAR_1 != '\0' && *VAR_1++ != VAR_11.tmBreakChar);
            VAR_4++;
            FUNC_2(VAR_0, 0, 0);
            FUNC_0(VAR_0, VAR_8, VAR_1 - VAR_8 - 1, &VAR_10);
        } while ((int) VAR_10.cx < VAR_5);


        VAR_4--;
        while (*(VAR_9 - 1) == VAR_11.tmBreakChar)
        {
            VAR_9--;
            VAR_4--;
        }

        if (*VAR_1 == '\0' || VAR_4 <= 0) VAR_9 = VAR_1;

        FUNC_2(VAR_0, 0, 0);
        FUNC_0(VAR_0, VAR_8, VAR_9 - VAR_8, &VAR_10);


        if (*VAR_1 != '\0' && VAR_4 > 0)
        {
            FUNC_2(VAR_0, VAR_5 - VAR_10.cx, VAR_4);
            FUNC_0(VAR_0, VAR_8, VAR_9 - VAR_8, &VAR_10);
            if (VAR_10.cx != VAR_5 && VAR_6 < sizeof(VAR_12)/sizeof(VAR_12[0]) - 1)
            {
                VAR_12[VAR_6].start = VAR_8;
                VAR_12[VAR_6].len = VAR_9 - VAR_8;
                VAR_12[VAR_6].GetTextExtentExPointWWidth = VAR_10.cx;
                VAR_6++;
            }
        }

        VAR_3 += VAR_10.cy;
        VAR_1 = VAR_9;
    } while (*VAR_1 && VAR_3 < VAR_2->bottom);

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    {


        FUNC_3(VAR_12[VAR_7].GetTextExtentExPointWWidth == VAR_5,
            "GetTextExtentPointW() for \"%.*s\" should have returned a width of %d, not %d.\n",
           VAR_12[VAR_7].len, VAR_12[VAR_7].start, VAR_5, VAR_12[VAR_7].GetTextExtentExPointWWidth);
    }
}
