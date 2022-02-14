
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ align; scalar_t__ blocksz; scalar_t__ largesz; scalar_t__ walsz; scalar_t__ walseg; scalar_t__ ident; scalar_t__ index; scalar_t__ toast; scalar_t__ large_object; scalar_t__ date_is_int; scalar_t__ data_checksum_version; } ;
typedef TYPE_1__ ControlData ;


 int FUNC_0 (char*) ;

void
FUNC_1(ControlData *VAR_0,
       ControlData *VAR_1)
{
 if (VAR_0->align == 0 || VAR_0->align != VAR_1->align)
  FUNC_0("old and new pg_controldata alignments are invalid or do not match\n"
     "Likely one cluster is a 32-bit install, the other 64-bit\n");

 if (VAR_0->blocksz == 0 || VAR_0->blocksz != VAR_1->blocksz)
  FUNC_0("old and new pg_controldata block sizes are invalid or do not match\n");

 if (VAR_0->largesz == 0 || VAR_0->largesz != VAR_1->largesz)
  FUNC_0("old and new pg_controldata maximum relation segment sizes are invalid or do not match\n");

 if (VAR_0->walsz == 0 || VAR_0->walsz != VAR_1->walsz)
  FUNC_0("old and new pg_controldata WAL block sizes are invalid or do not match\n");

 if (VAR_0->walseg == 0 || VAR_0->walseg != VAR_1->walseg)
  FUNC_0("old and new pg_controldata WAL segment sizes are invalid or do not match\n");

 if (VAR_0->ident == 0 || VAR_0->ident != VAR_1->ident)
  FUNC_0("old and new pg_controldata maximum identifier lengths are invalid or do not match\n");

 if (VAR_0->index == 0 || VAR_0->index != VAR_1->index)
  FUNC_0("old and new pg_controldata maximum indexed columns are invalid or do not match\n");

 if (VAR_0->toast == 0 || VAR_0->toast != VAR_1->toast)
  FUNC_0("old and new pg_controldata maximum TOAST chunk sizes are invalid or do not match\n");


 if (VAR_0->large_object != 0 &&
  VAR_0->large_object != VAR_1->large_object)
  FUNC_0("old and new pg_controldata large-object chunk sizes are invalid or do not match\n");

 if (VAR_0->date_is_int != VAR_1->date_is_int)
  FUNC_0("old and new pg_controldata date/time storage types do not match\n");
 if (VAR_0->data_checksum_version == 0 &&
  VAR_1->data_checksum_version != 0)
  FUNC_0("old cluster does not use data checksums but the new one does\n");
 else if (VAR_0->data_checksum_version != 0 &&
    VAR_1->data_checksum_version == 0)
  FUNC_0("old cluster uses data checksums but the new one does not\n");
 else if (VAR_0->data_checksum_version != VAR_1->data_checksum_version)
  FUNC_0("old and new cluster pg_controldata checksum versions do not match\n");
}
