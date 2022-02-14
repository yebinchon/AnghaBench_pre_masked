
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* text; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(int VAR_2)
{
    if (VAR_1 == 0)
    {
 VAR_0[VAR_2].text = "Install an entry for Vim in the popup menu for the right\n    mouse button so that you can edit any file with Vim";
 VAR_1 = 1;
    }
    else
    {
 VAR_0[VAR_2].text = "Do NOT install an entry for Vim in the popup menu for the\n    right mouse button to edit any file with Vim";
 VAR_1 = 0;
    }
}
