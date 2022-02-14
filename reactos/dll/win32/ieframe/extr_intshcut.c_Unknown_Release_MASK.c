
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {int property_set_storage; int currentFile; int url; int refCount; } ;
typedef TYPE_1__ InternetShortcut ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;

__attribute__((used)) static ULONG FUNC_6(InternetShortcut *VAR_0)
{
    ULONG VAR_1;
    FUNC_3("(%p)\n", VAR_0);
    VAR_1 = FUNC_2(&VAR_0->refCount);
    if (VAR_1 == 0)
    {
        FUNC_0(VAR_0->url);
        FUNC_0(VAR_0->currentFile);
        FUNC_1(VAR_0->property_set_storage);
        FUNC_4(VAR_0);
        FUNC_5();
    }
    return VAR_1;
}
