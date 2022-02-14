
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lf ;
typedef int UINT ;
struct TYPE_12__ {int * crColor; } ;
struct TYPE_11__ {int lfFaceName; int lfCharSet; int lfWeight; scalar_t__ lfWidth; scalar_t__ lfHeight; } ;
struct TYPE_10__ {int right; scalar_t__ top; scalar_t__ left; scalar_t__ bottom; } ;
typedef char TCHAR ;
typedef TYPE_1__ RECT ;
typedef int LPRECT ;
typedef TYPE_2__ LOGFONT ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;
typedef TYPE_3__ COLOR_SCHEME ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,char*,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static BOOL
FUNC_14(HDC VAR_15, LPRECT VAR_16, UINT VAR_17, COLOR_SCHEME *VAR_18)
{
    LOGFONT VAR_19;
    HFONT VAR_20, VAR_21;
    COLORREF VAR_22;
    RECT VAR_23;
    INT VAR_24;
    TCHAR VAR_25;
    switch(VAR_17 & 0xff)
    {
    case 132:
        VAR_25 = 'r';
        break;
    case 131:
        VAR_25 = 's';
        break;
    case 129:
        VAR_25 = '0';
        break;
    case 130:
        VAR_25 = '1';
        break;
    case 128:
        VAR_25 = '2';
        break;
    default:
        return VAR_11;
    }
    FUNC_4(VAR_15, VAR_16, (VAR_17 & VAR_8) ? VAR_10 : VAR_9, VAR_1 | VAR_0 | VAR_2, VAR_18);
    FUNC_12(&VAR_19, sizeof(VAR_19));
    FUNC_5(VAR_16, &VAR_23);
    VAR_23.left += 1;
    VAR_23.top += 1;
    VAR_23.right -= 1;
    VAR_23.bottom -= 1;
    if (VAR_17 & VAR_8)
       FUNC_6(&VAR_23,1,1);
    VAR_19.lfHeight = VAR_23.bottom - VAR_23.top;
    VAR_19.lfWidth = 0;
    VAR_19.lfWeight = VAR_12;
    VAR_19.lfCharSet = VAR_6;
    FUNC_13(VAR_19.lfFaceName, FUNC_10("Marlett"));
    VAR_20 = FUNC_0(&VAR_19);

    VAR_21 = FUNC_7(VAR_15, VAR_20);
    VAR_22 = FUNC_3(VAR_15);
    VAR_24 = FUNC_2(VAR_15);

    FUNC_8(VAR_15, VAR_13);
    if (VAR_17 & VAR_7)
    {

        FUNC_9(VAR_15, VAR_18->crColor[VAR_3]);
        FUNC_11(VAR_15, VAR_23.left + 1, VAR_23.top + 1, &VAR_25, 1);
    }
    FUNC_9(VAR_15, VAR_18->crColor[(VAR_17 & VAR_7) ? VAR_4 : VAR_5]);

    FUNC_11(VAR_15, VAR_23.left, VAR_23.top, &VAR_25, 1);

    FUNC_9(VAR_15, VAR_22);
    FUNC_7(VAR_15, VAR_21);
    FUNC_8(VAR_15, VAR_24);
    FUNC_1(VAR_20);
    return VAR_14;
}
