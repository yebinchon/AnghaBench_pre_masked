
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int hash_table_off; } ;
typedef TYPE_2__ urlcache_header ;
struct hash_entry {int key; int offset; } ;
struct TYPE_10__ {scalar_t__ signature; } ;
struct TYPE_12__ {scalar_t__ id; struct hash_entry* hash_table; TYPE_1__ header; int next; } ;
typedef TYPE_3__ entry_hash_table ;
typedef int LPCSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,TYPE_3__**) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static DWORD FUNC_4(urlcache_header *VAR_7, LPCSTR VAR_8, DWORD VAR_9, DWORD VAR_10)
{


    DWORD VAR_11 = FUNC_3(VAR_8);
    DWORD VAR_12 = (VAR_11 & (VAR_5-1)) * VAR_1;
    entry_hash_table* VAR_13, *VAR_14 = ((void*)0);
    DWORD VAR_15 = 0;
    DWORD VAR_16;

    VAR_11 = ((VAR_11 >> VAR_3) << VAR_3) + VAR_10;

    for (VAR_13 = FUNC_2(VAR_7, VAR_7->hash_table_off);
         VAR_13; VAR_13 = FUNC_2(VAR_7, VAR_13->next))
    {
        int VAR_17;
        VAR_14 = VAR_13;

        if (VAR_13->id != VAR_15++)
        {
            FUNC_0("not right hash table number (%d) expected %d\n", VAR_13->id, VAR_15);
            break;
        }

        if (VAR_13->header.signature != VAR_6)
        {
            FUNC_0("not right signature (\"%.4s\") - expected \"HASH\"\n", (LPCSTR)&VAR_13->header.signature);
            break;
        }

        for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
        {
            struct hash_entry *VAR_18 = &VAR_13->hash_table[VAR_12 + VAR_17];
            if (VAR_18->key==VAR_4 || VAR_18->key==VAR_2)
            {
                VAR_18->key = VAR_11;
                VAR_18->offset = VAR_9;
                return VAR_0;
            }
        }
    }
    VAR_16 = FUNC_1(VAR_7, VAR_14, &VAR_13);
    if (VAR_16 != VAR_0)
        return VAR_16;

    VAR_13->hash_table[VAR_12].key = VAR_11;
    VAR_13->hash_table[VAR_12].offset = VAR_9;
    return VAR_0;
}
