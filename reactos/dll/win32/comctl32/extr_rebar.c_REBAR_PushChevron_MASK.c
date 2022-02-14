
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int lParamNM; int rc; int lParam; int wID; scalar_t__ uBand; } ;
struct TYPE_9__ {int rcChevron; int fDraw; int lParam; int wID; } ;
struct TYPE_8__ {scalar_t__ uNumBands; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef TYPE_3__ NMREBARCHEVRON ;
typedef int NMHDR ;
typedef int LRESULT ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__ const*,int ) ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static LRESULT
FUNC_5(const REBAR_INFO *VAR_7, UINT VAR_8, LPARAM VAR_9)
{
    if (VAR_8 < VAR_7->uNumBands)
    {
        NMREBARCHEVRON VAR_10;
        REBAR_BAND *VAR_11 = FUNC_1(VAR_7, VAR_8);

        FUNC_4("Pressed chevron on band %u\n", VAR_8);


        VAR_11->fDraw |= VAR_0;
        FUNC_3(VAR_7->hwndSelf, &VAR_11->rcChevron,0,
          VAR_3|VAR_4|VAR_5);


        VAR_10.uBand = VAR_8;
        VAR_10.wID = VAR_11->wID;
        VAR_10.lParam = VAR_11->lParam;
        VAR_10.rc = VAR_11->rcChevron;
        VAR_10.lParamNM = VAR_9;
        FUNC_2((NMHDR*)&VAR_10, VAR_7, VAR_2);


        VAR_11->fDraw &= ~VAR_0;
        FUNC_0(VAR_7->hwndSelf, &VAR_11->rcChevron, VAR_6);

        return VAR_6;
    }
    return VAR_1;
}
