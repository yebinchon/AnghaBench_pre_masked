
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uNumBands; int bands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int REBAR_BAND ;
typedef scalar_t__ INT ;


 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline REBAR_BAND* FUNC_2(const REBAR_INFO *VAR_0, INT VAR_1)
{
    FUNC_1(VAR_1 >= 0 && VAR_1 < VAR_0->uNumBands);
    return FUNC_0(VAR_0->bands, VAR_1);
}
