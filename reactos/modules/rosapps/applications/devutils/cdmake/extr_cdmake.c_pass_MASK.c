
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int header_id; int platform_id; } ;
struct TYPE_15__ {int sector; int offset; int * file; } ;
struct TYPE_14__ {int boot_id; int boot_emu_type; int load_segment; int sector_count; int load_rba; char const* bootimage; } ;
struct TYPE_13__ {int boot_id; int boot_emu_type; int load_segment; int sector_count; int load_rba; char const* bootimage; struct TYPE_13__* next_entry; } ;
struct TYPE_12__ {int header_id; int platform_id; int num_entries; struct TYPE_12__* next_header; TYPE_3__* entry_list; } ;
struct TYPE_11__ {int sector; int path_table_index; char* name_on_cd; int joliet_sector; char* joliet_name; int flags; int size; int joliet_size; char* orig_name; struct TYPE_11__* next_in_directory; struct TYPE_11__* first_record; struct TYPE_11__* parent; struct TYPE_11__* next_in_path_table; } ;
typedef TYPE_1__* PDIR_RECORD ;
typedef TYPE_2__* PBOOT_HEADER ;
typedef TYPE_3__* PBOOT_ENTRY ;
typedef int FILE ;
typedef int DWORD ;
typedef int BYTE ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 TYPE_9__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_8__ VAR_20 ;
 TYPE_7__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* VAR_23 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (char*,char const*) ;
 TYPE_1__ VAR_33 ;
 char* VAR_34 ;
 int FUNC_9 (char*) ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 char* VAR_38 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,char*,char) ;
 int FUNC_17 (int,char*,char) ;
 int FUNC_18 (TYPE_1__*,int ,int ) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void FUNC_24(void)
{
    PDIR_RECORD VAR_39, VAR_40;
    unsigned int VAR_41;
    unsigned int VAR_42;
    DWORD VAR_43;
    DWORD VAR_44;
    char *VAR_45;
    FILE *VAR_46;

    PBOOT_HEADER VAR_47;
    PBOOT_ENTRY VAR_48;

    char VAR_49[17];

    FUNC_7(VAR_49);


    FUNC_12(16 * VAR_9, 0);



    if (VAR_29)
    {
        FUNC_22("\1CD001\1");
        FUNC_15(0);
        FUNC_16(32, "", ' ');
        FUNC_16(32, VAR_38, ' ');

        FUNC_12(8, 0);
        FUNC_13(VAR_35);
        FUNC_12(32, 0);
        FUNC_14(1);
        FUNC_14(1);
        FUNC_14(2048);
        FUNC_13(VAR_32);
        FUNC_20(VAR_28);
        FUNC_20(0);
        FUNC_10(VAR_14);
        FUNC_10(0);
        FUNC_18(&VAR_33, VAR_4, VAR_5);

        FUNC_16(128, VAR_38, ' ');
        FUNC_16(128, VAR_8, ' ');
        FUNC_16(128, VAR_1, ' ');
        FUNC_16(128, VAR_0, ' ');

        FUNC_16(37, "", ' ');
        FUNC_16(37, "", ' ');
        FUNC_16(37, "", ' ');

        FUNC_22(VAR_49);
        FUNC_15(0);
        FUNC_22(VAR_49);
        FUNC_15(0);
        FUNC_22("0000000000000000");
        FUNC_15(0);
        FUNC_22("0000000000000000");
        FUNC_15(0);
        FUNC_15(1);
        FUNC_15(0);
        FUNC_2();
    }


    if (VAR_22)
    {
        FUNC_15(0);
        FUNC_22("CD001\1");
        FUNC_16(32, "EL TORITO SPECIFICATION", 0);
        FUNC_12(32, 0);
        FUNC_20(VAR_15);
        FUNC_2();
    }


    if (VAR_24)
    {
        FUNC_22("\2CD001\1");
        FUNC_15(0);
        FUNC_17(32, "", ' ');
        FUNC_17(32, VAR_38, ' ');

        FUNC_12(8, 0);
        FUNC_13(VAR_35);
        FUNC_22("%/E");
        FUNC_12(29, 0);
        FUNC_14(1);
        FUNC_14(1);
        FUNC_14(2048);
        FUNC_13(VAR_27);
        FUNC_20(VAR_26);
        FUNC_20(0);
        FUNC_10(VAR_25);
        FUNC_10(0);
        FUNC_18(&VAR_33, VAR_4, VAR_12);

        FUNC_17(128, VAR_38, ' ');
        FUNC_17(128, VAR_8, ' ');
        FUNC_17(128, VAR_1, ' ');
        FUNC_17(128, VAR_0, ' ');

        FUNC_17(37, "", ' ');
        FUNC_17(37, "", ' ');
        FUNC_17(37, "", ' ');

        FUNC_22(VAR_49);
        FUNC_15(0);
        FUNC_22(VAR_49);
        FUNC_15(0);
        FUNC_22("0000000000000000");
        FUNC_15(0);
        FUNC_22("0000000000000000");
        FUNC_15(0);
        FUNC_15(1);
        FUNC_15(0);
        FUNC_2();
    }


    if (VAR_29)
    {
        FUNC_22("\377CD001\1");
        FUNC_2();
    }




    if (VAR_22)
    {
        VAR_15 = VAR_20.sector;


        FUNC_15(VAR_17.header_id);
        FUNC_15(VAR_17.platform_id);
        FUNC_21(0);
        FUNC_16(24, VAR_7, 0);
        FUNC_21(0x62E);
        FUNC_21(0xAA55);


        FUNC_15(VAR_21.boot_id);
        FUNC_15(VAR_21.boot_emu_type);
        FUNC_21(VAR_21.load_segment);
        FUNC_15(0);
        FUNC_15(0);
        FUNC_21(VAR_21.sector_count);
        FUNC_20(VAR_21.load_rba);
        FUNC_12(20, 0);


        VAR_47 = VAR_16;
        while (VAR_47)
        {
            FUNC_15(VAR_47->header_id);
            FUNC_15(VAR_47->platform_id);
            FUNC_21(VAR_47->num_entries);
            FUNC_12(28, 0);


            VAR_48 = VAR_47->entry_list;
            while (VAR_48)
            {
                FUNC_15(VAR_48->boot_id);
                FUNC_15(VAR_48->boot_emu_type);
                FUNC_21(VAR_48->load_segment);
                FUNC_15(0);
                FUNC_15(0);
                FUNC_21(VAR_48->sector_count);
                FUNC_20(VAR_48->load_rba);
                FUNC_12(20, 0);

                VAR_48 = VAR_48->next_entry;
            }

            VAR_47 = VAR_47->next_header;
        }

        FUNC_2();
    }



    if (VAR_22)
    {
        VAR_21.load_rba = VAR_20.sector;

        VAR_46 = FUNC_3(VAR_21.bootimage, "rb");
        if (VAR_46 == ((void*)0))
            FUNC_0("Cannot open '%s'\n", VAR_21.bootimage);
        FUNC_4(VAR_46, 0, VAR_10);
        VAR_43 = FUNC_5(VAR_46);
        if (VAR_43 == 0 || (VAR_43 % 2048))
        {
            FUNC_1(VAR_46);
            FUNC_0("Invalid boot image size (%lu bytes)\n", VAR_43);
        }

        VAR_21.sector_count = (VAR_43 + 511) / 512;
        if (!FUNC_19(VAR_46, VAR_43))
        {
            FUNC_1(VAR_46);
            FUNC_0("Read error in file '%s'\n", VAR_21.bootimage);
        }
        FUNC_1(VAR_46);


        VAR_47 = VAR_16;
        while (VAR_47)
        {

            VAR_48 = VAR_47->entry_list;
            while (VAR_48)
            {
                VAR_48->load_rba = VAR_20.sector;

                VAR_46 = FUNC_3(VAR_48->bootimage, "rb");
                if (VAR_46 == ((void*)0))
                    FUNC_0("Cannot open '%s'\n", VAR_48->bootimage);
                FUNC_4(VAR_46, 0, VAR_10);
                VAR_43 = FUNC_5(VAR_46);
                if (VAR_43 == 0 || (VAR_43 % 2048))
                {
                    FUNC_1(VAR_46);
                    FUNC_0("Invalid boot image size (%lu bytes)\n", VAR_43);
                }

                VAR_48->sector_count = (VAR_43 + 511) / 512;
                if (!FUNC_19(VAR_46, VAR_43))
                {
                    FUNC_1(VAR_46);
                    FUNC_0("Read error in file '%s'\n", VAR_48->bootimage);
                }
                FUNC_1(VAR_46);

                VAR_48 = VAR_48->next_entry;
            }

            VAR_47 = VAR_47->next_header;
        }


    }




    VAR_28 = VAR_20.sector;
    FUNC_15(1);
    FUNC_15(0);
    FUNC_20(VAR_33.sector);
    FUNC_21(1);
    FUNC_15(0);
    FUNC_15(0);

    VAR_41 = 1;
    VAR_33.path_table_index = 1;
    for (VAR_39 = VAR_33.next_in_path_table; VAR_39 != ((void*)0); VAR_39 = VAR_39->next_in_path_table)
    {
        VAR_42 = FUNC_9(VAR_39->name_on_cd);
        FUNC_15((BYTE)VAR_42);
        FUNC_15(0);
        FUNC_20(VAR_39->sector);
        FUNC_21(VAR_39->parent->path_table_index);
        FUNC_22(VAR_39->name_on_cd);
        if (VAR_42 & 1)
            FUNC_15(0);
        VAR_39->path_table_index = ++VAR_41;
    }

    VAR_32 = (VAR_20.sector - VAR_28) *
                       VAR_9 + VAR_20.offset;
    FUNC_2();




    VAR_14 = VAR_20.sector;
    FUNC_15(1);
    FUNC_15(0);
    FUNC_10(VAR_33.sector);
    FUNC_11(1);
    FUNC_15(0);
    FUNC_15(0);

    for (VAR_39 = VAR_33.next_in_path_table; VAR_39 != ((void*)0); VAR_39 = VAR_39->next_in_path_table)
    {
        VAR_42 = FUNC_9(VAR_39->name_on_cd);
        FUNC_15((BYTE)VAR_42);
        FUNC_15(0);
        FUNC_10(VAR_39->sector);
        FUNC_11(VAR_39->parent->path_table_index);
        FUNC_22(VAR_39->name_on_cd);
        if (VAR_42 & 1)
            FUNC_15(0);
    }
    FUNC_2();

    if (VAR_24)
    {


        VAR_26 = VAR_20.sector;
        FUNC_15(1);
        FUNC_15(0);
        FUNC_20(VAR_33.joliet_sector);
        FUNC_21(1);
        FUNC_15(0);
        FUNC_15(0);

        for (VAR_39 = VAR_33.next_in_path_table; VAR_39 != ((void*)0); VAR_39 = VAR_39->next_in_path_table)
        {
            VAR_42 = FUNC_9(VAR_39->joliet_name) * 2;
            FUNC_15((BYTE)VAR_42);
            FUNC_15(0);
            FUNC_20(VAR_39->joliet_sector);
            FUNC_21(VAR_39->parent->path_table_index);
            FUNC_23(VAR_39->joliet_name);
        }

        VAR_27 = (VAR_20.sector - VAR_26) *
                                  VAR_9 + VAR_20.offset;
        FUNC_2();



        VAR_25 = VAR_20.sector;
        FUNC_15(1);
        FUNC_15(0);
        FUNC_10(VAR_33.joliet_sector);
        FUNC_11(1);
        FUNC_15(0);
        FUNC_15(0);

        for (VAR_39 = VAR_33.next_in_path_table; VAR_39 != ((void*)0); VAR_39 = VAR_39->next_in_path_table)
        {
            VAR_42 = FUNC_9(VAR_39->joliet_name) * 2;
            FUNC_15((BYTE)VAR_42);
            FUNC_15(0);
            FUNC_10(VAR_39->joliet_sector);
            FUNC_11(VAR_39->parent->path_table_index);
            FUNC_23(VAR_39->joliet_name);
        }
        FUNC_2();
    }
    for (VAR_39 = &VAR_33; VAR_39 != ((void*)0); VAR_39 = VAR_39->next_in_path_table)
    {

        VAR_39->sector = VAR_20.sector;
        FUNC_18(VAR_39, VAR_4, VAR_5);
        FUNC_18(VAR_39 == &VAR_33 ? VAR_39 : VAR_39->parent, VAR_3, VAR_5);
        for (VAR_40 = VAR_39->first_record; VAR_40 != ((void*)0); VAR_40 = VAR_40->next_in_directory)
        {
            FUNC_18(VAR_40,
                                   VAR_40->flags & VAR_2 ? VAR_11 : VAR_6,
                                   VAR_5);
        }
        FUNC_2();
        VAR_39->size = (VAR_20.sector - VAR_39->sector) * VAR_9;


        if (VAR_24)
        {
            VAR_39->joliet_sector = VAR_20.sector;
            FUNC_18(VAR_39, VAR_4, VAR_12);
            FUNC_18(VAR_39 == &VAR_33 ? VAR_39 : VAR_39->parent, VAR_3, VAR_12);
            for (VAR_40 = VAR_39->first_record; VAR_40 != ((void*)0); VAR_40 = VAR_40->next_in_directory)
            {
                FUNC_18(VAR_40,
                                       VAR_40->flags & VAR_2 ? VAR_11 : VAR_6,
                                       VAR_12);
            }
            FUNC_2();
            VAR_39->joliet_size = (VAR_20.sector - VAR_39->joliet_sector) * VAR_9;
            VAR_18 += VAR_39->joliet_size;
        }

        VAR_30++;
        VAR_18 += VAR_39->size;


        for (VAR_40 = VAR_39->first_record; VAR_40 != ((void*)0); VAR_40 = VAR_40->next_in_directory)
        {
            if ((VAR_40->flags & VAR_2) == 0)
            {
                VAR_40->sector = VAR_40->joliet_sector = VAR_20.sector;
                VAR_43 = VAR_40->size;
                if (VAR_20.file == ((void*)0))
                {
                    VAR_44 = (VAR_43 + VAR_9 - 1) / VAR_9;
                    VAR_20.sector += VAR_44;
                    VAR_31++;
                    VAR_19 += VAR_43;
                    VAR_36 +=
                    VAR_44 * VAR_9 - VAR_43;
                }
                else
                {
                    const char *VAR_50;
                    VAR_45 = VAR_23;
                    if (!VAR_40->orig_name)
                    {
                        FUNC_6(VAR_40);
                        *VAR_23 = 0;
                        VAR_50 = VAR_34;
                    }
                    else
                    {
                        VAR_50 = VAR_40->orig_name;
                    }
                    if (VAR_37 == VAR_13)
                        FUNC_8("Writing contents of %s\n", VAR_50);
                    VAR_46 = FUNC_3(VAR_50, "rb");
                    if (VAR_46 == ((void*)0))
                        FUNC_0("Cannot open '%s'\n", VAR_50);
                    if (!FUNC_19(VAR_46, VAR_43))
                    {
                        FUNC_1(VAR_46);
                        FUNC_0("Read error in file '%s'\n", VAR_50);
                    }
                    FUNC_1(VAR_46);
                    VAR_23 = VAR_45;
                    FUNC_2();
                }
            }
        }
    }



    VAR_35 = (DWORD)VAR_20.sector;
}
