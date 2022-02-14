
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ uint16 ;
typedef int tmsize_t ;
struct TYPE_10__ {size_t td_imagelength; scalar_t__ td_planarconfig; scalar_t__ td_samplesperpixel; size_t td_stripsperimage; size_t td_rowsperstrip; scalar_t__* td_stripbytecount; scalar_t__ td_compression; } ;
struct TYPE_11__ {int tif_scanlinesize; size_t tif_curstrip; int tif_rawdata; int tif_rawdataloaded; int tif_rawcp; scalar_t__ tif_rawdataoff; size_t tif_row; int (* tif_seek ) (TYPE_2__*,size_t) ;TYPE_1__ tif_dir; int tif_name; int tif_clientdata; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*,unsigned long,unsigned long) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t,int,int) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,size_t) ;

__attribute__((used)) static int
FUNC_7(TIFF* VAR_4, uint32 VAR_5, uint16 VAR_6 )
{
 register TIFFDirectory *VAR_7 = &VAR_4->tif_dir;
 uint32 VAR_8;
        int VAR_9;
 tmsize_t VAR_10 = 0;




 if (VAR_5 >= VAR_7->td_imagelength) {
  FUNC_0(VAR_4->tif_clientdata, VAR_4->tif_name,
      "%lu: Row out of range, max %lu",
      (unsigned long) VAR_5,
      (unsigned long) VAR_7->td_imagelength);
  return (0);
 }
 if (VAR_7->td_planarconfig == VAR_2) {
  if (VAR_6 >= VAR_7->td_samplesperpixel) {
   FUNC_0(VAR_4->tif_clientdata, VAR_4->tif_name,
       "%lu: Sample out of range, max %lu",
       (unsigned long) VAR_6, (unsigned long) VAR_7->td_samplesperpixel);
   return (0);
  }
  VAR_8 = (uint32)VAR_6*VAR_7->td_stripsperimage + VAR_5/VAR_7->td_rowsperstrip;
 } else
  VAR_8 = VAR_5 / VAR_7->td_rowsperstrip;
        VAR_9 = 1;


        if( !VAR_9 )
        {



                if( VAR_4->tif_scanlinesize < VAR_3 / 16 &&
                    VAR_4->tif_scanlinesize * 16 < VAR_3 - 5000 )
                {
                        VAR_10 = VAR_4->tif_scanlinesize * 16 + 5000;
                }
                else
                {
                        VAR_10 = VAR_4->tif_scanlinesize;
                }
        }





 if (VAR_8 != VAR_4->tif_curstrip) {

                if( VAR_9 )
                {
                        if (!FUNC_1(VAR_4, VAR_8))
                                return (0);
                }
                else
                {
                        if( !FUNC_2(VAR_4,VAR_8,VAR_10,1) )
                                return 0;
                }
 }




        else if( !VAR_9 )
        {
                if( ((VAR_4->tif_rawdata + VAR_4->tif_rawdataloaded) - VAR_4->tif_rawcp) < VAR_10
                    && (uint64) VAR_4->tif_rawdataoff+VAR_4->tif_rawdataloaded < VAR_7->td_stripbytecount[VAR_8] )
                {
                        if( !FUNC_2(VAR_4,VAR_8,VAR_10,0) )
                                return 0;
                }
        }

        if (VAR_5 < VAR_4->tif_row) {
                if( VAR_4->tif_rawdataoff != 0 )
                {
                        if( !FUNC_2(VAR_4,VAR_8,VAR_10,1) )
                                return 0;
                }
                else
                {
                        if (!FUNC_3(VAR_4, VAR_8))
                                return (0);
                }
 }

 if (VAR_5 != VAR_4->tif_row) {






  if (!(*VAR_4->tif_seek)(VAR_4, VAR_5 - VAR_4->tif_row))
   return (0);
  VAR_4->tif_row = VAR_5;
 }

 return (1);
}
