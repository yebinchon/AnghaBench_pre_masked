
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int tmsize_t ;
struct TYPE_7__ {int * td_stripoffset; } ;
struct TYPE_8__ {int tif_flags; scalar_t__ tif_col; scalar_t__ tif_row; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,char const*,char*,unsigned long,unsigned long,...) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int,size_t,char const*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static tmsize_t
FUNC_5(TIFF* VAR_1, uint32 VAR_2, int VAR_3,
                        tmsize_t VAR_4, const char* VAR_5)
{
        TIFFDirectory *VAR_6 = &VAR_1->tif_dir;

        FUNC_3( !FUNC_4(VAR_1) );
        FUNC_3((VAR_1->tif_flags&VAR_0)==0);

        if (!FUNC_0(VAR_1, VAR_6->td_stripoffset[VAR_2])) {
            if( VAR_3 )
            {
                FUNC_1(VAR_1->tif_clientdata, VAR_5,
                    "Seek error at scanline %lu, strip %lu",
                    (unsigned long) VAR_1->tif_row,
                    (unsigned long) VAR_2);
            }
            else
            {
                FUNC_1(VAR_1->tif_clientdata, VAR_5,
                    "Seek error at row %lu, col %lu, tile %lu",
                    (unsigned long) VAR_1->tif_row,
                    (unsigned long) VAR_1->tif_col,
                    (unsigned long) VAR_2);
            }
            return ((tmsize_t)(-1));
        }

        if( !FUNC_2( VAR_1, VAR_4, 0, VAR_3,
                                 VAR_2, VAR_5 ) )
        {
            return ((tmsize_t)(-1));
        }

        return (VAR_4);
}
