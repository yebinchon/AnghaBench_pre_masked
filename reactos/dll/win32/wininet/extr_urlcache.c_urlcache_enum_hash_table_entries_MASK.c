
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int urlcache_header ;
struct hash_entry {scalar_t__ key; } ;
struct TYPE_3__ {struct hash_entry* hash_table; } ;
typedef TYPE_1__ entry_hash_table ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_1(const urlcache_header *VAR_5, const entry_hash_table *VAR_6,
                                          DWORD * VAR_7, const struct hash_entry **VAR_8)
{
    for (; *VAR_7 < VAR_3 ; (*VAR_7)++)
    {
        if (VAR_6->hash_table[*VAR_7].key==VAR_2 || VAR_6->hash_table[*VAR_7].key==VAR_1)
            continue;

        *VAR_8 = &VAR_6->hash_table[*VAR_7];
        FUNC_0("entry found %d\n", *VAR_7);
        return VAR_4;
    }
    FUNC_0("no more entries (%d)\n", *VAR_7);
    return VAR_0;
}
