
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uNumBands; int bands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int REBAR_BAND ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_6 (REBAR_INFO *VAR_2, INT VAR_3, INT VAR_4)
{
    REBAR_BAND *VAR_5;


    if ((VAR_2->uNumBands == 0) ||
 (VAR_3 < 0) || VAR_3 >= VAR_2->uNumBands ||
 (VAR_4 < 0) || VAR_4 >= VAR_2->uNumBands) {

 FUNC_2("Illegal MoveBand, from=%d, to=%d, current band count=%d\n",
       VAR_3, VAR_4, VAR_2->uNumBands);
       return VAR_0;
    }

    VAR_5 = FUNC_4(VAR_2, VAR_3);
    FUNC_0(VAR_2->bands, VAR_3);
    FUNC_1(VAR_2->bands, VAR_4, VAR_5);

    FUNC_5("moved band %d to index %d\n", VAR_3, VAR_4);
    FUNC_3 (VAR_2);
    return VAR_1;
}
