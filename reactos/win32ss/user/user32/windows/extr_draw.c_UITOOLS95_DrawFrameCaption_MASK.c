
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int lfFaceName; int lfCharSet; int lfWeight; scalar_t__ lfWidth; scalar_t__ lfHeight; } ;
struct TYPE_7__ {int right; scalar_t__ top; scalar_t__ left; scalar_t__ bottom; } ;
typedef char TCHAR ;
typedef TYPE_1__ RECT ;
typedef int LPRECT ;
typedef TYPE_2__ LOGFONTW ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,char*,int) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_16(HDC VAR_15, LPRECT VAR_16, UINT VAR_17)
{
    LOGFONTW VAR_18;
    HFONT VAR_19, VAR_20;
    COLORREF VAR_21;
    RECT VAR_22;
    INT VAR_23;
    TCHAR VAR_24;
    switch(VAR_17 & 0xff)
    {
        case 132:
  VAR_24 = 'r';
  break;
        case 131:
  VAR_24 = 's';
  break;
        case 129:
  VAR_24 = '0';
  break;
        case 130:
  VAR_24 = '1';
  break;
        case 128:
  VAR_24 = '2';
  break;
        default:
             FUNC_13("Invalid caption; flags=0x%04x\n", VAR_17);
             return VAR_11;
    }
    FUNC_5(VAR_15,VAR_16,(VAR_17&VAR_8) ? VAR_10 : VAR_9, VAR_1 | VAR_0 | VAR_2, 1);
    FUNC_14(&VAR_18, sizeof(LOGFONTW));
    FUNC_12(VAR_16, &VAR_22);
    VAR_22.left += 1;
    VAR_22.top += 1;
    VAR_22.right -= 1;
    VAR_22.bottom -= 1;
    if(VAR_17 & VAR_8)
       FUNC_6(&VAR_22,1,1);
    VAR_18.lfHeight = VAR_22.bottom - VAR_22.top;
    VAR_18.lfWidth = 0;
    VAR_18.lfWeight = VAR_12;
    VAR_18.lfCharSet = VAR_6;
    FUNC_15(VAR_18.lfFaceName, FUNC_10("Marlett"));
    VAR_19 = FUNC_0(&VAR_18);

    VAR_20 = FUNC_7(VAR_15, VAR_19);
    VAR_21 = FUNC_4(VAR_15);
    VAR_23 = FUNC_2(VAR_15);

    FUNC_8(VAR_15, VAR_13);
    if(VAR_17 & VAR_7)
    {

        FUNC_9(VAR_15, FUNC_3(VAR_3));
        FUNC_11(VAR_15, VAR_22.left + 1, VAR_22.top + 1, &VAR_24, 1);
    }
    FUNC_9(VAR_15, FUNC_3((VAR_17 & VAR_7) ? VAR_4 : VAR_5));

    FUNC_11(VAR_15, VAR_22.left, VAR_22.top, &VAR_24, 1);

    FUNC_9(VAR_15, VAR_21);
    FUNC_7(VAR_15, VAR_20);
    FUNC_8(VAR_15, VAR_23);
    FUNC_1(VAR_19);
    return VAR_14;
}
