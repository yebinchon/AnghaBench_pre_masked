
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int lfFaceName; void* lfCharSet; void* lfWeight; scalar_t__ lfWidth; scalar_t__ lfHeight; } ;
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
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;







 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,char*,int) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_16(HDC VAR_17, LPRECT VAR_18, UINT VAR_19)
{
    LOGFONTW VAR_20;
    HFONT VAR_21, VAR_22;
    COLORREF VAR_23;
    RECT VAR_24;
    INT VAR_25;
    TCHAR VAR_26;
    switch(VAR_19 & 0xff)
    {
        case 134:
        case 133:
  VAR_26 = '6';
  break;

 case 128:
  VAR_26 = '5';
  break;

 case 132:
  VAR_26 = '3';
  break;

 case 131:
  VAR_26 = '4';
  break;

 case 130:
 case 129:
  FUNC_14(&VAR_20, sizeof(LOGFONTW));
  FUNC_12(VAR_18, &VAR_24);
  VAR_20.lfHeight = VAR_24.bottom - VAR_24.top;
  VAR_20.lfWidth = 0;
  VAR_20.lfWeight = VAR_14;
  VAR_20.lfCharSet = VAR_6;
  FUNC_15(VAR_20.lfFaceName, FUNC_10("Marlett"));
  VAR_21 = FUNC_0(&VAR_20);

  VAR_22 = FUNC_7(VAR_17, VAR_21);
  VAR_23 = FUNC_4(VAR_17);
  VAR_25 = FUNC_2(VAR_17);

  FUNC_8(VAR_17, VAR_15);
  if (!(VAR_19 & (VAR_9 | VAR_7)))
  {
   FUNC_9(VAR_17, FUNC_3(VAR_2));

   VAR_26 = ((VAR_19 & 0xff) == 130) ? 'o' : 'x';
   FUNC_11(VAR_17, VAR_24.left, VAR_24.top, &VAR_26, 1);
   FUNC_9(VAR_17, FUNC_3(VAR_3));
  } else
   FUNC_9(VAR_17, FUNC_3(VAR_5));

  VAR_26 = ((VAR_19 & 0xff) == 130) ? 'p' : 'y';
  FUNC_11(VAR_17, VAR_24.left, VAR_24.top, &VAR_26, 1);

  FUNC_9(VAR_17, VAR_23);
  FUNC_7(VAR_17, VAR_22);
  FUNC_8(VAR_17, VAR_25);
  FUNC_1(VAR_21);
            return VAR_16;
 default:
     FUNC_13("Invalid scroll; flags=0x%04x\n", VAR_19);
            return VAR_13;
    }
    FUNC_5(VAR_17, VAR_18, (VAR_19 & VAR_10) ? VAR_12 : VAR_11, (VAR_19&VAR_7) | VAR_0 | VAR_1, 1);
    FUNC_14(&VAR_20, sizeof(LOGFONTW));
    FUNC_12(VAR_18, &VAR_24);
    VAR_24.left += 1;
    VAR_24.top += 1;
    VAR_24.right -= 1;
    VAR_24.bottom -= 1;
    if(VAR_19 & VAR_10)
       FUNC_6(&VAR_24,1,1);
    VAR_20.lfHeight = VAR_24.bottom - VAR_24.top;
    VAR_20.lfWidth = 0;
    VAR_20.lfWeight = VAR_14;
    VAR_20.lfCharSet = VAR_6;
    FUNC_15(VAR_20.lfFaceName, FUNC_10("Marlett"));
    VAR_21 = FUNC_0(&VAR_20);

    VAR_22 = FUNC_7(VAR_17, VAR_21);
    VAR_23 = FUNC_4(VAR_17);
    VAR_25 = FUNC_2(VAR_17);

    FUNC_8(VAR_17, VAR_15);
    if(VAR_19 & VAR_8)
    {

        FUNC_9(VAR_17, FUNC_3(VAR_2));
        FUNC_11(VAR_17, VAR_24.left + 1, VAR_24.top + 1, &VAR_26, 1);
    }
    FUNC_9(VAR_17, FUNC_3((VAR_19 & VAR_8) ? VAR_3 : VAR_4));

    FUNC_11(VAR_17, VAR_24.left, VAR_24.top, &VAR_26, 1);

    FUNC_9(VAR_17, VAR_23);
    FUNC_7(VAR_17, VAR_22);
    FUNC_8(VAR_17, VAR_25);
    FUNC_1(VAR_21);
    return VAR_16;
}
