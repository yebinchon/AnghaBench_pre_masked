
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ HasFocus; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef int * PDOC_ITEM ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__ const*,int*) ;
 int * FUNC_1 (TYPE_1__ const*,int *) ;
 int * FUNC_2 (TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__ const*,int *) ;
 int * FUNC_4 (TYPE_1__ const*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_5 (const SYSLINK_INFO *VAR_2, BOOL VAR_3)
{
    if(VAR_2->HasFocus)
    {
        PDOC_ITEM VAR_4;
        int VAR_5;

        VAR_4 = FUNC_0(VAR_2, &VAR_5);
        if(VAR_4 != ((void*)0))
        {
            PDOC_ITEM VAR_6, VAR_7;

            if(VAR_3)
                VAR_6 = FUNC_2(VAR_2, VAR_4);
            else
                VAR_6 = FUNC_1(VAR_2, VAR_4);

            if(VAR_6 != ((void*)0))
            {
                VAR_7 = FUNC_4(VAR_2, VAR_6);

                if(VAR_7 && VAR_7 != VAR_6)
                {
                    FUNC_3(VAR_2, VAR_7);
                }
                FUNC_3(VAR_2, VAR_6);
                return VAR_1;
            }
        }
    }
    return VAR_0;
}
