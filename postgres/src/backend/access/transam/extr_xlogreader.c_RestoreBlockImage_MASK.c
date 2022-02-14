
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int uint32 ;
struct TYPE_6__ {int ReadRecPtr; TYPE_3__* blocks; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_8__ {char* bkp_image; int bimg_info; scalar_t__ hole_length; scalar_t__ hole_offset; int bimg_len; int has_image; int in_use; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_2__ PGAlignedBlock ;
typedef TYPE_3__ DecodedBkpBlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,char*,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,size_t) ;

bool
FUNC_4(XLogReaderState *VAR_2, uint8 VAR_3, char *VAR_4)
{
 DecodedBkpBlock *VAR_5;
 char *VAR_6;
 PGAlignedBlock VAR_7;

 if (!VAR_2->blocks[VAR_3].in_use)
  return 0;
 if (!VAR_2->blocks[VAR_3].has_image)
  return 0;

 VAR_5 = &VAR_2->blocks[VAR_3];
 VAR_6 = VAR_5->bkp_image;

 if (VAR_5->bimg_info & VAR_0)
 {

  if (FUNC_2(VAR_6, VAR_5->bimg_len, VAR_7.data,
       VAR_1 - VAR_5->hole_length, 1) < 0)
  {
   FUNC_3(VAR_2, "invalid compressed image at %X/%X, block %d",
          (uint32) (VAR_2->ReadRecPtr >> 32),
          (uint32) VAR_2->ReadRecPtr,
          VAR_3);
   return 0;
  }
  VAR_6 = VAR_7.data;
 }


 if (VAR_5->hole_length == 0)
 {
  FUNC_1(VAR_4, VAR_6, VAR_1);
 }
 else
 {
  FUNC_1(VAR_4, VAR_6, VAR_5->hole_offset);

  FUNC_0(VAR_4 + VAR_5->hole_offset, 0, VAR_5->hole_length);
  FUNC_1(VAR_4 + (VAR_5->hole_offset + VAR_5->hole_length),
      VAR_6 + VAR_5->hole_offset,
      VAR_1 - (VAR_5->hole_offset + VAR_5->hole_length));
 }

 return 1;
}
