
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_4__ {int * attsSpecial; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(xmlParserCtxtPtr VAR_1)
{
    if (VAR_1->attsSpecial == ((void*)0))
        return;

    FUNC_1(VAR_1->attsSpecial, VAR_0, VAR_1);

    if (FUNC_2(VAR_1->attsSpecial) == 0) {
        FUNC_0(VAR_1->attsSpecial, ((void*)0));
        VAR_1->attsSpecial = ((void*)0);
    }
    return;
}
