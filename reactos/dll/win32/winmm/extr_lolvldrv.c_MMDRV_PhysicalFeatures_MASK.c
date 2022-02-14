
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bIsMapper; int drvname; } ;
typedef TYPE_1__ WINE_MM_DRIVER ;
typedef int UINT ;
struct TYPE_8__ {size_t mmdIndex; } ;
typedef TYPE_2__* LPWINE_MLD ;
typedef int LPSTR ;
typedef int* LPDWORD ;
typedef int DWORD_PTR ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_2__*,int,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ) ;

UINT FUNC_5(LPWINE_MLD VAR_2, UINT VAR_3,
                               DWORD_PTR VAR_4, DWORD_PTR VAR_5)
{
    WINE_MM_DRIVER* VAR_6 = &VAR_0[VAR_2->mmdIndex];

    FUNC_2("(%p, %04x, %08lx, %08lx)\n", VAR_2, VAR_3, VAR_4, VAR_5);


    switch (VAR_3) {
    case 132:
        FUNC_4((LPSTR)VAR_4, VAR_6->drvname, FUNC_0(VAR_5));
 break;
    case 134:
        *(LPDWORD)VAR_4 = 0L;
 break;
    case 128:
 FUNC_3("NIY QueryName\n");
 break;
    case 133:
 FUNC_3("NIY call VxD\n");




 break;
    case 129:
 return (VAR_6->bIsMapper) ? 2 : 0;

    case 137:

        *((LPDWORD)VAR_4) = -1;
        *((LPDWORD)VAR_5) = 0;
        break;

    case 136:
    case 135:
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

    case 130:
    case 131:
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

    default:
 FUNC_3("Unknown call %04x\n", VAR_3);
 return VAR_1;
    }
    return 0L;
}
