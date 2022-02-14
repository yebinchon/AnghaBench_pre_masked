
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ capacity_in_blocks; scalar_t__ blocks_in_use; int allocation_table; } ;
typedef TYPE_1__ urlcache_header ;
struct TYPE_6__ {scalar_t__ blocks_used; } ;
typedef TYPE_2__ entry_header ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_3(urlcache_header *VAR_4, DWORD VAR_5, entry_header **VAR_6)
{
    DWORD VAR_7, VAR_8;

    for(VAR_7=0; VAR_7<VAR_4->capacity_in_blocks; VAR_7+=VAR_8+1)
    {
        VAR_8 = 0;
        while(VAR_8<VAR_5 && VAR_8+VAR_7<VAR_4->capacity_in_blocks
                && FUNC_2(VAR_4->allocation_table, VAR_7+VAR_8))
            VAR_8++;

        if(VAR_8 == VAR_5)
        {
            DWORD VAR_9;

            FUNC_0("Found free blocks starting at no. %d (0x%x)\n", VAR_7, VAR_1+VAR_7*VAR_0);

            for(VAR_9=0; VAR_9<VAR_5; VAR_9++)
                FUNC_1(VAR_4->allocation_table, VAR_7+VAR_9);

            *VAR_6 = (entry_header*)((BYTE*)VAR_4+VAR_1+VAR_7*VAR_0);
            for(VAR_9=0; VAR_9<VAR_5*VAR_0/sizeof(DWORD); VAR_9++)
                ((DWORD*)*VAR_6)[VAR_9] = 0xdeadbeef;
            (*VAR_6)->blocks_used = VAR_5;

            VAR_4->blocks_in_use += VAR_5;
            return VAR_3;
        }
    }

    return VAR_2;
}
