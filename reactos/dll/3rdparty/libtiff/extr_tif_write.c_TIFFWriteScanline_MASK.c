
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_13__ {int td_imagelength; scalar_t__ td_planarconfig; int td_samplesperpixel; int td_stripsperimage; int td_rowsperstrip; int td_nstrips; scalar_t__* td_stripbytecount; } ;
struct TYPE_14__ {int tif_flags; int tif_curstrip; int tif_row; int (* tif_encoderow ) (TYPE_2__*,int *,int ,int) ;int tif_scanlinesize; int (* tif_postdecode ) (TYPE_2__*,int *,int ) ;int (* tif_seek ) (TYPE_2__*,int) ;int tif_rawdata; int tif_rawcp; int (* tif_preencode ) (TYPE_2__*,int) ;scalar_t__ tif_curoff; scalar_t__ tif_rawcc; int (* tif_setupencode ) (TYPE_2__*) ;int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char const*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int *,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int) ;

int
FUNC_11(TIFF* VAR_4, void* VAR_5, uint32 VAR_6, uint16 VAR_7)
{
 static const char VAR_8[] = "TIFFWriteScanline";
 register TIFFDirectory *VAR_9;
 int VAR_10, VAR_11 = 0;
 uint32 VAR_12;

 if (!FUNC_5(VAR_4, VAR_8))
  return (-1);





 if (!FUNC_0(VAR_4))
  return (-1);
        VAR_4->tif_flags |= VAR_1;

 VAR_9 = &VAR_4->tif_dir;




 if (VAR_6 >= VAR_9->td_imagelength) {
  if (VAR_9->td_planarconfig == VAR_0) {
   FUNC_1(VAR_4->tif_clientdata, VAR_8,
       "Can not change \"ImageLength\" when using separate planes");
   return (-1);
  }
  VAR_9->td_imagelength = VAR_6+1;
  VAR_11 = 1;
 }



 if (VAR_9->td_planarconfig == VAR_0) {
  if (VAR_7 >= VAR_9->td_samplesperpixel) {
   FUNC_1(VAR_4->tif_clientdata, VAR_8,
       "%lu: Sample out of range, max %lu",
       (unsigned long) VAR_7, (unsigned long) VAR_9->td_samplesperpixel);
   return (-1);
  }
  VAR_12 = VAR_7*VAR_9->td_stripsperimage + VAR_6/VAR_9->td_rowsperstrip;
 } else
  VAR_12 = VAR_6 / VAR_9->td_rowsperstrip;







 if (VAR_12 >= VAR_9->td_nstrips && !FUNC_3(VAR_4, 1, VAR_8))
  return (-1);
 if (VAR_12 != VAR_4->tif_curstrip) {



  if (!FUNC_2(VAR_4))
   return (-1);
  VAR_4->tif_curstrip = VAR_12;





  if (VAR_12 >= VAR_9->td_stripsperimage && VAR_11)
   VAR_9->td_stripsperimage =
       FUNC_4(VAR_9->td_imagelength,VAR_9->td_rowsperstrip);
                if (VAR_9->td_stripsperimage == 0) {
                        FUNC_1(VAR_4->tif_clientdata, VAR_8, "Zero strips per image");
                        return (-1);
                }
  VAR_4->tif_row =
      (VAR_12 % VAR_9->td_stripsperimage) * VAR_9->td_rowsperstrip;
  if ((VAR_4->tif_flags & VAR_2) == 0) {
   if (!(*VAR_4->tif_setupencode)(VAR_4))
    return (-1);
   VAR_4->tif_flags |= VAR_2;
  }

  VAR_4->tif_rawcc = 0;
  VAR_4->tif_rawcp = VAR_4->tif_rawdata;

  if( VAR_9->td_stripbytecount[VAR_12] > 0 )
  {

   VAR_9->td_stripbytecount[VAR_12] = 0;


   VAR_4->tif_curoff = 0;
  }

  if (!(*VAR_4->tif_preencode)(VAR_4, VAR_7))
   return (-1);
  VAR_4->tif_flags |= VAR_3;
 }





 if (VAR_6 != VAR_4->tif_row) {
  if (VAR_6 < VAR_4->tif_row) {





   VAR_4->tif_row = (VAR_12 % VAR_9->td_stripsperimage) *
       VAR_9->td_rowsperstrip;
   VAR_4->tif_rawcp = VAR_4->tif_rawdata;
  }



  if (!(*VAR_4->tif_seek)(VAR_4, VAR_6 - VAR_4->tif_row))
   return (-1);
  VAR_4->tif_row = VAR_6;
 }


 VAR_4->tif_postdecode( VAR_4, (uint8*) VAR_5, VAR_4->tif_scanlinesize );

 VAR_10 = (*VAR_4->tif_encoderow)(VAR_4, (uint8*) VAR_5,
     VAR_4->tif_scanlinesize, VAR_7);


 VAR_4->tif_row = VAR_6 + 1;
 return (VAR_10);
}
