
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* fnMessage32 ) (int ,int ,long,long,long) ;} ;
typedef TYPE_1__ WINE_MM_DRIVER_PART ;
typedef size_t UINT ;
struct TYPE_6__ {TYPE_1__* parts; } ;
typedef TYPE_2__* LPWINE_MM_DRIVER ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,...) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,long,long,long) ;
 int FUNC_3 (int ,int ,long,long,long) ;

__attribute__((used)) static BOOL FUNC_4(LPWINE_MM_DRIVER VAR_3, UINT VAR_4)
{
    WINE_MM_DRIVER_PART* VAR_5 = &VAR_3->parts[VAR_4];
    DWORD VAR_6;
    FUNC_0("(%p, %04x)\n", VAR_3, VAR_4);

    if (VAR_5->fnMessage32) {




        VAR_6 = VAR_5->fnMessage32(0, VAR_1, 0L, 0L, 0L);
        FUNC_0("DRVM_EXIT => %s\n", FUNC_1(VAR_6));
    }

    return VAR_2;
}
