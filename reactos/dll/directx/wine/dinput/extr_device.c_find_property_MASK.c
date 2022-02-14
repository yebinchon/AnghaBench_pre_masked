
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wine_df; } ;
struct TYPE_6__ {int dwHow; int dwObj; } ;
typedef TYPE_1__* LPCDIPROPHEADER ;
typedef TYPE_2__ DataFormat ;




 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__ const*,int ) ;

int FUNC_3(const DataFormat *VAR_0, LPCDIPROPHEADER VAR_1)
{
    switch (VAR_1->dwHow)
    {
        case 129: return FUNC_1(VAR_0->wine_df, VAR_1->dwObj);
        case 128: return FUNC_2(VAR_0, VAR_1->dwObj);
    }
    FUNC_0("Unhandled ph->dwHow=='%04X'\n", (unsigned int)VAR_1->dwHow);

    return -1;
}
