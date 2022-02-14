
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_8__ {scalar_t__ xl_tot_len; } ;
typedef TYPE_1__ XLogRecord ;
struct TYPE_9__ {scalar_t__ record_origin; scalar_t__ main_data_len; scalar_t__ max_block_id; int ReadRecPtr; scalar_t__ main_data_bufsz; char* errormsg_buf; void* main_data; TYPE_3__* blocks; TYPE_1__* decoded_record; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_10__ {int in_use; int apply_image; int has_image; int has_data; scalar_t__ data_len; scalar_t__ bimg_len; scalar_t__ hole_offset; scalar_t__ bimg_info; scalar_t__ hole_length; scalar_t__ rnode; scalar_t__ blkno; char* bkp_image; scalar_t__ data_bufsz; void* data; scalar_t__ flags; scalar_t__ forknum; } ;
typedef int RepOriginId ;
typedef scalar_t__ RelFileNode ;
typedef TYPE_3__ DecodedBkpBlock ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ VAR_8 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (void*,char*,scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_2__*,char*,scalar_t__,scalar_t__,...) ;

bool
FUNC_9(XLogReaderState *VAR_14, XLogRecord *VAR_15, char **VAR_16)
{
 char *VAR_17;
 uint32 VAR_18;
 uint32 VAR_19;
 RelFileNode *VAR_20 = ((void*)0);
 uint8 VAR_21;

 FUNC_4(VAR_14);

 VAR_14->decoded_record = VAR_15;
 VAR_14->record_origin = VAR_8;

 VAR_17 = (char *) VAR_15;
 VAR_17 += VAR_9;
 VAR_18 = VAR_15->xl_tot_len - VAR_9;


 VAR_19 = 0;
 while (VAR_18 > VAR_19)
 {
  do { if (VAR_18 < sizeof(uint8)) goto shortdata_err; FUNC_5(&VAR_21, VAR_17, sizeof(uint8)); VAR_17 += sizeof(uint8); VAR_18 -= sizeof(uint8); } while(0);

  if (VAR_21 == VAR_11)
  {

   uint8 VAR_22;

   do { if (VAR_18 < sizeof(uint8)) goto shortdata_err; FUNC_5(&VAR_22, VAR_17, sizeof(uint8)); VAR_17 += sizeof(uint8); VAR_18 -= sizeof(uint8); } while(0);

   VAR_14->main_data_len = VAR_22;
   VAR_19 += VAR_22;
   break;

  }
  else if (VAR_21 == VAR_10)
  {

   uint32 VAR_23;

   do { if (VAR_18 < sizeof(uint32)) goto shortdata_err; FUNC_5(&VAR_23, VAR_17, sizeof(uint32)); VAR_17 += sizeof(uint32); VAR_18 -= sizeof(uint32); } while(0);
   VAR_14->main_data_len = VAR_23;
   VAR_19 += VAR_23;
   break;

  }
  else if (VAR_21 == VAR_12)
  {
   do { if (VAR_18 < sizeof(RepOriginId)) goto shortdata_err; FUNC_5(&VAR_14->record_origin, VAR_17, sizeof(RepOriginId)); VAR_17 += sizeof(RepOriginId); VAR_18 -= sizeof(RepOriginId); } while(0);
  }
  else if (VAR_21 <= VAR_13)
  {

   DecodedBkpBlock *VAR_24;
   uint8 VAR_25;

   if (VAR_21 <= VAR_14->max_block_id)
   {
    FUNC_8(VAR_14,
           "out-of-order block_id %u at %X/%X",
           VAR_21,
           (uint32) (VAR_14->ReadRecPtr >> 32),
           (uint32) VAR_14->ReadRecPtr);
    goto err;
   }
   VAR_14->max_block_id = VAR_21;

   VAR_24 = &VAR_14->blocks[VAR_21];
   VAR_24->in_use = 1;
   VAR_24->apply_image = 0;

   do { if (VAR_18 < sizeof(uint8)) goto shortdata_err; FUNC_5(&VAR_25, VAR_17, sizeof(uint8)); VAR_17 += sizeof(uint8); VAR_18 -= sizeof(uint8); } while(0);
   VAR_24->forknum = VAR_25 & VAR_0;
   VAR_24->flags = VAR_25;
   VAR_24->has_image = ((VAR_25 & VAR_2) != 0);
   VAR_24->has_data = ((VAR_25 & VAR_1) != 0);

   do { if (VAR_18 < sizeof(uint16)) goto shortdata_err; FUNC_5(&VAR_24->data_len, VAR_17, sizeof(uint16)); VAR_17 += sizeof(uint16); VAR_18 -= sizeof(uint16); } while(0);

   if (VAR_24->has_data && VAR_24->data_len == 0)
   {
    FUNC_8(VAR_14,
           "BKPBLOCK_HAS_DATA set, but no data included at %X/%X",
           (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
    goto err;
   }
   if (!VAR_24->has_data && VAR_24->data_len != 0)
   {
    FUNC_8(VAR_14,
           "BKPBLOCK_HAS_DATA not set, but data length is %u at %X/%X",
           (unsigned int) VAR_24->data_len,
           (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
    goto err;
   }
   VAR_19 += VAR_24->data_len;

   if (VAR_24->has_image)
   {
    do { if (VAR_18 < sizeof(uint16)) goto shortdata_err; FUNC_5(&VAR_24->bimg_len, VAR_17, sizeof(uint16)); VAR_17 += sizeof(uint16); VAR_18 -= sizeof(uint16); } while(0);
    do { if (VAR_18 < sizeof(uint16)) goto shortdata_err; FUNC_5(&VAR_24->hole_offset, VAR_17, sizeof(uint16)); VAR_17 += sizeof(uint16); VAR_18 -= sizeof(uint16); } while(0);
    do { if (VAR_18 < sizeof(uint8)) goto shortdata_err; FUNC_5(&VAR_24->bimg_info, VAR_17, sizeof(uint8)); VAR_17 += sizeof(uint8); VAR_18 -= sizeof(uint8); } while(0);

    VAR_24->apply_image = ((VAR_24->bimg_info & VAR_4) != 0);

    if (VAR_24->bimg_info & VAR_6)
    {
     if (VAR_24->bimg_info & VAR_5)
      do { if (VAR_18 < sizeof(uint16)) goto shortdata_err; FUNC_5(&VAR_24->hole_length, VAR_17, sizeof(uint16)); VAR_17 += sizeof(uint16); VAR_18 -= sizeof(uint16); } while(0);
     else
      VAR_24->hole_length = 0;
    }
    else
     VAR_24->hole_length = VAR_7 - VAR_24->bimg_len;
    VAR_19 += VAR_24->bimg_len;





    if ((VAR_24->bimg_info & VAR_5) &&
     (VAR_24->hole_offset == 0 ||
      VAR_24->hole_length == 0 ||
      VAR_24->bimg_len == VAR_7))
    {
     FUNC_8(VAR_14,
            "BKPIMAGE_HAS_HOLE set, but hole offset %u length %u block image length %u at %X/%X",
            (unsigned int) VAR_24->hole_offset,
            (unsigned int) VAR_24->hole_length,
            (unsigned int) VAR_24->bimg_len,
            (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
     goto err;
    }





    if (!(VAR_24->bimg_info & VAR_5) &&
     (VAR_24->hole_offset != 0 || VAR_24->hole_length != 0))
    {
     FUNC_8(VAR_14,
            "BKPIMAGE_HAS_HOLE not set, but hole offset %u length %u at %X/%X",
            (unsigned int) VAR_24->hole_offset,
            (unsigned int) VAR_24->hole_length,
            (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
     goto err;
    }





    if ((VAR_24->bimg_info & VAR_6) &&
     VAR_24->bimg_len == VAR_7)
    {
     FUNC_8(VAR_14,
            "BKPIMAGE_IS_COMPRESSED set, but block image length %u at %X/%X",
            (unsigned int) VAR_24->bimg_len,
            (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
     goto err;
    }





    if (!(VAR_24->bimg_info & VAR_5) &&
     !(VAR_24->bimg_info & VAR_6) &&
     VAR_24->bimg_len != VAR_7)
    {
     FUNC_8(VAR_14,
            "neither BKPIMAGE_HAS_HOLE nor BKPIMAGE_IS_COMPRESSED set, but block image length is %u at %X/%X",
            (unsigned int) VAR_24->data_len,
            (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
     goto err;
    }
   }
   if (!(VAR_25 & VAR_3))
   {
    do { if (VAR_18 < sizeof(RelFileNode)) goto shortdata_err; FUNC_5(&VAR_24->rnode, VAR_17, sizeof(RelFileNode)); VAR_17 += sizeof(RelFileNode); VAR_18 -= sizeof(RelFileNode); } while(0);
    VAR_20 = &VAR_24->rnode;
   }
   else
   {
    if (VAR_20 == ((void*)0))
    {
     FUNC_8(VAR_14,
            "BKPBLOCK_SAME_REL set but no previous rel at %X/%X",
            (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
     goto err;
    }

    VAR_24->rnode = *VAR_20;
   }
   do { if (VAR_18 < sizeof(BlockNumber)) goto shortdata_err; FUNC_5(&VAR_24->blkno, VAR_17, sizeof(BlockNumber)); VAR_17 += sizeof(BlockNumber); VAR_18 -= sizeof(BlockNumber); } while(0);
  }
  else
  {
   FUNC_8(VAR_14,
          "invalid block_id %u at %X/%X",
          VAR_21,
          (uint32) (VAR_14->ReadRecPtr >> 32),
          (uint32) VAR_14->ReadRecPtr);
   goto err;
  }
 }

 if (VAR_18 != VAR_19)
  goto shortdata_err;
 for (VAR_21 = 0; VAR_21 <= VAR_14->max_block_id; VAR_21++)
 {
  DecodedBkpBlock *VAR_26 = &VAR_14->blocks[VAR_21];

  if (!VAR_26->in_use)
   continue;

  FUNC_0(VAR_26->has_image || !VAR_26->apply_image);

  if (VAR_26->has_image)
  {
   VAR_26->bkp_image = VAR_17;
   VAR_17 += VAR_26->bimg_len;
  }
  if (VAR_26->has_data)
  {
   if (!VAR_26->data || VAR_26->data_len > VAR_26->data_bufsz)
   {
    if (VAR_26->data)
     FUNC_7(VAR_26->data);






    VAR_26->data_bufsz = FUNC_2(FUNC_3(VAR_26->data_len, VAR_7));
    VAR_26->data = FUNC_6(VAR_26->data_bufsz);
   }
   FUNC_5(VAR_26->data, VAR_17, VAR_26->data_len);
   VAR_17 += VAR_26->data_len;
  }
 }


 if (VAR_14->main_data_len > 0)
 {
  if (!VAR_14->main_data || VAR_14->main_data_len > VAR_14->main_data_bufsz)
  {
   if (VAR_14->main_data)
    FUNC_7(VAR_14->main_data);
   VAR_14->main_data_bufsz = FUNC_2(FUNC_3(VAR_14->main_data_len,
              VAR_7 / 2));
   VAR_14->main_data = FUNC_6(VAR_14->main_data_bufsz);
  }
  FUNC_5(VAR_14->main_data, VAR_17, VAR_14->main_data_len);
  VAR_17 += VAR_14->main_data_len;
 }

 return 1;

shortdata_err:
 FUNC_8(VAR_14,
        "record with invalid length at %X/%X",
        (uint32) (VAR_14->ReadRecPtr >> 32), (uint32) VAR_14->ReadRecPtr);
err:
 *VAR_16 = VAR_14->errormsg_buf;

 return 0;
}
