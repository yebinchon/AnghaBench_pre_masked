
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_14__ {int nbname; int name; } ;
struct TYPE_13__ {int ncb_callname; } ;
struct TYPE_12__ {int nameQueryXID; } ;
struct TYPE_11__ {int ret; TYPE_4__* cacheEntry; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ NetBTNameQueryData ;
typedef TYPE_2__ NetBTAdapter ;
typedef TYPE_3__ NCB ;
typedef TYPE_4__ NBNameCacheEntry ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 unsigned int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int ,int ,int ,unsigned int,int ) ;
 int FUNC_3 (TYPE_2__ const*,scalar_t__,unsigned int,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static UCHAR FUNC_5(const NetBTAdapter *VAR_8, SOCKET VAR_9, const NCB *VAR_10,
 DWORD VAR_11, BOOL VAR_12, DWORD VAR_13, DWORD VAR_14,
 NBNameCacheEntry **VAR_15)
{
    unsigned int VAR_16;
    NetBTNameQueryData VAR_17;

    if (!VAR_8) return VAR_3;
    if (VAR_9 == VAR_0) return VAR_3;
    if (!VAR_10) return VAR_3;
    if (!VAR_15) return VAR_3;

    VAR_17.cacheEntry = ((void*)0);
    VAR_17.ret = VAR_5;
    for (VAR_16 = 0; VAR_17.cacheEntry == ((void*)0) && VAR_16 < VAR_14;
     VAR_16++)
    {
        if (!FUNC_1(VAR_10))
        {
            int VAR_18 = FUNC_2(VAR_9, VAR_10->ncb_callname,
             VAR_8->nameQueryXID, VAR_1, VAR_11, VAR_12);

            if (VAR_18 == 0)
                VAR_17.ret = FUNC_3(VAR_8, VAR_9,
                 FUNC_0() + VAR_13, VAR_7,
                 &VAR_17);
            else
                VAR_17.ret = VAR_6;
        }
        else
            VAR_17.ret = VAR_4;
    }
    if (VAR_17.cacheEntry)
    {
        FUNC_4(VAR_17.cacheEntry->name, VAR_10->ncb_callname, VAR_2);
        FUNC_4(VAR_17.cacheEntry->nbname, VAR_10->ncb_callname, VAR_2);
    }
    *VAR_15 = VAR_17.cacheEntry;
    return VAR_17.ret;
}
