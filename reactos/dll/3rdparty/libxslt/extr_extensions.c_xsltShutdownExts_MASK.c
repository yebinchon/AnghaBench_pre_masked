
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
struct TYPE_4__ {int * extInfos; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(xsltStylesheetPtr VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    if (VAR_2->extInfos == ((void*)0))
        return;
    FUNC_1(VAR_2->extInfos, VAR_1, VAR_2);
    FUNC_0(VAR_2->extInfos, VAR_0);
    VAR_2->extInfos = ((void*)0);
}
