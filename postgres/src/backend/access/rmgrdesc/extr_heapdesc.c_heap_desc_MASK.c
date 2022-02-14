
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int new_xmax; int new_offnum; int old_infobits_set; int flags; int old_xmax; int old_offnum; } ;
typedef TYPE_1__ xl_heap_update ;
struct TYPE_9__ {int flags; int nrelids; int* relids; } ;
typedef TYPE_2__ xl_heap_truncate ;
struct TYPE_10__ {int infobits_set; int flags; int locking_xid; int offnum; } ;
typedef TYPE_3__ xl_heap_lock ;
struct TYPE_11__ {int flags; int offnum; } ;
typedef TYPE_4__ xl_heap_insert ;
struct TYPE_12__ {int offnum; } ;
typedef TYPE_5__ xl_heap_inplace ;
struct TYPE_13__ {int infobits_set; int flags; int offnum; } ;
typedef TYPE_6__ xl_heap_delete ;
struct TYPE_14__ {int offnum; } ;
typedef TYPE_7__ xl_heap_confirm ;
typedef int uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(StringInfo VAR_12, XLogReaderState *VAR_13)
{
 char *VAR_14 = FUNC_0(VAR_13);
 uint8 VAR_15 = FUNC_1(VAR_13) & ~VAR_11;

 VAR_15 &= VAR_8;
 if (VAR_15 == VAR_6)
 {
  xl_heap_insert *VAR_16 = (xl_heap_insert *) VAR_14;

  FUNC_2(VAR_12, "off %u flags 0x%02X", VAR_16->offnum,
       VAR_16->flags);
 }
 else if (VAR_15 == VAR_3)
 {
  xl_heap_delete *VAR_17 = (xl_heap_delete *) VAR_14;

  FUNC_2(VAR_12, "off %u flags 0x%02X ",
       VAR_17->offnum,
       VAR_17->flags);
  FUNC_4(VAR_12, VAR_17->infobits_set);
 }
 else if (VAR_15 == VAR_10)
 {
  xl_heap_update *VAR_18 = (xl_heap_update *) VAR_14;

  FUNC_2(VAR_12, "off %u xmax %u flags 0x%02X ",
       VAR_18->old_offnum,
       VAR_18->old_xmax,
       VAR_18->flags);
  FUNC_4(VAR_12, VAR_18->old_infobits_set);
  FUNC_2(VAR_12, "; new off %u xmax %u",
       VAR_18->new_offnum,
       VAR_18->new_xmax);
 }
 else if (VAR_15 == VAR_4)
 {
  xl_heap_update *VAR_19 = (xl_heap_update *) VAR_14;

  FUNC_2(VAR_12, "off %u xmax %u flags 0x%02X ",
       VAR_19->old_offnum,
       VAR_19->old_xmax,
       VAR_19->flags);
  FUNC_4(VAR_12, VAR_19->old_infobits_set);
  FUNC_2(VAR_12, "; new off %u xmax %u",
       VAR_19->new_offnum,
       VAR_19->new_xmax);
 }
 else if (VAR_15 == VAR_9)
 {
  xl_heap_truncate *VAR_20 = (xl_heap_truncate *) VAR_14;
  int VAR_21;

  if (VAR_20->flags & VAR_0)
   FUNC_3(VAR_12, "cascade ");
  if (VAR_20->flags & VAR_1)
   FUNC_3(VAR_12, "restart_seqs ");
  FUNC_2(VAR_12, "nrelids %u relids", VAR_20->nrelids);
  for (VAR_21 = 0; VAR_21 < VAR_20->nrelids; VAR_21++)
   FUNC_2(VAR_12, " %u", VAR_20->relids[VAR_21]);
 }
 else if (VAR_15 == VAR_2)
 {
  xl_heap_confirm *VAR_22 = (xl_heap_confirm *) VAR_14;

  FUNC_2(VAR_12, "off %u", VAR_22->offnum);
 }
 else if (VAR_15 == VAR_7)
 {
  xl_heap_lock *VAR_23 = (xl_heap_lock *) VAR_14;

  FUNC_2(VAR_12, "off %u: xid %u: flags 0x%02X ",
       VAR_23->offnum, VAR_23->locking_xid, VAR_23->flags);
  FUNC_4(VAR_12, VAR_23->infobits_set);
 }
 else if (VAR_15 == VAR_5)
 {
  xl_heap_inplace *VAR_24 = (xl_heap_inplace *) VAR_14;

  FUNC_2(VAR_12, "off %u", VAR_24->offnum);
 }
}
