
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attrs; } ;
typedef TYPE_2__ type_t ;
struct TYPE_4__ {int unknown1; int unknown2; int typekind; scalar_t__ flags; } ;
struct sltg_typeinfo_header {int magic; int href_offset; int res06; int res0e; int res16; int member_offset; scalar_t__ res1e; TYPE_1__ misc; int version; } ;
struct sltg_hrefmap {int href_count; int* href; } ;
struct sltg_hrefinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct sltg_typeinfo_header *VAR_1, const type_t *VAR_2, int VAR_3,
                          const struct sltg_hrefmap *VAR_4)
{
    VAR_1->magic = 0x0501;
    VAR_1->href_offset = -1;
    VAR_1->res06 = -1;
    VAR_1->res0e = -1;
    VAR_1->version = FUNC_0(VAR_2->attrs, VAR_0);
    VAR_1->res16 = 0xfffe0000;
    VAR_1->misc.unknown1 = 0x02;
    VAR_1->misc.flags = 0;
    VAR_1->misc.unknown2 = 0x02;
    VAR_1->misc.typekind = VAR_3;
    VAR_1->res1e = 0;

    VAR_1->member_offset = sizeof(*VAR_1);

    if (VAR_4->href_count)
    {
        char VAR_5[64];
        int VAR_6, VAR_7;

        VAR_7 = sizeof(struct sltg_hrefinfo);

        for (VAR_6 = 0; VAR_6 < VAR_4->href_count; VAR_6++)
        {
            FUNC_1(VAR_5, "*\\Rffff*#%x", VAR_4->href[VAR_6]);
            VAR_7 += 8 + 2 + FUNC_2(VAR_5);
        }

        VAR_1->href_offset = VAR_1->member_offset;
        VAR_1->member_offset += VAR_7;
    }
}
