
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IgnoreReturn; scalar_t__ HasFocus; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef scalar_t__ PDOC_ITEM ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int*) ;
 int FUNC_1 (TYPE_1__ const*,int ,scalar_t__,int) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_2 (const SYSLINK_INFO *VAR_3)
{
    if(VAR_3->HasFocus && !VAR_3->IgnoreReturn)
    {
        PDOC_ITEM VAR_4;
        int VAR_5;

        VAR_4 = FUNC_0(VAR_3, &VAR_5);
        if(VAR_4)
        {
            FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5);
            return VAR_2;
        }
    }
    return VAR_0;
}
