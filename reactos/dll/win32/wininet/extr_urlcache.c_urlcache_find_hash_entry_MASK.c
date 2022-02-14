
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hash_table_off; } ;
typedef TYPE_2__ urlcache_header ;
struct hash_entry {int key; } ;
struct TYPE_7__ {scalar_t__ signature; } ;
struct TYPE_9__ {scalar_t__ id; struct hash_entry* hash_table; TYPE_1__ header; int next; } ;
typedef TYPE_3__ entry_hash_table ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (TYPE_2__ const*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL FUNC_3(const urlcache_header *VAR_6, LPCSTR VAR_7, struct hash_entry **VAR_8)
{
    DWORD VAR_9 = FUNC_2(VAR_7);
    DWORD VAR_10 = (VAR_9 & (VAR_3-1)) * VAR_1;
    entry_hash_table* VAR_11;
    DWORD VAR_12 = 0;

    VAR_9 >>= VAR_2;

    for (VAR_11 = FUNC_1(VAR_6, VAR_6->hash_table_off);
         VAR_11; VAR_11 = FUNC_1(VAR_6, VAR_11->next))
    {
        int VAR_13;
        if (VAR_11->id != VAR_12++)
        {
            FUNC_0("Error: not right hash table number (%d) expected %d\n", VAR_11->id, VAR_12);
            continue;
        }

        if (VAR_11->header.signature != VAR_4)
        {
            FUNC_0("Error: not right signature (\"%.4s\") - expected \"HASH\"\n", (LPCSTR)&VAR_11->header.signature);
            continue;
        }

        for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
        {
            struct hash_entry *VAR_14 = &VAR_11->hash_table[VAR_10 + VAR_13];
            if (VAR_9 == VAR_14->key>>VAR_2)
            {






                *VAR_8 = VAR_14;
                return VAR_5;
            }
        }
    }
    return VAR_0;
}
