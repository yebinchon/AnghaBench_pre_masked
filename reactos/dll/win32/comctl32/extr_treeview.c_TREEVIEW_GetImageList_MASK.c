
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int himlState; int himlNormal; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;


 int FUNC_0 (char*) ;



__attribute__((used)) static LRESULT
FUNC_1(const TREEVIEW_INFO *VAR_0, WPARAM VAR_1)
{
    FUNC_0("\n");

    switch (VAR_1)
    {
    case 129:
 return (LRESULT)VAR_0->himlNormal;

    case 128:
 return (LRESULT)VAR_0->himlState;

    default:
 return 0;
    }
}
