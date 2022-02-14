
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ uNumBands; int hFont; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int REBAR_BAND ;
typedef int LRESULT ;
typedef int HFONT ;


 int * FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (REBAR_INFO *VAR_0, HFONT VAR_1)
{
    REBAR_BAND *VAR_2;
    UINT VAR_3;

    VAR_0->hFont = VAR_1;


    for (VAR_3=0; VAR_3<VAR_0->uNumBands; VAR_3++) {
        VAR_2 = FUNC_0(VAR_0, VAR_3);
 FUNC_2 (VAR_0, VAR_2);
    }

    FUNC_1(VAR_0);
    return 0;
}
