
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int uBand; int fStyle; int dwMask; int lParam; int wID; } ;
struct TYPE_4__ {int fMask; int fStyle; int lParam; int wID; } ;
typedef int REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;
typedef TYPE_2__ NMREBAR ;
typedef int NMHDR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static INT
FUNC_2 (const REBAR_INFO *VAR_6, UINT VAR_7, UINT VAR_8)
{
    NMREBAR VAR_9;

    VAR_9.dwMask = 0;
    if (VAR_7 != -1) {
 REBAR_BAND *VAR_10 = FUNC_0(VAR_6, VAR_7);

 if (VAR_10->fMask & VAR_0) {
     VAR_9.dwMask |= VAR_3;
     VAR_9.wID = VAR_10->wID;
 }
 if (VAR_10->fMask & VAR_1) {
     VAR_9.dwMask |= VAR_4;
     VAR_9.lParam = VAR_10->lParam;
 }
 if (VAR_10->fMask & VAR_2) {
     VAR_9.dwMask |= VAR_5;
     VAR_9.fStyle = VAR_10->fStyle;
 }
    }
    VAR_9.uBand = VAR_7;
    return FUNC_1 ((NMHDR *)&VAR_9, VAR_6, VAR_8);
}
