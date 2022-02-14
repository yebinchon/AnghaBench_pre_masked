
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_5__ {int style; scalar_t__ self; int horz_pos; int owner; scalar_t__ font; } ;
typedef int RECT ;
typedef int LPARAM ;
typedef TYPE_1__ LB_DESCR ;
typedef int INT ;
typedef scalar_t__ HFONT ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int *,int ,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12( LB_DESCR *VAR_6, INT VAR_7, UINT VAR_8 )
{
    HDC VAR_9;
    RECT VAR_10;
    HFONT VAR_11 = 0;
    HBRUSH VAR_12, VAR_13 = 0;


    if (!FUNC_4(VAR_6->self)) return;
    if (VAR_6->style & VAR_3)
    {
        VAR_6->style |= VAR_2;
        return;
    }
    if (FUNC_5( VAR_6, VAR_7, &VAR_10 ) != 1) return;
    if (!(VAR_9 = FUNC_1( VAR_6->self, 0, VAR_1 ))) return;
    if (VAR_6->font) VAR_11 = FUNC_8( VAR_9, VAR_6->font );



    VAR_12 = (HBRUSH)FUNC_9( VAR_6->owner, VAR_5,
       (WPARAM)VAR_9, (LPARAM)VAR_6->self );

    if (VAR_12) VAR_13 = FUNC_8( VAR_9, VAR_12 );
    if (!FUNC_3(VAR_6->self))
        FUNC_10( VAR_9, FUNC_2( VAR_0 ) );
    FUNC_11( VAR_9, VAR_6->horz_pos, 0, ((void*)0) );
    FUNC_6( VAR_6, VAR_9, &VAR_10, VAR_7, VAR_8, VAR_4 );
    if (VAR_11) FUNC_8( VAR_9, VAR_11 );
    if (VAR_13) FUNC_8( VAR_9, VAR_13 );
    FUNC_7( VAR_6->self, VAR_9 );
}
