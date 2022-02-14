
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_19__ {scalar_t__ numAddresses; int * addresses; } ;
struct TYPE_18__ {int nameQueryXID; } ;
struct TYPE_17__ {int gotResponse; int astatLen; TYPE_2__* astat; } ;
struct TYPE_16__ {scalar_t__ name_count; } ;
struct TYPE_15__ {int ncb_callname; int ncb_length; int ncb_buffer; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__* PNCB ;
typedef TYPE_2__* PADAPTER_STATUS ;
typedef TYPE_3__ NetBTNodeQueryData ;
typedef TYPE_4__ NetBTAdapter ;
typedef TYPE_5__ NBNameCacheEntry ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,TYPE_5__ const**) ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__,int ,TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (char*,TYPE_4__*,...) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,int ,int ) ;
 int VAR_14 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static UCHAR FUNC_8(NetBTAdapter *VAR_17, PNCB VAR_18)
{
    UCHAR VAR_19 = VAR_7;
    const NBNameCacheEntry *VAR_20 = ((void*)0);

    FUNC_5("adapter %p, NCB %p\n", VAR_17, VAR_18);

    if (!VAR_17) return VAR_4;
    if (!VAR_18) return VAR_8;

    VAR_19 = FUNC_2(VAR_17, VAR_18, &VAR_20);
    if (VAR_19 == VAR_7 && VAR_20)
    {
        if (VAR_20->numAddresses > 0)
        {
            SOCKET VAR_21 = FUNC_6(VAR_12, VAR_13, VAR_2, ((void*)0), 0,
             VAR_14);

            if(VAR_21 == VAR_1)
                VAR_19 = VAR_9;
            else
            {
                NetBTNodeQueryData VAR_22;
                DWORD VAR_23;
                PADAPTER_STATUS VAR_24 = (PADAPTER_STATUS)VAR_18->ncb_buffer;

                VAR_17->nameQueryXID++;
                VAR_24->name_count = 0;
                VAR_22.gotResponse = VAR_0;
                VAR_22.astat = VAR_24;
                VAR_22.astatLen = VAR_18->ncb_length;
                for (VAR_23 = 0; !VAR_22.gotResponse &&
                 VAR_23 < VAR_15; VAR_23++)
                {
                    if (!FUNC_1(VAR_18))
                    {
                        int VAR_25 = FUNC_3(VAR_21, VAR_18->ncb_callname,
                         VAR_17->nameQueryXID, VAR_3,
                         VAR_20->addresses[0], VAR_0);

                        if (VAR_25 == 0)
                            VAR_19 = FUNC_4(VAR_17, VAR_21,
                             FUNC_0() + VAR_16,
                             VAR_11, &VAR_22);
                        else
                            VAR_19 = VAR_10;
                    }
                    else
                        VAR_19 = VAR_5;
                }
                FUNC_7(VAR_21);
            }
        }
        else
            VAR_19 = VAR_6;
    }
    else if (VAR_19 == VAR_5)
        ;
    else
        VAR_19 = VAR_6;
    FUNC_5("returning 0x%02x\n", VAR_19);
    return VAR_19;
}
