
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {scalar_t__ QuadPart; } ;
struct TYPE_16__ {size_t dirs_no; TYPE_4__ cache_usage; TYPE_2__ exempt_usage; TYPE_1__* directory_data; } ;
typedef TYPE_5__ urlcache_header ;
typedef int path ;
struct TYPE_14__ {scalar_t__ QuadPart; } ;
struct TYPE_17__ {size_t cache_dir; scalar_t__ write_date; scalar_t__ write_time; int cache_entry_type; TYPE_3__ size; scalar_t__ local_name_off; } ;
typedef TYPE_6__ entry_url ;
typedef int cache_container ;
typedef scalar_t__ WORD ;
struct TYPE_18__ {int ftLastWriteTime; } ;
typedef TYPE_7__ WIN32_FILE_ATTRIBUTE_DATA ;
typedef int WCHAR ;
struct TYPE_12__ {scalar_t__ files_no; } ;
typedef scalar_t__ LPCSTR ;
typedef int LONG ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,TYPE_7__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int const*,TYPE_5__*,scalar_t__,size_t,int *,int*,int ) ;

__attribute__((used)) static DWORD FUNC_5(const cache_container *VAR_7,
        urlcache_header *VAR_8, entry_url *VAR_9)
{
    WIN32_FILE_ATTRIBUTE_DATA VAR_10;
    WCHAR VAR_11[VAR_5];
    LONG VAR_12 = sizeof(VAR_11);
    DWORD VAR_13;
    WORD VAR_14, VAR_15;

    if(!VAR_9->local_name_off)
        goto succ;

    if(!FUNC_4(VAR_7, VAR_8,
                (LPCSTR)VAR_9+VAR_9->local_name_off,
                VAR_9->cache_dir, VAR_11, &VAR_12, VAR_3))
        goto succ;

    if(!FUNC_1(VAR_11, VAR_4, &VAR_10))
        goto succ;
    FUNC_3(&VAR_10.ftLastWriteTime, &VAR_14, &VAR_15);
    if(VAR_14 != VAR_9->write_date || VAR_15 != VAR_9->write_time)
        goto succ;

    VAR_13 = (FUNC_0(VAR_11) ? VAR_2 : FUNC_2());
    if(VAR_13 == VAR_0 || VAR_13 == VAR_1)
        return VAR_13;

succ:
    if (VAR_9->cache_dir < VAR_8->dirs_no)
    {
        if (VAR_8->directory_data[VAR_9->cache_dir].files_no)
            VAR_8->directory_data[VAR_9->cache_dir].files_no--;
    }
    if (VAR_9->cache_entry_type & VAR_6)
    {
        if (VAR_9->size.QuadPart < VAR_8->exempt_usage.QuadPart)
            VAR_8->exempt_usage.QuadPart -= VAR_9->size.QuadPart;
        else
            VAR_8->exempt_usage.QuadPart = 0;
    }
    else
    {
        if (VAR_9->size.QuadPart < VAR_8->cache_usage.QuadPart)
            VAR_8->cache_usage.QuadPart -= VAR_9->size.QuadPart;
        else
            VAR_8->cache_usage.QuadPart = 0;
    }

    return VAR_2;
}
