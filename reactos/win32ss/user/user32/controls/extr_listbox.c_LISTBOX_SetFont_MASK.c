
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int avg_char_width; int self; scalar_t__ font; } ;
struct TYPE_7__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;
typedef scalar_t__ HFONT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char const*,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static INT FUNC_7( LB_DESCR *VAR_2, HFONT VAR_3 )
{
    HDC VAR_4;
    HFONT VAR_5 = 0;
    const char *VAR_6 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    SIZE VAR_7;

    VAR_2->font = VAR_3;

    if (!(VAR_4 = FUNC_1( VAR_2->self, 0, VAR_0 )))
    {
        FUNC_0("unable to get DC.\n" );
        return 16;
    }
    if (VAR_3) VAR_5 = FUNC_6( VAR_4, VAR_3 );
    FUNC_2( VAR_4, VAR_6, 52, &VAR_7);
    if (VAR_5) FUNC_6( VAR_4, VAR_5 );
    FUNC_5( VAR_2->self, VAR_4 );

    VAR_2->avg_char_width = (VAR_7.cx / 26 + 1) / 2;
    if (!FUNC_3(VAR_2))
        FUNC_4( VAR_2, 0, VAR_7.cy, VAR_1 );
    return VAR_7.cy;
}
