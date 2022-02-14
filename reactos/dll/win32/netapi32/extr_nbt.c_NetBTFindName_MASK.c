
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_18__ {scalar_t__ numAddresses; int * addresses; } ;
struct TYPE_13__ {int dwAddr; } ;
struct TYPE_17__ {TYPE_1__ ipr; } ;
struct TYPE_16__ {TYPE_3__* source_addr; TYPE_3__* destination_addr; } ;
struct TYPE_15__ {int node_count; } ;
struct TYPE_14__ {int ncb_length; scalar_t__ ncb_buffer; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__* PFIND_NAME_HEADER ;
typedef TYPE_4__* PFIND_NAME_BUFFER ;
typedef TYPE_5__ NetBTAdapter ;
typedef TYPE_6__ NBNameCacheEntry ;
typedef int FIND_NAME_HEADER ;
typedef int FIND_NAME_BUFFER ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,TYPE_2__*,TYPE_6__ const**) ;
 int FUNC_1 (char*,void*,...) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static UCHAR FUNC_5(void *VAR_6, PNCB VAR_7)
{
    NetBTAdapter *VAR_8 = VAR_6;
    UCHAR VAR_9;
    const NBNameCacheEntry *VAR_10 = ((void*)0);
    PFIND_NAME_HEADER VAR_11;

    FUNC_1("adapt %p, NCB %p\n", VAR_6, VAR_7);

    if (!VAR_8) return VAR_3;
    if (!VAR_7) return VAR_5;
    if (!VAR_7->ncb_buffer) return VAR_0;
    if (VAR_7->ncb_length < sizeof(FIND_NAME_HEADER)) return VAR_1;

    VAR_11 = (PFIND_NAME_HEADER)VAR_7->ncb_buffer;
    FUNC_3(VAR_11, 0, sizeof(FIND_NAME_HEADER));

    VAR_9 = FUNC_0(VAR_8, VAR_7, &VAR_10);
    if (VAR_9 == VAR_4)
    {
        if (VAR_10)
        {
            DWORD VAR_12 = FUNC_4((VAR_7->ncb_length - sizeof(FIND_NAME_HEADER)) /
             sizeof(FIND_NAME_BUFFER), VAR_10->numAddresses);
            DWORD VAR_13;

            for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
            {
                PFIND_NAME_BUFFER VAR_14;

                VAR_14 =
                 (PFIND_NAME_BUFFER)((PUCHAR)VAR_11 +
                 sizeof(FIND_NAME_HEADER) + VAR_11->node_count *
                 sizeof(FIND_NAME_BUFFER));
                FUNC_3(VAR_14->destination_addr, 0, 2);
                FUNC_2(VAR_14->destination_addr + 2,
                 &VAR_8->ipr.dwAddr, sizeof(DWORD));
                FUNC_3(VAR_14->source_addr, 0, 2);
                FUNC_2(VAR_14->source_addr + 2,
                 &VAR_10->addresses[VAR_13], sizeof(DWORD));
                VAR_11->node_count++;
            }
            if (VAR_12 < VAR_10->numAddresses)
                VAR_9 = VAR_1;
        }
        else
            VAR_9 = VAR_2;
    }
    FUNC_1("returning 0x%02x\n", VAR_9);
    return VAR_9;
}
