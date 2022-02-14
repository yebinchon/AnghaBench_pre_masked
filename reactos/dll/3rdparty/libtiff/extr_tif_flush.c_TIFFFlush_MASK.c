
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_9__ {int td_nstrips; } ;
struct TYPE_10__ {scalar_t__ tif_mode; int tif_flags; TYPE_1__ tif_dir; } ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int **) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,int ,int *) ;

int
FUNC_5(TIFF* VAR_10)
{
    if( VAR_10->tif_mode == VAR_0 )
        return 1;

    if (!FUNC_0(VAR_10))
        return (0);






    if( (VAR_10->tif_flags & VAR_8)
        && !(VAR_10->tif_flags & VAR_7)
        && VAR_10->tif_mode == VAR_1 )
    {
        uint64 *VAR_11=((void*)0), *VAR_12=((void*)0);

        if( FUNC_2(VAR_10) )
        {
            if( FUNC_1( VAR_10, VAR_5, &VAR_11 )
                && FUNC_1( VAR_10, VAR_4, &VAR_12 )
                && FUNC_4( VAR_10, VAR_5, VAR_9,
                                      VAR_10->tif_dir.td_nstrips, VAR_11 )
                && FUNC_4( VAR_10, VAR_4, VAR_9,
                                      VAR_10->tif_dir.td_nstrips, VAR_12 ) )
            {
                VAR_10->tif_flags &= ~VAR_8;
                VAR_10->tif_flags &= ~VAR_6;
                return 1;
            }
        }
        else
        {
            if( FUNC_1( VAR_10, VAR_3, &VAR_11 )
                && FUNC_1( VAR_10, VAR_2, &VAR_12 )
                && FUNC_4( VAR_10, VAR_3, VAR_9,
                                      VAR_10->tif_dir.td_nstrips, VAR_11 )
                && FUNC_4( VAR_10, VAR_2, VAR_9,
                                      VAR_10->tif_dir.td_nstrips, VAR_12 ) )
            {
                VAR_10->tif_flags &= ~VAR_8;
                VAR_10->tif_flags &= ~VAR_6;
                return 1;
            }
        }
    }

    if ((VAR_10->tif_flags & (VAR_7|VAR_8))
        && !FUNC_3(VAR_10))
        return (0);

    return (1);
}
