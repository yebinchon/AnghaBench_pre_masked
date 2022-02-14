
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int lfFaceName; int lfCharSet; int lfWeight; scalar_t__ lfWidth; int lfHeight; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; } ;
typedef char TCHAR ;
typedef TYPE_1__ RECT ;
typedef int LPRECT ;
typedef TYPE_2__ LOGFONTW ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,char*,int) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_11(HDC VAR_8, LPRECT VAR_9, UINT VAR_10)
{

    LOGFONTW VAR_11;
    HFONT VAR_12, VAR_13;
    TCHAR VAR_14;
    RECT VAR_15;
    INT VAR_16;
    VAR_16 = FUNC_7(VAR_9, &VAR_15);
    switch(VAR_10 & 0xff)
    {
        case 130:
            VAR_14 = '5';
            break;

        case 132:
            VAR_14 = '6';
            break;

        case 133:
            VAR_14 = '8';
            break;

        case 131:
     VAR_14 = 'w';
     break;

        case 129:
            VAR_14 = 'h';
            break;

        case 128:
            VAR_14 = 'a';
            break;

        default:
            FUNC_8("Invalid menu; flags=0x%04x\n", VAR_10);
            return VAR_5;
    }

    FUNC_9(&VAR_11, sizeof(LOGFONTW));
    VAR_11.lfHeight = VAR_16;
    VAR_11.lfWidth = 0;
    VAR_11.lfWeight = VAR_6;
    VAR_11.lfCharSet = VAR_3;
    FUNC_10(VAR_11.lfFaceName, FUNC_5("Marlett"));
    VAR_12 = FUNC_0(&VAR_11);

    VAR_13 = FUNC_3(VAR_8, VAR_12);

    if ((VAR_10 & 0xff) == 130 ||
        (VAR_10 & 0xff) == 132 )
    {
       FUNC_4(VAR_8, FUNC_2((VAR_10 & VAR_4) ? VAR_1 : VAR_2));
    }

    FUNC_6(VAR_8, VAR_15.left, VAR_15.top, &VAR_14, 1);

    FUNC_3(VAR_8, VAR_13);
    FUNC_1(VAR_12);
    return VAR_7;
}
