
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ size; int capacity_in_blocks; } ;
typedef TYPE_1__ urlcache_header ;
struct TYPE_12__ {int mapping; int path; int cache_prefix; } ;
typedef TYPE_2__ cache_container ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_10(cache_container *VAR_6, urlcache_header **VAR_7)
{
    urlcache_header *VAR_8 = *VAR_7;
    DWORD VAR_9;

    FUNC_2("(%s %s)\n", FUNC_7(VAR_6->cache_prefix), FUNC_8(VAR_6->path));

    if(FUNC_9(VAR_6, VAR_8))
        return VAR_4;

    if(VAR_8->size >= VAR_0*8*VAR_1 + VAR_2) {
        FUNC_4("index file has maximal size\n");
        return VAR_3;
    }

    FUNC_5(VAR_6);
    VAR_9 = FUNC_6(VAR_6, VAR_8->capacity_in_blocks*2);
    if(VAR_9 != VAR_4)
        return VAR_9;
    VAR_8 = FUNC_1(VAR_6->mapping, VAR_5, 0, 0, 0);
    if(!VAR_8)
        return FUNC_0();

    FUNC_3(*VAR_7);
    *VAR_7 = VAR_8;
    return VAR_4;
}
