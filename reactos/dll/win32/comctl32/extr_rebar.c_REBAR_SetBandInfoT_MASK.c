
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {scalar_t__ cbSize; int fMask; scalar_t__ lpText; } ;
struct TYPE_16__ {int * lpText; } ;
struct TYPE_15__ {scalar_t__ uNumBands; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef TYPE_3__ REBARBANDINFOW ;
typedef int LRESULT ;
typedef int * LPWSTR ;
typedef int LPSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__ const*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int **,scalar_t__) ;
 int FUNC_11 (char*,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static LRESULT
FUNC_12(REBAR_INFO *VAR_8, INT VAR_9, const REBARBANDINFOW *VAR_10, BOOL VAR_11)
{
    REBAR_BAND *VAR_12;
    UINT VAR_13;

    if (!VAR_10 || VAR_10->cbSize < VAR_6)
 return VAR_0;

    if (VAR_9 >= VAR_8->uNumBands)
 return VAR_0;

    FUNC_11("index %d\n", VAR_9);
    FUNC_4 (VAR_10);


    VAR_12 = FUNC_5(VAR_8, VAR_9);

    VAR_13 = FUNC_2 (VAR_8->hwndSelf, VAR_10, VAR_12);
    if (VAR_10->fMask & VAR_5) {
        LPWSTR VAR_14 = ((void*)0);
        if (VAR_11)
            FUNC_10(&VAR_14, VAR_10->lpText);
        else
            FUNC_9(&VAR_14, (LPSTR)VAR_10->lpText);

        if (FUNC_8(VAR_14, VAR_12->lpText)) {
            FUNC_0(VAR_12->lpText);
            VAR_12->lpText = VAR_14;
            VAR_13 |= VAR_5;
        }
        else
            FUNC_0(VAR_14);
    }

    FUNC_7 (VAR_8, VAR_12);

    FUNC_3 (VAR_8);

    if (VAR_13 & (VAR_1 | VAR_3 | VAR_4 | VAR_2)) {
   FUNC_6(VAR_8);
   FUNC_1(VAR_8->hwndSelf, ((void*)0), VAR_7);
    }

    return VAR_7;
}
