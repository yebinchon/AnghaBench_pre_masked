
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ wID; } ;
struct TYPE_5__ {int uNumBands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;


 TYPE_3__* FUNC_0 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,...) ;

__attribute__((used)) static LRESULT
FUNC_2 (const REBAR_INFO *VAR_0, UINT VAR_1)
{
    UINT VAR_2;

    if (VAR_0->uNumBands < 1)
 return -1;

    for (VAR_2 = 0; VAR_2 < VAR_0->uNumBands; VAR_2++) {
 if (FUNC_0(VAR_0, VAR_2)->wID == VAR_1) {
     FUNC_1("id %u is band %u found!\n", VAR_1, VAR_2);
     return VAR_2;
 }
    }

    FUNC_1("id %u is not found\n", VAR_1);
    return -1;
}
