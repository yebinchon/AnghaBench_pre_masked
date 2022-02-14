
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int right; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef int HFONT ;
typedef scalar_t__ HDC ;
typedef int HBITMAP ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,int ,int ,int,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,TYPE_1__*,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (scalar_t__,int,int,int *) ;
 int VAR_1 ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (scalar_t__,int,int,char*,int ) ;
 int VAR_4 ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (char*,char*,int) ;

__attribute__((used)) static void FUNC_19(HDC VAR_5, RECT* VAR_6, BOOL VAR_7, LONG VAR_8)
{
    static HDC VAR_9;

    if(VAR_7)
    {
        static HBITMAP VAR_10;
        int VAR_11, VAR_12, VAR_13, VAR_14;
        int VAR_15;
        int VAR_16;
        HFONT VAR_17;
        WCHAR VAR_18[] = {'M','S',' ','S','a','n','s',' ','S','e','r','i','f',0};

        if(VAR_9)
        {
            FUNC_4(VAR_9);
            FUNC_5(VAR_10);
        }

        VAR_9 = FUNC_2(0);

        VAR_15 = FUNC_17(FUNC_15(1000), FUNC_7(VAR_9, VAR_0));
        VAR_16 = (int)((float)VAR_15 / 4.0);

        VAR_10 = FUNC_1(VAR_9, VAR_6->right, VAR_6->bottom);
        FUNC_11(VAR_9, VAR_10);
        FUNC_6(VAR_9, VAR_6, FUNC_8(VAR_4));

        VAR_17 = FUNC_3(10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, VAR_18);

        FUNC_11(VAR_9, VAR_17);
        FUNC_12(VAR_9, VAR_3);
        FUNC_13(VAR_9, VAR_2);
        VAR_13 = (int)(((float)VAR_6->bottom - (float)VAR_6->top) / 2.0) + 1;
        VAR_14 = VAR_6->right - VAR_8 + 1;
        for(VAR_11 = 1, VAR_12 = VAR_8; VAR_12 < (VAR_6->right - VAR_8 + 1); VAR_11 ++)
        {
            WCHAR VAR_19[3];
            WCHAR VAR_20[] = {'%','d',0};
            int VAR_21 = VAR_12;

            VAR_21 += VAR_16;
            if(VAR_21 > VAR_14)
                break;

            FUNC_10(VAR_9, VAR_21, VAR_13, ((void*)0));
            FUNC_9(VAR_9, VAR_21, VAR_13+2);

            VAR_21 += VAR_16;
            if(VAR_21 > VAR_14)
                break;

            FUNC_10(VAR_9, VAR_21, VAR_13 - 3, ((void*)0));
            FUNC_9(VAR_9, VAR_21, VAR_13 + 3);

            VAR_21 += VAR_16;
            if(VAR_21 > VAR_14)
                break;

            FUNC_10(VAR_9, VAR_21, VAR_13, ((void*)0));
            FUNC_9(VAR_9, VAR_21, VAR_13+2);

            VAR_12 += VAR_15;
            if(VAR_12 > VAR_14)
                break;

            FUNC_18(VAR_19, VAR_20, VAR_11);
            FUNC_14(VAR_9, VAR_12, 5, VAR_19, FUNC_16(VAR_19));
        }
        FUNC_5(VAR_17);
    }

    FUNC_0(VAR_5, 0, 0, VAR_6->right, VAR_6->bottom, VAR_9, 0, 0, VAR_1);
}
