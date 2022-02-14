
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_11__ {int lana; TYPE_4__* data; } ;
struct TYPE_7__ {scalar_t__ dwIndex; } ;
struct TYPE_10__ {TYPE_1__ ipr; } ;
struct TYPE_9__ {size_t dwNumEntries; TYPE_2__* table; } ;
struct TYPE_8__ {scalar_t__ dwIndex; int dwAddr; } ;
typedef TYPE_3__* PMIB_IPADDRTABLE ;
typedef TYPE_4__ NetBTAdapter ;
typedef TYPE_5__ NetBIOSAdapterImpl ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(UCHAR VAR_3, UCHAR VAR_4,
 ULONG VAR_5, const NetBIOSAdapterImpl *VAR_6, void *VAR_7)
{
    BOOL VAR_8;
    PMIB_IPADDRTABLE VAR_9 = VAR_7;

    if (VAR_9 && VAR_6)
    {
        DWORD VAR_10;

        VAR_8 = VAR_0;
        for (VAR_10 = 0; !VAR_8 && VAR_10 < VAR_9->dwNumEntries; VAR_10++)
        {
            const NetBTAdapter *VAR_11 = VAR_6->data;

            if (VAR_9->table[VAR_10].dwIndex == VAR_11->ipr.dwIndex)
            {
                FUNC_0(VAR_6->lana);
                VAR_9->table[VAR_10].dwAddr = VAR_1;
                VAR_8 = VAR_2;
            }
        }
    }
    else
        VAR_8 = VAR_0;
    return VAR_8;
}
