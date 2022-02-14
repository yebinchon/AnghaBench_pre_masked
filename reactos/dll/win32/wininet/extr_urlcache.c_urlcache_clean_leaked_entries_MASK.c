
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* options; } ;
typedef TYPE_1__ urlcache_header ;
struct TYPE_8__ {scalar_t__ exempt_delta; int header; } ;
typedef TYPE_2__ entry_url ;
typedef int cache_container ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static BOOL FUNC_3(cache_container *VAR_3, urlcache_header *VAR_4)
{
    DWORD *VAR_5;
    BOOL VAR_6 = VAR_1;

    VAR_5 = &VAR_4->options[VAR_0];
    while(*VAR_5) {
        entry_url *VAR_7 = (entry_url*)((LPBYTE)VAR_4 + *VAR_5);

        if(FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_7))) {
            *VAR_5 = VAR_7->exempt_delta;
            FUNC_2(VAR_4, &VAR_7->header);
            VAR_6 = VAR_2;
        }else {
            VAR_5 = &VAR_7->exempt_delta;
        }
    }

    return VAR_6;
}
