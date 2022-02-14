
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Color; TYPE_1__* Theme; } ;
struct TYPE_7__ {TYPE_2__ ActiveTheme; } ;
struct TYPE_5__ {int ColoursList; } ;
typedef int HWND ;
typedef TYPE_3__ GLOBALS ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(HWND VAR_1, GLOBALS *VAR_2)
{
    FUNC_0(VAR_1,
                              VAR_0,
                              VAR_2->ActiveTheme.Theme->ColoursList,
                              VAR_2->ActiveTheme.Color);
}
