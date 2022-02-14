
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* Driver; } ;
struct TYPE_5__ {scalar_t__ DeviceKey; } ;
typedef TYPE_1__* LPDISPLAY_DEVICEA ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef size_t DWORD ;
typedef TYPE_2__ D3DADAPTER_IDENTIFIER9 ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,size_t*,int ,size_t*) ;
 int FUNC_3 (char*,size_t,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static BOOL FUNC_5(LPDISPLAY_DEVICEA VAR_6, D3DADAPTER_IDENTIFIER9* VAR_7)
{
    HKEY VAR_8;
    BOOL VAR_9 = VAR_1;

    if (VAR_0 == FUNC_1(VAR_2, VAR_6->DeviceKey + FUNC_4("\\Registry\\Machine\\"), 0, VAR_3, &VAR_8))
    {
        DWORD VAR_10 = VAR_4 - (DWORD)FUNC_4(".dll");
        DWORD VAR_11 = 0;

        if (VAR_0 == FUNC_2(VAR_8, "InstalledDisplayDrivers", 0, &VAR_11, (LPBYTE)VAR_7->Driver, &VAR_10))
        {
            VAR_7->Driver[VAR_10] = '\0';
            FUNC_3(VAR_7->Driver, VAR_4, ".dll");
            VAR_9 = VAR_5;
        }

        FUNC_0(VAR_8);
    }

    return VAR_9;
}
