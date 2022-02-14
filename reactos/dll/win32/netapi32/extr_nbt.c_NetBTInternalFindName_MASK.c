
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_9__ {int dwAddr; int dwMask; scalar_t__ dwBCastAddr; } ;
struct TYPE_11__ {int nameCache; TYPE_1__ ipr; int nameQueryXID; } ;
struct TYPE_10__ {char* ncb_callname; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__ NetBTAdapter ;
typedef int NBNameCacheEntry ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,TYPE_2__*,int,int ,int ,int ,int **) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int **) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,TYPE_3__*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;

__attribute__((used)) static UCHAR FUNC_7(NetBTAdapter *VAR_18, PNCB VAR_19,
 const NBNameCacheEntry **VAR_20)
{
    UCHAR VAR_21 = VAR_4;

    FUNC_4("adapter %p, ncb %p, cacheEntry %p\n", VAR_18, VAR_19, VAR_20);

    if (!VAR_20) return VAR_3;
    *VAR_20 = ((void*)0);

    if (!VAR_18) return VAR_3;
    if (!VAR_19) return VAR_3;

    if (VAR_19->ncb_callname[0] == '*')
        VAR_21 = VAR_5;
    else
    {
        *VAR_20 = FUNC_0(VAR_13, VAR_19->ncb_callname);
        if (!*VAR_20)
            *VAR_20 = FUNC_0(VAR_18->nameCache,
             VAR_19->ncb_callname);
        if (!*VAR_20)
        {
            NBNameCacheEntry *VAR_22 = ((void*)0);

            VAR_21 = FUNC_3(VAR_19->ncb_callname, &VAR_22);
            if (VAR_21 == VAR_4 && VAR_22)
            {
                VAR_21 = FUNC_2(&VAR_13, VAR_22);
                if (VAR_21 != VAR_4)
                    VAR_22 = ((void*)0);
            }
            else
            {
                SOCKET VAR_23 = FUNC_5(VAR_7, VAR_8, VAR_2, ((void*)0),
                 0, VAR_10);

                if(VAR_23 == VAR_1)
                    VAR_21 = VAR_6;
                else
                {
                    int VAR_24;

                    VAR_18->nameQueryXID++;
                    for (VAR_24 = 0; VAR_21 == VAR_4 && *VAR_20 == ((void*)0)
                     && VAR_24 < VAR_14; VAR_24++)
                        VAR_21 = FUNC_1(VAR_18, VAR_23, VAR_19,
                         VAR_17[VAR_24], VAR_0, VAR_16,
                         VAR_15, &VAR_22);
                    if (VAR_21 == VAR_4 && VAR_22)
                    {
                        VAR_21 = FUNC_2(&VAR_13, VAR_22);
                        if (VAR_21 != VAR_4)
                            VAR_22 = ((void*)0);
                    }
                    if (VAR_21 == VAR_4 && *VAR_20 == ((void*)0))
                    {
                        DWORD VAR_25 =
                         VAR_18->ipr.dwAddr & VAR_18->ipr.dwMask;

                        if (VAR_18->ipr.dwBCastAddr)
                            VAR_25 |= ~VAR_18->ipr.dwMask;
                        VAR_21 = FUNC_1(VAR_18, VAR_23, VAR_19, VAR_25,
                         VAR_9, VAR_12, VAR_11, &VAR_22);
                        if (VAR_21 == VAR_4 && VAR_22)
                        {
                            VAR_21 = FUNC_2(&VAR_18->nameCache,
                             VAR_22);
                            if (VAR_21 != VAR_4)
                                VAR_22 = ((void*)0);
                        }
                    }
                    FUNC_6(VAR_23);
                }
            }
            *VAR_20 = VAR_22;
        }
    }
    FUNC_4("returning 0x%02x\n", VAR_21);
    return VAR_21;
}
