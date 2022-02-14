
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* hash_table_off; } ;
typedef TYPE_3__ urlcache_header ;
typedef int entry_header ;
struct TYPE_9__ {int signature; } ;
struct TYPE_12__ {TYPE_2__* hash_table; scalar_t__ id; void* next; TYPE_1__ header; } ;
typedef TYPE_4__ entry_hash_table ;
struct TYPE_10__ {void* key; void* offset; } ;
typedef void* DWORD ;
typedef int BYTE ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (TYPE_3__*,int,int **) ;

__attribute__((used)) static DWORD FUNC_1(urlcache_header *VAR_4, entry_hash_table *VAR_5, entry_hash_table **VAR_6)
{
    DWORD VAR_7, VAR_8;
    int VAR_9;

    if((VAR_8 = FUNC_0(VAR_4, 0x20, (entry_header**)VAR_6)) != VAR_0)
        return VAR_8;

    VAR_7 = (BYTE*)*VAR_6-(BYTE*)VAR_4;

    if(VAR_5)
        VAR_5->next = VAR_7;
    else
        VAR_4->hash_table_off = VAR_7;

    (*VAR_6)->header.signature = VAR_3;
    (*VAR_6)->next = 0;
    (*VAR_6)->id = VAR_5 ? VAR_5->id+1 : 0;
    for(VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
        (*VAR_6)->hash_table[VAR_9].offset = VAR_1;
        (*VAR_6)->hash_table[VAR_9].key = VAR_1;
    }
    return VAR_0;
}
