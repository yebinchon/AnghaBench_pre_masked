
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {scalar_t__ hwndActiveChild; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef long LPARAM ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,long) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (scalar_t__) ;

__attribute__((used)) static LONG FUNC_8( HWND VAR_5, HWND VAR_6 )
{
    MDICLIENTINFO *VAR_7;
    HWND VAR_8, VAR_9;
    BOOL VAR_10;

    VAR_7 = FUNC_7( VAR_5 );

    if (VAR_7->hwndActiveChild == VAR_6) return 0;

    FUNC_6("%p\n", VAR_6);

    VAR_9 = FUNC_1(VAR_5);
    VAR_10 = (FUNC_0() == VAR_9);
    VAR_8 = VAR_7->hwndActiveChild;


    if(VAR_8)
    {
        FUNC_4( VAR_8, VAR_3, VAR_0, 0L );
        FUNC_4( VAR_8, VAR_2, (WPARAM)VAR_8, (LPARAM)VAR_6);
    }

    FUNC_3( VAR_7, VAR_6, VAR_0 );
    VAR_7->hwndActiveChild = VAR_6;

    FUNC_2(VAR_7);

    if( VAR_10 )
    {
        FUNC_4( VAR_6, VAR_3, VAR_1, 0L);





        if (FUNC_5(VAR_5) == VAR_5)
            FUNC_4( VAR_5, VAR_4, (WPARAM)VAR_5, 0 );
    }

    FUNC_4( VAR_6, VAR_2, (WPARAM)VAR_8, (LPARAM)VAR_6 );
    return VAR_1;
}
