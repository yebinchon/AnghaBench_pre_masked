
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int tmsize_t ;
struct TYPE_11__ {scalar_t__* td_stripbytecount; scalar_t__* td_stripoffset; scalar_t__ td_compression; int td_fillorder; } ;
struct TYPE_12__ {int tif_rawdatasize; int tif_flags; scalar_t__ tif_rawdataloaded; scalar_t__ tif_rawdataoff; int tif_rawcp; int tif_rawdata; int tif_rawcc; TYPE_1__ tif_dir; scalar_t__ tif_row; int tif_clientdata; int tif_curstrip; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,char const*,char*,unsigned long,...) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int,int,int ,char const*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int,int,int) ;

__attribute__((used)) static int
FUNC_11( TIFF *VAR_6, int VAR_7, tmsize_t VAR_8, int VAR_9 )
{
 static const char VAR_10[] = "TIFFFillStripPartial";
 register TIFFDirectory *VAR_11 = &VAR_6->tif_dir;
        tmsize_t VAR_12;
        uint64 VAR_13;
        tmsize_t VAR_14;
        tmsize_t VAR_15;


        if (!FUNC_7( VAR_6 ) || !VAR_6->tif_dir.td_stripbytecount)
            return 0;
        if( VAR_8 < VAR_5 / 2 )
                VAR_15 = VAR_8 * 2;
        else
                VAR_15 = VAR_8;
        if (VAR_15 > VAR_6->tif_rawdatasize) {
                FUNC_8( VAR_9 );

                VAR_6->tif_curstrip = VAR_1;
                if ((VAR_6->tif_flags & VAR_3) == 0) {
                        FUNC_1(VAR_6->tif_clientdata, VAR_10,
                                     "Data buffer too small to hold part of strip %lu",
                                     (unsigned long) VAR_7);
                        return (0);
                }
        }

        if( VAR_9 )
        {
                VAR_6->tif_rawdataloaded = 0;
                VAR_6->tif_rawdataoff = 0;
        }





        if( VAR_6->tif_rawdataloaded > 0 )
                VAR_12 = VAR_6->tif_rawdataloaded - (VAR_6->tif_rawcp - VAR_6->tif_rawdata);
        else
                VAR_12 = 0;

        if( VAR_12 > 0 )
        {
  FUNC_8((VAR_6->tif_flags&VAR_2)==0);
                FUNC_10( VAR_6->tif_rawdata, VAR_6->tif_rawcp, VAR_12 );
        }




        VAR_13 = VAR_11->td_stripoffset[VAR_7]
                + VAR_6->tif_rawdataoff + VAR_6->tif_rawdataloaded;

        if (!FUNC_0(VAR_6, VAR_13)) {
                FUNC_1(VAR_6->tif_clientdata, VAR_10,
                             "Seek error at scanline %lu, strip %lu",
                             (unsigned long) VAR_6->tif_row, (unsigned long) VAR_7);
                return 0;
        }




        if( VAR_15 > VAR_6->tif_rawdatasize )
                VAR_14 = VAR_15 - VAR_12;
        else
                VAR_14 = VAR_6->tif_rawdatasize - VAR_12;
        if( (uint64) VAR_14 > VAR_11->td_stripbytecount[VAR_7]
            - VAR_6->tif_rawdataoff - VAR_6->tif_rawdataloaded )
        {
                VAR_14 = (tmsize_t) VAR_11->td_stripbytecount[VAR_7]
                        - VAR_6->tif_rawdataoff - VAR_6->tif_rawdataloaded;
        }

 FUNC_8((VAR_6->tif_flags&VAR_2)==0);
        if( !FUNC_4( VAR_6, VAR_14, VAR_12,
                                 1,
                                 0,
                                 VAR_10) )
        {
                return 0;
        }

        VAR_6->tif_rawdataoff = VAR_6->tif_rawdataoff + VAR_6->tif_rawdataloaded - VAR_12 ;
        VAR_6->tif_rawdataloaded = VAR_12 + VAR_14;

        VAR_6->tif_rawcc = VAR_6->tif_rawdataloaded;
        VAR_6->tif_rawcp = VAR_6->tif_rawdata;

        if (!FUNC_9(VAR_6, VAR_11->td_fillorder) &&
            (VAR_6->tif_flags & VAR_4) == 0) {
  FUNC_8((VAR_6->tif_flags&VAR_2)==0);
                FUNC_5(VAR_6->tif_rawdata + VAR_12, VAR_14 );
 }





        if( VAR_9 )
        {
            return FUNC_6(VAR_6, VAR_7);
        }
        else
        {
                return 1;
        }
}
