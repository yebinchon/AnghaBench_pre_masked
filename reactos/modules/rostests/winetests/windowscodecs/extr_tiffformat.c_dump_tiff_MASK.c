
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff_1bpp_data {int dir_offset; } ;
struct IFD_entry {int id; int type; int count; int value; } ;
typedef size_t UINT ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    UINT VAR_1, VAR_2;
    struct tiff_1bpp_data *VAR_3;
    struct IFD_entry *VAR_4;

    VAR_3 = VAR_0;
    VAR_1 = *(short *)((char *)VAR_3 + VAR_3->dir_offset);
    VAR_4 = (struct IFD_entry *)((char *)VAR_3 + VAR_3->dir_offset + sizeof(short));

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        FUNC_0("tag %u: id %04x, type %04x, count %u, value %d",
                VAR_2, VAR_4[VAR_2].id, VAR_4[VAR_2].type, VAR_4[VAR_2].count, VAR_4[VAR_2].value);
        if (VAR_4[VAR_2].id == 0x102 && VAR_4[VAR_2].count > 2)
        {
            short *VAR_5 = (short *)((char *)VAR_3 + VAR_4[VAR_2].value);
            FUNC_0(" (%d,%d,%d,%d)\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
        }
        else
            FUNC_0("\n");
    }
}
