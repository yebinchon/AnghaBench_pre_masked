
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_12__ {struct TYPE_12__* lpText; scalar_t__ hwndChild; } ;
struct TYPE_11__ {int uNumBands; int bands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int LRESULT ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_8 (REBAR_INFO *VAR_5, WPARAM VAR_6)
{
    UINT VAR_7 = (UINT)VAR_6;
    REBAR_BAND *VAR_8;

    if (VAR_7 >= VAR_5->uNumBands)
 return VAR_0;

    FUNC_7("deleting band %u!\n", VAR_7);
    VAR_8 = FUNC_2(VAR_5, VAR_7);
    FUNC_4 (VAR_5, VAR_7, VAR_2);


    if (VAR_8->hwndChild)
        FUNC_6(VAR_8->hwndChild, VAR_3);
    FUNC_1(VAR_8->lpText);
    FUNC_1(VAR_8);

    VAR_5->uNumBands--;
    FUNC_0(VAR_5->bands, VAR_7);

    FUNC_4 (VAR_5, -1, VAR_1);


    if (VAR_5->uNumBands == 1)
      FUNC_5 (VAR_5, FUNC_2(VAR_5, 0));

    FUNC_3(VAR_5);

    return VAR_4;
}
