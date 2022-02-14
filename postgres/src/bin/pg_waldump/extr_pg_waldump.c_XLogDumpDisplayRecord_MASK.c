
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_25__ {int ReadRecPtr; int max_block_id; TYPE_1__* blocks; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_26__ {int bkp_details; } ;
typedef TYPE_3__ XLogDumpConfig ;
struct TYPE_29__ {int spcNode; int dbNode; int relNode; } ;
struct TYPE_28__ {char* rm_name; char* (* rm_identify ) (int) ;int (* rm_desc ) (TYPE_4__*,TYPE_2__*) ;} ;
struct TYPE_27__ {char* data; } ;
struct TYPE_24__ {int bimg_info; int hole_offset; int hole_length; int bimg_len; } ;
typedef TYPE_4__ StringInfoData ;
typedef TYPE_5__ RmgrDescData ;
typedef TYPE_6__ RelFileNode ;
typedef size_t ForkNumber ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int*,int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_6__*,size_t*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 size_t FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 char** VAR_5 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char) ;
 char* FUNC_14 (int) ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_16(XLogDumpConfig *VAR_6, XLogReaderState *VAR_7)
{
 const char *VAR_8;
 const RmgrDescData *VAR_9 = &VAR_3[FUNC_5(VAR_7)];
 uint32 VAR_10;
 uint32 VAR_11;
 RelFileNode VAR_12;
 ForkNumber VAR_13;
 BlockNumber VAR_14;
 int VAR_15;
 uint8 VAR_16 = FUNC_3(VAR_7);
 XLogRecPtr VAR_17 = FUNC_4(VAR_7);
 StringInfoData VAR_18;

 FUNC_0(VAR_7, &VAR_10, &VAR_11);

 FUNC_12("rmgr: %-11s len (rec/tot): %6u/%6u, tx: %10u, lsn: %X/%08X, prev %X/%08X, ",
     VAR_9->rm_name,
     VAR_10, FUNC_6(VAR_7),
     FUNC_7(VAR_7),
     (uint32) (VAR_7->ReadRecPtr >> 32), (uint32) VAR_7->ReadRecPtr,
     (uint32) (VAR_17 >> 32), (uint32) VAR_17);

 VAR_8 = VAR_9->rm_identify(VAR_16);
 if (VAR_8 == ((void*)0))
  FUNC_12("desc: UNKNOWN (%x) ", VAR_16 & ~VAR_4);
 else
  FUNC_12("desc: %s ", VAR_8);

 FUNC_10(&VAR_18);
 VAR_9->rm_desc(&VAR_18, VAR_7);
 FUNC_12("%s", VAR_18.data);
 FUNC_11(VAR_18.data);

 if (!VAR_6->bkp_details)
 {

  for (VAR_15 = 0; VAR_15 <= VAR_7->max_block_id; VAR_15++)
  {
   if (!FUNC_9(VAR_7, VAR_15))
    continue;

   FUNC_2(VAR_7, VAR_15, &VAR_12, &VAR_13, &VAR_14);
   if (VAR_13 != VAR_2)
    FUNC_12(", blkref #%u: rel %u/%u/%u fork %s blk %u",
        VAR_15,
        VAR_12.spcNode, VAR_12.dbNode, VAR_12.relNode,
        VAR_5[VAR_13],
        VAR_14);
   else
    FUNC_12(", blkref #%u: rel %u/%u/%u blk %u",
        VAR_15,
        VAR_12.spcNode, VAR_12.dbNode, VAR_12.relNode,
        VAR_14);
   if (FUNC_8(VAR_7, VAR_15))
   {
    if (FUNC_1(VAR_7, VAR_15))
     FUNC_12(" FPW");
    else
     FUNC_12(" FPW for WAL verification");
   }
  }
  FUNC_13('\n');
 }
 else
 {

  FUNC_13('\n');
  for (VAR_15 = 0; VAR_15 <= VAR_7->max_block_id; VAR_15++)
  {
   if (!FUNC_9(VAR_7, VAR_15))
    continue;

   FUNC_2(VAR_7, VAR_15, &VAR_12, &VAR_13, &VAR_14);
   FUNC_12("\tblkref #%u: rel %u/%u/%u fork %s blk %u",
       VAR_15,
       VAR_12.spcNode, VAR_12.dbNode, VAR_12.relNode,
       VAR_5[VAR_13],
       VAR_14);
   if (FUNC_8(VAR_7, VAR_15))
   {
    if (VAR_7->blocks[VAR_15].bimg_info &
     VAR_0)
    {
     FUNC_12(" (FPW%s); hole: offset: %u, length: %u, "
         "compression saved: %u",
         FUNC_1(VAR_7, VAR_15) ?
         "" : " for WAL verification",
         VAR_7->blocks[VAR_15].hole_offset,
         VAR_7->blocks[VAR_15].hole_length,
         VAR_1 -
         VAR_7->blocks[VAR_15].hole_length -
         VAR_7->blocks[VAR_15].bimg_len);
    }
    else
    {
     FUNC_12(" (FPW%s); hole: offset: %u, length: %u",
         FUNC_1(VAR_7, VAR_15) ?
         "" : " for WAL verification",
         VAR_7->blocks[VAR_15].hole_offset,
         VAR_7->blocks[VAR_15].hole_length);
    }
   }
   FUNC_13('\n');
  }
 }
}
