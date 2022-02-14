
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* pGetDpiForMonitor ) (int ,int ,scalar_t__*,scalar_t__*) ;} ;
struct vo_w32_state {int dpi; int monitor; TYPE_1__ api; } ;
typedef scalar_t__ UINT ;
typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vo_w32_state*,char*,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct vo_w32_state *VAR_3)
{
    UINT VAR_4, VAR_5;
    if (VAR_3->api.pGetDpiForMonitor && VAR_3->api.pGetDpiForMonitor(VAR_3->monitor,
                                     VAR_1, &VAR_4, &VAR_5) == VAR_2) {
        VAR_3->dpi = (int)VAR_4;
        FUNC_2(VAR_3, "DPI detected from the new API: %d\n", VAR_3->dpi);
        return;
    }
    HDC VAR_6 = FUNC_0(((void*)0));
    if (VAR_6) {
        VAR_3->dpi = FUNC_1(VAR_6, VAR_0);
        FUNC_3(((void*)0), VAR_6);
        FUNC_2(VAR_3, "DPI detected from the old API: %d\n", VAR_3->dpi);
    } else {
        VAR_3->dpi = 96;
        FUNC_2(VAR_3, "Couldn't determine DPI, falling back to %d\n", VAR_3->dpi);
    }
}
