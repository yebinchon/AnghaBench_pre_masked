
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_dirent {int version_madeby; int version_needed; scalar_t__ offset; scalar_t__ ext_attrib; scalar_t__ int_attrib; scalar_t__ disk_number; int * comment; int * extra_fields; int * filename; scalar_t__ uncomp_size; scalar_t__ comp_size; scalar_t__ crc; scalar_t__ last_mod; int comp_method; scalar_t__ bitflags; scalar_t__ cloned; scalar_t__ local_extra_fields_read; scalar_t__ changed; } ;


 int VAR_0 ;

void
FUNC_0(struct zip_dirent *VAR_1)
{
    VAR_1->changed = 0;
    VAR_1->local_extra_fields_read = 0;
    VAR_1->cloned = 0;

    VAR_1->version_madeby = 20;
    VAR_1->version_needed = 20;
    VAR_1->bitflags = 0;
    VAR_1->comp_method = VAR_0;
    VAR_1->last_mod = 0;
    VAR_1->crc = 0;
    VAR_1->comp_size = 0;
    VAR_1->uncomp_size = 0;
    VAR_1->filename = ((void*)0);
    VAR_1->extra_fields = ((void*)0);
    VAR_1->comment = ((void*)0);
    VAR_1->disk_number = 0;
    VAR_1->int_attrib = 0;
    VAR_1->ext_attrib = 0;
    VAR_1->offset = 0;
}
