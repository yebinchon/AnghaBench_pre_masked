
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlListPtr ;
typedef TYPE_2__* xmlLinkPtr ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {scalar_t__ (* linkCompare ) (int ,void*) ;TYPE_2__* sentinel; } ;


 scalar_t__ FUNC_0 (int ,void*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,void*) ;

__attribute__((used)) static xmlLinkPtr
FUNC_2(xmlListPtr VAR_0, void *VAR_1)
{
    xmlLinkPtr VAR_2;
    if (VAR_0 == ((void*)0))
        return(((void*)0));
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 == VAR_0->sentinel)
        return ((void*)0);
    else {
        if (VAR_0->linkCompare(VAR_2->data, VAR_1) ==0)
            return VAR_2;
        return ((void*)0);
    }
}
