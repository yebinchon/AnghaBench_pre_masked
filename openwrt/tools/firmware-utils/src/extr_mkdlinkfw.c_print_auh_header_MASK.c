
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auh_header {char* rom_id; int derange; int image_checksum; int space1; int space2; int space3; int lpvs; int mbz; int time_stamp; int erase_start; int erase_length; int data_offset; int data_length; int space4; int space5; int space6; int space7; int header_id; int header_version; int space8; int section_id; int image_info_type; int image_info_offset; int family_member; int header_checksum; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

void FUNC_1(struct auh_header *VAR_0)
{
 FUNC_0("\trom_id: %s\n"
        "\tderange: 0x%04X\n"
        "\timage_checksum: 0x%04X\n"
        "\tspace1: 0x%08X\n"
        "\tspace2: 0x%08X\n"
        "\tspace3: 0x%04X\n"
        "\tlpvs: 0x%02X\n"
        "\tmbz: 0x%02X\n"
        "\ttime_stamp: 0x%08X\n"
        "\terase_start: 0x%08X\n"
        "\terase_length: 0x%08X\n"
        "\tdata_offset: 0x%08X\n"
        "\tdata_length: 0x%08X\n"
        "\tspace4: 0x%08X\n"
        "\tspace5: 0x%08X\n"
        "\tspace6: 0x%08X\n"
        "\tspace7: 0x%08X\n"
        "\theader_id: 0x%04X\n"
        "\theader_version: 0x%02X\n"
        "\tspace8: 0x%04X\n"
        "\tsection_id: 0x%02X\n"
        "\timage_info_type: 0x%02X\n"
        "\timage_info_offset 0x%08X\n"
        "\tfamily_member: 0x%04X\n"
        "\theader_checksum: 0x%04X\n",
        VAR_0->rom_id,
        VAR_0->derange,
        VAR_0->image_checksum,
        VAR_0->space1,
        VAR_0->space2,
        VAR_0->space3,
        VAR_0->lpvs,
        VAR_0->mbz,
        VAR_0->time_stamp,
        VAR_0->erase_start,
        VAR_0->erase_length,
        VAR_0->data_offset,
        VAR_0->data_length,
        VAR_0->space4,
        VAR_0->space5,
        VAR_0->space6,
        VAR_0->space7,
        VAR_0->header_id,
        VAR_0->header_version,
        VAR_0->space8,
        VAR_0->section_id,
        VAR_0->image_info_type,
        VAR_0->image_info_offset,
        VAR_0->family_member, VAR_0->header_checksum);
}
