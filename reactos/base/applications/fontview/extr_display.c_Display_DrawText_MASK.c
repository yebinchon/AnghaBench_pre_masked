
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {char* szTypeFaceName; char** nSizes; int hSizeFont; int * szString; int * hFonts; int hCharSetFont; int szFormat; int hCaptionFont; } ;
struct TYPE_5__ {int tmDescent; scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRIC ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;
typedef TYPE_2__ DISPLAYDATA ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int,int *,int ) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(HDC VAR_5, DISPLAYDATA* VAR_6, int VAR_7)
{
 HFONT VAR_8;
 TEXTMETRIC VAR_9;
 int VAR_10, VAR_11;
 WCHAR VAR_12[5];
 WCHAR VAR_13[VAR_1 + 20];


 VAR_11 = -VAR_7;

 VAR_8 = FUNC_4(VAR_5, VAR_6->hCaptionFont);
 FUNC_1(VAR_5, &VAR_9);

 FUNC_6(VAR_13, L"%s%s", VAR_6->szTypeFaceName, VAR_6->szFormat);
 FUNC_5(VAR_5, 0, VAR_11, VAR_13, (INT)FUNC_7(VAR_13));
 VAR_11 += VAR_9.tmHeight + VAR_3;


 FUNC_4(VAR_5, FUNC_0(VAR_0));
 FUNC_3(VAR_5, 0, VAR_11, ((void*)0));
 FUNC_2(VAR_5, 10000, VAR_11);
 VAR_11 += VAR_4;




 FUNC_4(VAR_5, VAR_6->hCharSetFont);
 FUNC_1(VAR_5, &VAR_9);
 FUNC_6(VAR_13, L"abcdefghijklmnopqrstuvwxyz");
 FUNC_5(VAR_5, 0, VAR_11, VAR_13, (INT)FUNC_7(VAR_13));
 VAR_11 += VAR_9.tmHeight + 1;

 FUNC_6(VAR_13, L"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
 FUNC_5(VAR_5, 0, VAR_11, VAR_13, (INT)FUNC_7(VAR_13));
 VAR_11 += VAR_9.tmHeight + 1;

 FUNC_6(VAR_13, L"0123456789.:,;(\"~!@#$%%^&*')");
 FUNC_5(VAR_5, 0, VAR_11, VAR_13, (INT)FUNC_7(VAR_13));
 VAR_11 += VAR_9.tmHeight + 1;


 FUNC_4(VAR_5, FUNC_0(VAR_0));
 FUNC_3(VAR_5, 0, VAR_11, ((void*)0));
 FUNC_2(VAR_5, 10000, VAR_11);
 VAR_11 += VAR_4;


 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
 {
  FUNC_4(VAR_5, VAR_6->hFonts[VAR_10]);
  FUNC_5(VAR_5, 20, VAR_11, VAR_6->szString, (INT)FUNC_7(VAR_6->szString));
  FUNC_1(VAR_5, &VAR_9);
  VAR_11 += VAR_9.tmHeight + 1;
  FUNC_4(VAR_5, VAR_6->hSizeFont);
  FUNC_6(VAR_12, L"%d", VAR_6->nSizes[VAR_10]);
  FUNC_5(VAR_5, 0, VAR_11 - 13 - VAR_9.tmDescent, VAR_12, (INT)FUNC_7(VAR_12));
 }
 FUNC_4(VAR_5, VAR_8);

 return VAR_11;
}
