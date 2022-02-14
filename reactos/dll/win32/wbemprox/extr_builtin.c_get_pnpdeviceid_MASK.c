
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fmtW ;
typedef char WCHAR ;
struct TYPE_3__ {int Revision; int SubSysId; int DeviceId; int VendorId; } ;
typedef TYPE_1__ DXGI_ADAPTER_DESC ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ,int ,int ,int ) ;

__attribute__((used)) static WCHAR *FUNC_2( DXGI_ADAPTER_DESC *VAR_0 )
{
    static const WCHAR VAR_1[] =
        {'P','C','I','\\','V','E','N','_','%','0','4','X','&','D','E','V','_','%','0','4','X',
         '&','S','U','B','S','Y','S','_','%','0','8','X','&','R','E','V','_','%','0','2','X','\\',
         '0','&','D','E','A','D','B','E','E','F','&','0','&','D','E','A','D',0};
    WCHAR *VAR_2;

    if (!(VAR_2 = FUNC_0( sizeof(VAR_1) + 2 * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1( VAR_2, VAR_1, VAR_0->VendorId, VAR_0->DeviceId, VAR_0->SubSysId, VAR_0->Revision );
    return VAR_2;
}
