
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_10__ {short x; short y; } ;
struct TYPE_7__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_9__ {int dwHitInfo; TYPE_1__ hdr; scalar_t__ dwItemData; TYPE_6__ pt; int dwItemSpec; } ;
struct TYPE_8__ {int Self; int Notify; } ;
typedef TYPE_2__ STATUS_INFO ;
typedef TYPE_3__ NMMOUSE ;
typedef int LRESULT ;
typedef int LPARAM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__ const*,TYPE_6__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_7(const STATUS_INFO *VAR_2, UINT VAR_3, UINT VAR_4, WPARAM VAR_5, LPARAM VAR_6)
{
    NMMOUSE VAR_7;

    FUNC_6("code %04x, lParam=%lx\n", VAR_3, VAR_6);
    VAR_7.hdr.hwndFrom = VAR_2->Self;
    VAR_7.hdr.idFrom = FUNC_1(VAR_2->Self, VAR_0);
    VAR_7.hdr.code = VAR_3;
    VAR_7.pt.x = (short)FUNC_3(VAR_6);
    VAR_7.pt.y = (short)FUNC_2(VAR_6);
    VAR_7.dwItemSpec = FUNC_4(VAR_2, &VAR_7.pt);
    VAR_7.dwItemData = 0;
    VAR_7.dwHitInfo = 0x30000;


    if(!FUNC_5(VAR_2->Notify, VAR_1, VAR_7.hdr.idFrom, (LPARAM)&VAR_7))
    {
      return FUNC_0(VAR_2->Self, VAR_4, VAR_5, VAR_6);
    }
    return 0;
}
