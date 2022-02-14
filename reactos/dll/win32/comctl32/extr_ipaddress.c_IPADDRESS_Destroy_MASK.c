
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Self; TYPE_1__* Part; } ;
struct TYPE_5__ {scalar_t__ OrigProc; int EditHwnd; } ;
typedef int LRESULT ;
typedef TYPE_1__ IPPART_INFO ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int DWORD_PTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static LRESULT FUNC_3 (IPADDRESS_INFO *VAR_1)
{
    int VAR_2;

    FUNC_1("\n");

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
 IPPART_INFO* VAR_3 = &VAR_1->Part[VAR_2];
        FUNC_0 (VAR_3->EditHwnd, VAR_0, (DWORD_PTR)VAR_3->OrigProc);
    }

    FUNC_0 (VAR_1->Self, 0, 0);
    FUNC_2 (VAR_1);
    return 0;
}
