
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltExtDefPtr ;
struct TYPE_4__ {struct TYPE_4__* URI; struct TYPE_4__* prefix; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(xsltExtDefPtr VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->prefix != ((void*)0))
        FUNC_0(VAR_0->prefix);
    if (VAR_0->URI != ((void*)0))
        FUNC_0(VAR_0->URI);
    FUNC_0(VAR_0);
}
