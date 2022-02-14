
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_10__ {scalar_t__ td_nstrips; scalar_t__ td_stripsperimage; } ;
struct TYPE_11__ {scalar_t__ tif_tilesize; int (* tif_postdecode ) (TYPE_2__*,int *,scalar_t__) ;scalar_t__ (* tif_decodetile ) (TYPE_2__*,int *,scalar_t__,int ) ;int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char const*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,void*,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*,int *,scalar_t__) ;

tmsize_t
FUNC_9(TIFF* VAR_0, uint32 VAR_1,
                                    void **VAR_2, tmsize_t VAR_3,
                                    tmsize_t VAR_4)
{
    static const char VAR_5[] = "_TIFFReadEncodedTileAndAllocBuffer";
    TIFFDirectory *VAR_6 = &VAR_0->tif_dir;
    tmsize_t VAR_7 = VAR_0->tif_tilesize;

    if( *VAR_2 != ((void*)0) )
    {
        return FUNC_4(VAR_0, VAR_1, *VAR_2, VAR_4);
    }

    if (!FUNC_0(VAR_0, 1))
            return ((tmsize_t)(-1));
    if (VAR_1 >= VAR_6->td_nstrips) {
            FUNC_1(VAR_0->tif_clientdata, VAR_5,
                "%lu: Tile out of range, max %lu",
                (unsigned long) VAR_1, (unsigned long) VAR_6->td_nstrips);
            return ((tmsize_t)(-1));
    }

    if (!FUNC_3(VAR_0,VAR_1))
            return((tmsize_t)(-1));

    *VAR_2 = FUNC_5(VAR_3);
    if (*VAR_2 == ((void*)0)) {
            FUNC_1(VAR_0->tif_clientdata, FUNC_2(VAR_0),
                         "No space for tile buffer");
            return((tmsize_t)(-1));
    }
    FUNC_6(*VAR_2, 0, VAR_3);

    if (VAR_4 == (tmsize_t)(-1))
        VAR_4 = VAR_7;
    else if (VAR_4 > VAR_7)
        VAR_4 = VAR_7;
    if( (*VAR_0->tif_decodetile)(VAR_0,
        (uint8*) *VAR_2, VAR_4, (uint16)(VAR_1/VAR_6->td_stripsperimage))) {
        (*VAR_0->tif_postdecode)(VAR_0, (uint8*) *VAR_2, VAR_4);
        return (VAR_4);
    } else
        return ((tmsize_t)(-1));
}
