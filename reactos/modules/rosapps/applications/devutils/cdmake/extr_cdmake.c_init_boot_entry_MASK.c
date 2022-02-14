
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int boot_id; char* bootimage; int load_segment; int boot_emu_type; } ;
typedef TYPE_1__* PBOOT_ENTRY ;
typedef int BYTE ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(PBOOT_ENTRY VAR_0,
                BYTE VAR_1, WORD VAR_2,
                char* VAR_3)
{
    VAR_0->boot_id = 0x88;
    VAR_0->boot_emu_type = VAR_1;
    VAR_0->load_segment = VAR_2;

    VAR_0->bootimage[0] = '\0';
    FUNC_0(VAR_0->bootimage, VAR_3, sizeof(VAR_0->bootimage));
    VAR_0->bootimage[sizeof(VAR_0->bootimage)-1] = '\0';
}
