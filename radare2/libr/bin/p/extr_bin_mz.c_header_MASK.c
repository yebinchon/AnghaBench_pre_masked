
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r_bin_mz_obj_t {TYPE_2__* dos_header; } ;
struct TYPE_7__ {TYPE_1__* o; } ;
struct TYPE_6__ {int signature; int overlay_number; int reloc_table_offset; int cs; int ip; int checksum; int sp; int ss; int max_extra_paragraphs; int min_extra_paragraphs; int header_paragraphs; int num_relocs; int blocks_in_file; int bytes_in_last_block; } ;
struct TYPE_5__ {scalar_t__ bin_obj; } ;
typedef TYPE_3__ RBinFile ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(RBinFile *VAR_0) {
 const struct r_bin_mz_obj_t *VAR_1 = (struct r_bin_mz_obj_t *)VAR_0->o->bin_obj;
 FUNC_0 ("[0000:0000]  Signature           %c%c\n",
  VAR_1->dos_header->signature & 0xFF,
  VAR_1->dos_header->signature >> 8);
 FUNC_0 ("[0000:0002]  BytesInLastBlock    0x%04x\n",
  VAR_1->dos_header->bytes_in_last_block);
 FUNC_0 ("[0000:0004]  BlocksInFile        0x%04x\n",
  VAR_1->dos_header->blocks_in_file);
 FUNC_0 ("[0000:0006]  NumRelocs           0x%04x\n",
  VAR_1->dos_header->num_relocs);
 FUNC_0 ("[0000:0008]  HeaderParagraphs    0x%04x\n",
  VAR_1->dos_header->header_paragraphs);
 FUNC_0 ("[0000:000a]  MinExtraParagraphs  0x%04x\n",
  VAR_1->dos_header->min_extra_paragraphs);
 FUNC_0 ("[0000:000c]  MaxExtraParagraphs  0x%04x\n",
  VAR_1->dos_header->max_extra_paragraphs);
 FUNC_0 ("[0000:000e]  InitialSs           0x%04x\n",
  VAR_1->dos_header->ss);
 FUNC_0 ("[0000:0010]  InitialSp           0x%04x\n",
  VAR_1->dos_header->sp);
 FUNC_0 ("[0000:0012]  Checksum            0x%04x\n",
  VAR_1->dos_header->checksum);
 FUNC_0 ("[0000:0014]  InitialIp           0x%04x\n",
  VAR_1->dos_header->ip);
 FUNC_0 ("[0000:0016]  InitialCs           0x%04x\n",
  VAR_1->dos_header->cs);
 FUNC_0 ("[0000:0018]  RelocTableOffset    0x%04x\n",
  VAR_1->dos_header->reloc_table_offset);
 FUNC_0 ("[0000:001a]  OverlayNumber       0x%04x\n",
  VAR_1->dos_header->overlay_number);
}
