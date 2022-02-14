
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* self; } ;
typedef TYPE_1__ MIDIMAPDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(MIDIMAPDATA* VAR_2)
{
    if (!FUNC_0(VAR_2, sizeof(MIDIMAPDATA)) && VAR_2->self == VAR_2)
 return VAR_0;
    FUNC_1("Bad midimap data (%p)\n", VAR_2);
    return VAR_1;
}
