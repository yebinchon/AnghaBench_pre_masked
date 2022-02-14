
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdi_path {int dummy; } ;
typedef int emr ;
struct TYPE_4__ {int nSize; int iType; } ;
struct TYPE_3__ {int rclBounds; TYPE_2__ emr; } ;
typedef int POINT ;
typedef int PHYSDEV ;
typedef int INT ;
typedef TYPE_1__ EMRSTROKEANDFILLPATH ;
typedef int DC ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct gdi_path*) ;
 struct gdi_path* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct gdi_path*,int **,int **) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int,int ) ;

__attribute__((used)) static BOOL FUNC_7( PHYSDEV VAR_3, INT VAR_4 )
{
    DC *VAR_5 = FUNC_5( VAR_3 );
    EMRSTROKEANDFILLPATH VAR_6;
    struct gdi_path *VAR_7;
    POINT *VAR_8;
    BYTE *VAR_9;

    VAR_6.emr.iType = VAR_4;
    VAR_6.emr.nSize = sizeof(VAR_6);

    if ((VAR_7 = FUNC_3( VAR_5, ((void*)0) )))
    {
        int VAR_10 = FUNC_4( VAR_7, &VAR_8, &VAR_9 );
        FUNC_6( &VAR_6.rclBounds, VAR_8, VAR_10, 0 );
        FUNC_2( VAR_7 );
    }
    else VAR_6.rclBounds = VAR_2;

    if (!FUNC_1( VAR_3, &VAR_6.emr )) return VAR_0;
    if (!VAR_7) return VAR_0;
    FUNC_0( VAR_3, &VAR_6.rclBounds );
    return VAR_1;
}
