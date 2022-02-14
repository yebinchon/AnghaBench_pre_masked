
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blocks_in_use; int allocation_table; } ;
typedef TYPE_1__ urlcache_header ;
struct TYPE_6__ {int blocks_used; } ;
typedef TYPE_2__ entry_header ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static BOOL FUNC_1(urlcache_header *VAR_3, entry_header *VAR_4)
{
    DWORD VAR_5, VAR_6;


    VAR_5 = ((DWORD)((BYTE*)VAR_4 - (BYTE*)VAR_3) - VAR_1) / VAR_0;
    for(VAR_6 = VAR_5; VAR_6 < VAR_5+VAR_4->blocks_used; VAR_6++)
        FUNC_0(VAR_3->allocation_table, VAR_6);

    VAR_3->blocks_in_use -= VAR_4->blocks_used;
    return VAR_2;
}
