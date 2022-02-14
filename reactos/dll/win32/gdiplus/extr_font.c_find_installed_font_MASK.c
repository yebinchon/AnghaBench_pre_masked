
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct font_metrics {int facename; } ;
typedef int WCHAR ;
struct TYPE_3__ {int lfFaceName; } ;
typedef int LPARAM ;
typedef TYPE_1__ LOGFONTW ;
typedef int HFONT ;
typedef int HDC ;
typedef int GpStatus ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,struct font_metrics*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static GpStatus FUNC_8(const WCHAR *VAR_4, struct font_metrics *VAR_5)
{
    LOGFONTW VAR_6;
    HDC VAR_7 = FUNC_0(0);
    GpStatus VAR_8 = VAR_0;

    if(!FUNC_4(VAR_7, VAR_4, VAR_3, (LPARAM)&VAR_6))
    {
        HFONT VAR_9, VAR_10;

        FUNC_7(VAR_5->facename, VAR_6.lfFaceName);

        VAR_9 = FUNC_1(&VAR_6);
        VAR_10 = FUNC_5(VAR_7, VAR_9);
        VAR_8 = FUNC_6(VAR_7, VAR_5) ? VAR_2 : VAR_1;
        FUNC_5(VAR_7, VAR_10);
        FUNC_3(VAR_9);
    }

    FUNC_2(VAR_7);
    return VAR_8;
}
