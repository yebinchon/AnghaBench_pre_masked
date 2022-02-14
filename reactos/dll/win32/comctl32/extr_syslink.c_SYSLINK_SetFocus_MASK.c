
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int HasFocus; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef int * PDOC_ITEM ;
typedef int LRESULT ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_3 (SYSLINK_INFO *VAR_1)
{
    PDOC_ITEM VAR_2;

    VAR_1->HasFocus = VAR_0;



    VAR_2 = FUNC_0(VAR_1, ((void*)0));
    if(VAR_2 != ((void*)0))
    {
        FUNC_2(VAR_1, VAR_2);
        FUNC_1(VAR_1, VAR_2);
    }
    return 0;
}
