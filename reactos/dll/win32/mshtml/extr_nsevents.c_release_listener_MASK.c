
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref; } ;
typedef TYPE_1__ nsDocumentEventListener ;
typedef int LONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static LONG FUNC_3(nsDocumentEventListener *VAR_0)
{
    LONG VAR_1 = FUNC_0(&VAR_0->ref);

    FUNC_1("(%p) ref=%d\n", VAR_0, VAR_1);

    if(!VAR_1)
        FUNC_2(VAR_0);

    return VAR_1;
}
