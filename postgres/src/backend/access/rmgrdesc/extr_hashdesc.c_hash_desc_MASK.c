
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {char ntuples; char latestRemovedXid; } ;
typedef TYPE_1__ xl_hash_vacuum_one_page ;
struct TYPE_15__ {int ntuples; } ;
typedef TYPE_2__ xl_hash_update_meta_page ;
struct TYPE_16__ {int is_prim_bucket_same_wrt; int ntups; int nextblkno; int prevblkno; } ;
typedef TYPE_3__ xl_hash_squeeze_page ;
struct TYPE_17__ {char old_bucket_flag; char new_bucket_flag; } ;
typedef TYPE_4__ xl_hash_split_complete ;
struct TYPE_18__ {int flags; int new_bucket; } ;
typedef TYPE_5__ xl_hash_split_allocate_page ;
struct TYPE_19__ {char ntups; int is_prim_bucket_same_wrt; } ;
typedef TYPE_6__ xl_hash_move_page_contents ;
struct TYPE_20__ {int offnum; } ;
typedef TYPE_7__ xl_hash_insert ;
struct TYPE_21__ {char num_tuples; char ffactor; } ;
typedef TYPE_8__ xl_hash_init_meta_page ;
struct TYPE_22__ {int bmsize; } ;
typedef TYPE_9__ xl_hash_init_bitmap_page ;
struct TYPE_12__ {int is_primary_bucket_page; int clear_dead_marking; } ;
typedef TYPE_10__ xl_hash_delete ;
struct TYPE_13__ {char bmsize; int bmpage_found; } ;
typedef TYPE_11__ xl_hash_add_ovfl_page ;
typedef int uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char,...) ;

void
FUNC_3(StringInfo VAR_3, XLogReaderState *VAR_4)
{
 char *VAR_5 = FUNC_0(VAR_4);
 uint8 VAR_6 = FUNC_1(VAR_4) & ~VAR_2;

 switch (VAR_6)
 {
  case 135:
   {
    xl_hash_init_meta_page *VAR_7 = (xl_hash_init_meta_page *) VAR_5;

    FUNC_2(VAR_3, "num_tuples %g, fillfactor %d",
         VAR_7->num_tuples, VAR_7->ffactor);
    break;
   }
  case 136:
   {
    xl_hash_init_bitmap_page *VAR_8 = (xl_hash_init_bitmap_page *) VAR_5;

    FUNC_2(VAR_3, "bmsize %d", VAR_8->bmsize);
    break;
   }
  case 134:
   {
    xl_hash_insert *VAR_9 = (xl_hash_insert *) VAR_5;

    FUNC_2(VAR_3, "off %u", VAR_9->offnum);
    break;
   }
  case 138:
   {
    xl_hash_add_ovfl_page *VAR_10 = (xl_hash_add_ovfl_page *) VAR_5;

    FUNC_2(VAR_3, "bmsize %d, bmpage_found %c",
         VAR_10->bmsize, (VAR_10->bmpage_found) ? 'T' : 'F');
    break;
   }
  case 132:
   {
    xl_hash_split_allocate_page *VAR_11 = (xl_hash_split_allocate_page *) VAR_5;

    FUNC_2(VAR_3, "new_bucket %u, meta_page_masks_updated %c, issplitpoint_changed %c",
         VAR_11->new_bucket,
         (VAR_11->flags & VAR_0) ? 'T' : 'F',
         (VAR_11->flags & VAR_1) ? 'T' : 'F');
    break;
   }
  case 131:
   {
    xl_hash_split_complete *VAR_12 = (xl_hash_split_complete *) VAR_5;

    FUNC_2(VAR_3, "old_bucket_flag %u, new_bucket_flag %u",
         VAR_12->old_bucket_flag, VAR_12->new_bucket_flag);
    break;
   }
  case 133:
   {
    xl_hash_move_page_contents *VAR_13 = (xl_hash_move_page_contents *) VAR_5;

    FUNC_2(VAR_3, "ntups %d, is_primary %c",
         VAR_13->ntups,
         VAR_13->is_prim_bucket_same_wrt ? 'T' : 'F');
    break;
   }
  case 130:
   {
    xl_hash_squeeze_page *VAR_14 = (xl_hash_squeeze_page *) VAR_5;

    FUNC_2(VAR_3, "prevblkno %u, nextblkno %u, ntups %d, is_primary %c",
         VAR_14->prevblkno,
         VAR_14->nextblkno,
         VAR_14->ntups,
         VAR_14->is_prim_bucket_same_wrt ? 'T' : 'F');
    break;
   }
  case 137:
   {
    xl_hash_delete *VAR_15 = (xl_hash_delete *) VAR_5;

    FUNC_2(VAR_3, "clear_dead_marking %c, is_primary %c",
         VAR_15->clear_dead_marking ? 'T' : 'F',
         VAR_15->is_primary_bucket_page ? 'T' : 'F');
    break;
   }
  case 129:
   {
    xl_hash_update_meta_page *VAR_16 = (xl_hash_update_meta_page *) VAR_5;

    FUNC_2(VAR_3, "ntuples %g",
         VAR_16->ntuples);
    break;
   }
  case 128:
   {
    xl_hash_vacuum_one_page *VAR_17 = (xl_hash_vacuum_one_page *) VAR_5;

    FUNC_2(VAR_3, "ntuples %d, latest removed xid %u",
         VAR_17->ntuples,
         VAR_17->latestRemovedXid);
    break;
   }
 }
}
