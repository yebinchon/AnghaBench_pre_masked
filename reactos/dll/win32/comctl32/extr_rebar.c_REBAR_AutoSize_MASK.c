
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {void* rcTarget; void* rcActual; int fChanged; } ;
struct TYPE_8__ {int hwndSelf; } ;
typedef void* RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ NMRBAUTOSIZE ;
typedef int NMHDR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (void**,void**) ;
 int FUNC_1 (int ,void**) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,void**) ;

__attribute__((used)) static VOID
FUNC_6(REBAR_INFO *VAR_1, BOOL VAR_2)
{
    RECT VAR_3, VAR_4;
    NMRBAUTOSIZE VAR_5;

    if (VAR_2)
        FUNC_2(VAR_1);
    FUNC_1(VAR_1->hwndSelf, &VAR_3);
    FUNC_4(VAR_1, FUNC_5(VAR_1, &VAR_3));
    FUNC_1(VAR_1->hwndSelf, &VAR_4);

    FUNC_1(VAR_1->hwndSelf, &VAR_5.rcTarget);
    VAR_5.fChanged = FUNC_0(&VAR_3, &VAR_4);
    VAR_5.rcTarget = VAR_3;
    VAR_5.rcActual = VAR_4;
    FUNC_3((NMHDR *)&VAR_5, VAR_1, VAR_0);
}
