
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tme ;
struct TYPE_15__ {void* y; void* x; } ;
struct TYPE_14__ {int dwStyle; scalar_t__ lPos; int flags; int hwndSelf; int rcThumb; } ;
struct TYPE_13__ {int cbSize; int hwndTrack; int dwFlags; } ;
typedef TYPE_1__ TRACKMOUSEEVENT ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef TYPE_3__ POINT ;
typedef int LRESULT ;
typedef scalar_t__ LONG ;
typedef void* INT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,void*,void*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,void*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static LRESULT
FUNC_11 (TRACKBAR_INFO *VAR_9, INT VAR_10, INT VAR_11)
{
    INT VAR_12 = (VAR_9->dwStyle & VAR_1) ? VAR_11 : VAR_10;
    LONG VAR_13, VAR_14 = VAR_9->lPos;

    FUNC_3("(x=%d. y=%d)\n", VAR_10, VAR_11);

    if (VAR_9->flags & VAR_2) {
 POINT VAR_15;
 VAR_15.x = VAR_10;
 VAR_15.y = VAR_11;
 FUNC_4 (VAR_9, VAR_15);
 return VAR_8;
    }

    if (!(VAR_9->flags & VAR_3))
    {
        if (FUNC_0 (VAR_9->hwndSelf))
        {
            DWORD VAR_16 = VAR_9->flags;
            POINT VAR_17;
            VAR_17.x = VAR_10;
            VAR_17.y = VAR_11;
            if (FUNC_2 (&VAR_9->rcThumb, VAR_17))
            {
                TRACKMOUSEEVENT VAR_18;
                VAR_18.cbSize = sizeof( VAR_18 );
                VAR_18.dwFlags = VAR_7;
                VAR_18.hwndTrack = VAR_9->hwndSelf;
                FUNC_8( &VAR_18 );
                VAR_9->flags |= VAR_5;
            }
            else
            {
                TRACKMOUSEEVENT VAR_19;
                VAR_19.cbSize = sizeof( VAR_19 );
                VAR_19.dwFlags = VAR_6;
                VAR_19.hwndTrack = VAR_9->hwndSelf;
                FUNC_8( &VAR_19 );
                VAR_9->flags &= ~VAR_5;
            }
            if (VAR_16 != VAR_9->flags) FUNC_1 (VAR_9->hwndSelf, &VAR_9->rcThumb, VAR_0);
        }
        return VAR_8;
    }

    VAR_13 = FUNC_5 (VAR_9, VAR_12);

    if (VAR_13 == VAR_14) return VAR_8;

    VAR_9->lPos = VAR_13;
    FUNC_7 (VAR_9);

    FUNC_10 (VAR_9, VAR_4 | (VAR_9->lPos<<16));

    FUNC_6(VAR_9, VAR_14, VAR_13);
    FUNC_9 (VAR_9->hwndSelf);

    return VAR_8;
}
