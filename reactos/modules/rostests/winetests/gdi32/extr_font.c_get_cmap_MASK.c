
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_tables; } ;
typedef TYPE_1__ cmap_header ;
struct TYPE_5__ {int offset; int enc_id; int plat_id; } ;
typedef TYPE_2__ cmap_encoding_record ;
typedef scalar_t__ USHORT ;
typedef void BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(cmap_header *VAR_0, USHORT VAR_1, USHORT VAR_2)
{
    USHORT VAR_3;
    cmap_encoding_record *VAR_4 = (cmap_encoding_record *)(VAR_0 + 1);

    for(VAR_3 = 0; VAR_3 < FUNC_1(VAR_0->num_tables); VAR_3++)
    {
        if(FUNC_1(VAR_4->plat_id) == VAR_1 && FUNC_1(VAR_4->enc_id) == VAR_2)
            return (BYTE *)VAR_0 + FUNC_0(VAR_4->offset);
        VAR_4++;
    }
    return ((void*)0);
}
