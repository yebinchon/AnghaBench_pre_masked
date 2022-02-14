
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {int hwndSelf; TYPE_1__* tools; } ;
struct TYPE_8__ {scalar_t__ lpszText; scalar_t__ bNotifyUnicode; int hinst; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef size_t INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int FUNC_4 (TYPE_2__ const*,TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_2__ const*,TYPE_1__*,char*) ;
 int FUNC_6 (char*,int ,...) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__,int ) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static void
FUNC_10 (const TOOLTIPS_INFO *VAR_4, INT VAR_5, WCHAR *VAR_6)
{
    TTTOOL_INFO *VAR_7 = &VAR_4->tools[VAR_5];

    if (FUNC_1(VAR_7->lpszText)) {

 FUNC_6("load res string %p %x\n",
        VAR_7->hinst, FUNC_2(VAR_7->lpszText));
 if (!FUNC_3 (VAR_7->hinst, FUNC_2(VAR_7->lpszText), VAR_6, VAR_1))
     VAR_6[0] = '\0';
    }
    else if (VAR_7->lpszText) {
 if (VAR_7->lpszText == VAR_2) {
     if (VAR_7->bNotifyUnicode)
  FUNC_5(VAR_4, VAR_7, VAR_6);
     else
  FUNC_4(VAR_4, VAR_7, VAR_6);
 }
 else {

     FUNC_8 (VAR_6, VAR_7->lpszText, VAR_1);
 }
    }
    else {

        VAR_6[0] = '\0';
    }

    if (!(FUNC_0(VAR_4->hwndSelf, VAR_0) & VAR_3)) {
        WCHAR *VAR_8;
        if ((VAR_8 = FUNC_9(VAR_6, '\t')))
            *VAR_8 = 0;
    }

    FUNC_6("%s\n", FUNC_7(VAR_6));
}
