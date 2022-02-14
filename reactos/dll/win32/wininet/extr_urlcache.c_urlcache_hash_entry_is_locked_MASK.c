
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hash_entry {int key; } ;
struct TYPE_9__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_10__ {scalar_t__ use_count; TYPE_2__ access_time; } ;
typedef TYPE_3__ entry_url ;
typedef int ULONGLONG ;
struct TYPE_8__ {int HighPart; int LowPart; } ;
struct TYPE_11__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_4__ ULARGE_INTEGER ;
struct TYPE_12__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_5__ FILETIME ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hash_entry*,int ) ;

__attribute__((used)) static BOOL FUNC_2(struct hash_entry *VAR_6, entry_url *VAR_7)
{
    FILETIME VAR_8;
    ULARGE_INTEGER VAR_9, VAR_10;

    if ((VAR_6->key & ((1<<VAR_2)-1)) != VAR_3)
        return VAR_0;

    FUNC_0(&VAR_8);
    VAR_10.u.LowPart = VAR_8.dwLowDateTime;
    VAR_10.u.HighPart = VAR_8.dwHighDateTime;

    VAR_9.u.LowPart = VAR_7->access_time.dwLowDateTime;
    VAR_9.u.HighPart = VAR_7->access_time.dwHighDateTime;

    VAR_10.QuadPart -= VAR_9.QuadPart;


    if(VAR_10.QuadPart > (ULONGLONG)24*60*60*VAR_1) {
        FUNC_1(VAR_6, VAR_4);
        VAR_7->use_count = 0;
        return VAR_0;
    }

    return VAR_5;
}
