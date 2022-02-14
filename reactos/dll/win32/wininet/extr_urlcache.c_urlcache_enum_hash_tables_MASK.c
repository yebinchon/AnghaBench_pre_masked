
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hash_table_off; } ;
typedef TYPE_2__ urlcache_header ;
struct TYPE_8__ {scalar_t__ signature; } ;
struct TYPE_10__ {scalar_t__ id; TYPE_1__ header; int next; } ;
typedef TYPE_3__ entry_hash_table ;
typedef int LPCSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (TYPE_2__ const*,int ) ;

__attribute__((used)) static BOOL FUNC_3(const urlcache_header *VAR_3, DWORD *VAR_4, entry_hash_table **VAR_5)
{
    for (*VAR_5 = FUNC_2(VAR_3, VAR_3->hash_table_off);
         *VAR_5; *VAR_5 = FUNC_2(VAR_3, (*VAR_5)->next))
    {
        FUNC_1("looking at hash table number %d\n", (*VAR_5)->id);
        if ((*VAR_5)->id != *VAR_4)
            continue;

        if ((*VAR_5)->header.signature != VAR_1)
        {
            FUNC_0("Error: not right signature (\"%.4s\") - expected \"HASH\"\n", (LPCSTR)&(*VAR_5)->header.signature);
            (*VAR_4)++;
            continue;
        }

        FUNC_1("hash table number %d found\n", *VAR_4);
        return VAR_2;
    }
    return VAR_0;
}
