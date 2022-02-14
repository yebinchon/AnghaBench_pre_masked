
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bm ;
struct TYPE_8__ {scalar_t__ bmWidth; scalar_t__ bmHeight; } ;
struct TYPE_7__ {int hbmColor; } ;
struct TYPE_6__ {scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_1__ SIZE ;
typedef int IImageList ;
typedef TYPE_2__ ICONINFO ;
typedef int HICON ;
typedef int DWORD ;
typedef TYPE_3__ BITMAP ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int,TYPE_3__*) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7( HICON VAR_9, DWORD VAR_10 )
{
    ICONINFO VAR_11;
    BITMAP VAR_12;
    SIZE VAR_13, VAR_14;
    IImageList *VAR_15;

    FUNC_0( VAR_9, &VAR_11 );
    FUNC_1( VAR_11.hbmColor, sizeof(VAR_12), &VAR_12 );

    FUNC_5( (VAR_10 & VAR_2) ? VAR_4 : VAR_3,
                    &VAR_0, (void **)&VAR_15 );
    FUNC_3( VAR_15, &VAR_13.cx, &VAR_13.cy );
    FUNC_4( VAR_15 );

    VAR_14.cx = FUNC_2( (VAR_10 & VAR_2) ? VAR_6 : VAR_5 );
    VAR_14.cy = FUNC_2( (VAR_10 & VAR_2) ? VAR_8 : VAR_7 );


    if (VAR_10 & VAR_1)
    {
        FUNC_6( VAR_12.bmWidth == VAR_13.cx, "got %d expected %d\n", VAR_12.bmWidth, VAR_13.cx );
        FUNC_6( VAR_12.bmHeight == VAR_13.cy, "got %d expected %d\n", VAR_12.bmHeight, VAR_13.cy );
    }
    else
    {
        FUNC_6( VAR_12.bmWidth == VAR_14.cx, "got %d expected %d\n", VAR_12.bmWidth, VAR_14.cx );
        FUNC_6( VAR_12.bmHeight == VAR_14.cy, "got %d expected %d\n", VAR_12.bmHeight, VAR_14.cy );
    }
}
