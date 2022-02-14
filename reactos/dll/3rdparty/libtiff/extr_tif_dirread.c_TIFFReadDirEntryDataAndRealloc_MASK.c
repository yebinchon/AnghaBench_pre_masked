
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef scalar_t__ tmsize_t ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_6__ {int tif_name; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,char*,char*,long,long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_6(
                    TIFF* VAR_6, uint64 VAR_7, tmsize_t VAR_8, void** VAR_9)
{



        tmsize_t VAR_10 = 0;

        FUNC_4( !FUNC_5(VAR_6) );

        if (!FUNC_0(VAR_6,VAR_7))
                return(VAR_4);







        while( VAR_10 < VAR_8 )
        {
            void* VAR_11;
            tmsize_t VAR_12;
            tmsize_t VAR_13 = VAR_8 - VAR_10;
            VAR_11 = (uint8*) FUNC_3(
                            *VAR_9, VAR_10 + VAR_13);
            if( VAR_11 == ((void*)0) )
            {
                FUNC_1(VAR_6->tif_clientdata, VAR_6->tif_name,
                            "Failed to allocate memory for %s "
                            "(%ld elements of %ld bytes each)",
                            "TIFFReadDirEntryArray",
                             (long) 1, (long) (VAR_10 + VAR_13));
                return VAR_3;
            }
            *VAR_9 = VAR_11;

            VAR_12 = FUNC_2(VAR_6,
                (char*)*VAR_9 + VAR_10, VAR_13);
            VAR_10 += VAR_12;
            if (VAR_12 != VAR_13) {
                return VAR_4;
            }
        }
        return VAR_5;
}
