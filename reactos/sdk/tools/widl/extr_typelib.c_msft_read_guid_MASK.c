
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_5__ {TYPE_1__ pGuidTab; } ;
typedef TYPE_2__ MSFT_SegDir ;
typedef int GUID ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,int *,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, MSFT_SegDir *VAR_1, int VAR_2, GUID *VAR_3)
{
    FUNC_0(VAR_0, VAR_1->pGuidTab.offset+VAR_2);
    FUNC_1(VAR_0, VAR_3, sizeof(GUID));
}
