
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef char WCHAR ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_5__ {scalar_t__ CtlType; scalar_t__ CtlID; int itemState; TYPE_3__ rcItem; int hDC; int itemID; int hwndItem; } ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef int HICON ;
typedef TYPE_1__ DRAWITEMSTRUCT ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,TYPE_3__*,char*,int ,int *) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static LONG FUNC_11(HWND VAR_23, WPARAM VAR_24, LPARAM VAR_25,
       int VAR_26, const DRAWITEMSTRUCT *VAR_27)
{
    WCHAR *VAR_28;
    HICON VAR_29;
    COLORREF VAR_30 = 0, VAR_31 = 0;

    if (VAR_27->CtlType == VAR_12 && VAR_27->CtlID == VAR_21)
    {
        if (!(VAR_28 = FUNC_8(VAR_0))) return VAR_8;
 FUNC_5(VAR_27->hwndItem, VAR_9, VAR_27->itemID,
                      (LPARAM)VAR_28);

 if ((VAR_27->itemState & VAR_10) && !VAR_26)
 {
     VAR_31 = FUNC_6( VAR_27->hDC, FUNC_4( VAR_3 ) );
     VAR_30 = FUNC_7( VAR_27->hDC, FUNC_4(VAR_4));
 }
 if (VAR_26)
     FUNC_7(VAR_27->hDC,FUNC_4(VAR_2) );

 FUNC_2(VAR_27->hDC, VAR_27->rcItem.left + 1,
                  VAR_27->rcItem.top + 1, VAR_7 | VAR_6,
                  &(VAR_27->rcItem), VAR_28, FUNC_10(VAR_28), ((void*)0));

 if (VAR_27->itemState & VAR_10)
     FUNC_0( VAR_27->hDC, &(VAR_27->rcItem) );

 if ((VAR_27->itemState & VAR_10) && !VAR_26)
 {
     FUNC_6( VAR_27->hDC, VAR_31 );
     FUNC_7( VAR_27->hDC, VAR_30 );
 }
        FUNC_9(VAR_28);
 return VAR_13;
    }

    if (VAR_27->CtlType == VAR_12 && VAR_27->CtlID == VAR_22)
    {
        if (!(VAR_28 = FUNC_8(VAR_0)))
            return VAR_8;
 FUNC_5(VAR_27->hwndItem, VAR_9, VAR_27->itemID,
                      (LPARAM)VAR_28);

 if (VAR_27->itemState & VAR_10)
 {
     VAR_31 = FUNC_6( VAR_27->hDC, FUNC_4( VAR_3 ) );
     VAR_30 = FUNC_7( VAR_27->hDC, FUNC_4(VAR_4));
 }
 FUNC_2(VAR_27->hDC, VAR_27->rcItem.left + VAR_15,
                  VAR_27->rcItem.top + 1, VAR_7 | VAR_6,
                  &(VAR_27->rcItem), VAR_28, FUNC_10(VAR_28), ((void*)0));

 if (VAR_27->itemState & VAR_10)
     FUNC_0( VAR_27->hDC, &(VAR_27->rcItem) );

 if (VAR_27->itemState & VAR_10)
 {
     FUNC_6( VAR_27->hDC, VAR_31 );
     FUNC_7( VAR_27->hDC, VAR_30 );
 }
 FUNC_1( VAR_27->hDC, VAR_27->rcItem.left, VAR_27->rcItem.top, VAR_18, 16, 16, 0, 0, VAR_5 );
        FUNC_9(VAR_28);
 return VAR_13;
    }
    if (VAR_27->CtlType == VAR_11 && VAR_27->CtlID == VAR_14)
    {
        char VAR_32[] = "a:";
        if (!(VAR_28 = FUNC_8(VAR_0)))
            return VAR_8;
 FUNC_5(VAR_27->hwndItem, VAR_1, VAR_27->itemID,
                      (LPARAM)VAR_28);
        VAR_32[0] += VAR_28[2] - 'a';
        switch(FUNC_3(VAR_32))
        {
        case 128: VAR_29 = VAR_17; break;
        case 131: VAR_29 = VAR_16; break;
        case 129: VAR_29 = VAR_20; break;
        case 130:
        default: VAR_29 = VAR_19; break;
        }
 if (VAR_27->itemState & VAR_10)
 {
     VAR_31 = FUNC_6( VAR_27->hDC, FUNC_4( VAR_3 ) );
     VAR_30 = FUNC_7( VAR_27->hDC, FUNC_4(VAR_4));
 }
 FUNC_2(VAR_27->hDC, VAR_27->rcItem.left + VAR_15,
                  VAR_27->rcItem.top + 1, VAR_7 | VAR_6,
                  &(VAR_27->rcItem), VAR_28, FUNC_10(VAR_28), ((void*)0));

 if (VAR_27->itemState & VAR_10)
 {
     FUNC_6( VAR_27->hDC, VAR_31 );
     FUNC_7( VAR_27->hDC, VAR_30 );
 }
 FUNC_1( VAR_27->hDC, VAR_27->rcItem.left, VAR_27->rcItem.top, VAR_29, 16, 16, 0, 0, VAR_5 );
        FUNC_9(VAR_28);
 return VAR_13;
    }
    return VAR_8;
}
