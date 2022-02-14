
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_4__ {size_t numAddresses; int * addresses; } ;
struct TYPE_3__ {TYPE_2__* cacheEntry; int ret; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__ NetBTNameQueryData ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(void *VAR_4, WORD VAR_5,
 WORD VAR_6, PUCHAR VAR_7, WORD VAR_8)
{
    NetBTNameQueryData *VAR_9 = VAR_4;
    BOOL VAR_10;

    if (VAR_9)
    {
        if (VAR_9->cacheEntry == ((void*)0))
        {
            VAR_9->cacheEntry = FUNC_2(FUNC_1(), 0,
             FUNC_0(VAR_1, VAR_3[VAR_5]));
            if (VAR_9->cacheEntry)
                VAR_9->cacheEntry->numAddresses = 0;
            else
                VAR_9->ret = VAR_2;
        }
        if (VAR_8 == 6 && VAR_9->cacheEntry &&
         VAR_9->cacheEntry->numAddresses < VAR_5)
        {
            VAR_9->cacheEntry->addresses[VAR_9->cacheEntry->
             numAddresses++] = *(const DWORD *)(VAR_7 + 2);
            VAR_10 = VAR_9->cacheEntry->numAddresses < VAR_5;
        }
        else
            VAR_10 = VAR_0;
    }
    else
        VAR_10 = VAR_0;
    return VAR_10;
}
