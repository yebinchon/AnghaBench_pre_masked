
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
struct TYPE_7__ {int linkCompare; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__* const) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

xmlListPtr
FUNC_2(const xmlListPtr VAR_0)
{
    xmlListPtr VAR_1;

    if (VAR_0 == ((void*)0))
        return(((void*)0));






    if (((void*)0) ==(VAR_1 = FUNC_1(((void*)0), VAR_0->linkCompare)))
        return (((void*)0));
    if (0 != FUNC_0(VAR_1, VAR_0))
        return ((void*)0);
    return VAR_1;
}
