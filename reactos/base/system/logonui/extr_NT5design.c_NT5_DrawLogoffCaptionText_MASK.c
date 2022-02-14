
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int cy; int cx; } ;
struct TYPE_8__ {int lfHeight; int lfWeight; int lfFaceName; int lfCharSet; } ;
struct TYPE_7__ {int top; int left; int right; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int LPWSTR ;
typedef TYPE_2__ LOGFONTW ;
typedef int INT ;
typedef scalar_t__ HFONT ;
typedef int HDC ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*,int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_9 (int ,int ,char*) ;

__attribute__((used)) static VOID
FUNC_10(LPWSTR VAR_8,
                          HDC VAR_9)
{
    HFONT VAR_10;
    LOGFONTW VAR_11;
    RECT VAR_12;
    INT VAR_13;


    FUNC_8(&VAR_11, sizeof(LOGFONTW));
    VAR_11.lfCharSet = VAR_0;
    VAR_11.lfHeight = 22;
    VAR_11.lfWeight = 109;
    FUNC_9(VAR_11.lfFaceName, VAR_4, L"Arial");


    VAR_10 = FUNC_0(&VAR_11);
    if (VAR_10)
    {

        FUNC_5(VAR_9, VAR_10);
        FUNC_7(VAR_9, FUNC_4(255, 255, 255));


        VAR_12.top = (VAR_7->cy / 2) + 34;
        VAR_12.bottom = (VAR_7->cy / 2) + 34 + (FUNC_3(VAR_9, VAR_5));
        VAR_12.left = VAR_7->cx / 3;
        VAR_12.right = (VAR_7->cx / 2) + 35 + 137;


        VAR_13 = FUNC_6(VAR_9, VAR_6);


        FUNC_2(VAR_9,
                  VAR_8,
                  -1,
                  &VAR_12,
                  VAR_1 | VAR_3 | VAR_2);


        FUNC_6(VAR_9, VAR_13);


        FUNC_1(VAR_10);
    }
}
