
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sync_time; int sync_date; int modification_time; int hit_rate; int expire_time; int expire_date; int exempt_delta; int cache_entry_type; int access_time; } ;
typedef TYPE_2__ entry_url ;
struct TYPE_6__ {int dwExemptDelta; } ;
struct TYPE_8__ {int LastAccessTime; int LastModifiedTime; int dwHitRate; int ExpireTime; TYPE_1__ u; int CacheEntryType; } ;
typedef TYPE_3__ INTERNET_CACHE_ENTRY_INFOA ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static DWORD FUNC_2(entry_url *VAR_9, const INTERNET_CACHE_ENTRY_INFOA *VAR_10, DWORD VAR_11)
{
    if (VAR_11 & VAR_0)
        VAR_9->access_time = VAR_10->LastAccessTime;
    if (VAR_11 & VAR_1)
        VAR_9->cache_entry_type = VAR_10->CacheEntryType;
    if (VAR_11 & VAR_2)
        VAR_9->exempt_delta = VAR_10->u.dwExemptDelta;
    if (VAR_11 & VAR_3)
        FUNC_1(&VAR_10->ExpireTime, &VAR_9->expire_date, &VAR_9->expire_time);
    if (VAR_11 & VAR_4)
        FUNC_0("CACHE_ENTRY_HEADERINFO_FC unimplemented\n");
    if (VAR_11 & VAR_5)
        VAR_9->hit_rate = VAR_10->dwHitRate;
    if (VAR_11 & VAR_6)
        VAR_9->modification_time = VAR_10->LastModifiedTime;
    if (VAR_11 & VAR_7)
        FUNC_1(&VAR_10->LastAccessTime, &VAR_9->sync_date, &VAR_9->sync_time);

    return VAR_8;
}
