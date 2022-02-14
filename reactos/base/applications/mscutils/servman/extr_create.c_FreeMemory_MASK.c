
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* Options; struct TYPE_4__* Description; struct TYPE_4__* BinPath; struct TYPE_4__* DisplayName; struct TYPE_4__* ServiceName; } ;
typedef TYPE_1__* PCREATE_DATA ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static VOID
FUNC_1(PCREATE_DATA VAR_1)
{
    if (VAR_1->ServiceName != ((void*)0))
        FUNC_0(VAR_0,
                 0,
                 VAR_1->ServiceName);
    if (VAR_1->DisplayName != ((void*)0))
        FUNC_0(VAR_0,
                 0,
                 VAR_1->DisplayName);
    if (VAR_1->BinPath != ((void*)0))
        FUNC_0(VAR_0,
                 0,
                 VAR_1->BinPath);
    if (VAR_1->Description != ((void*)0))
        FUNC_0(VAR_0,
                 0,
                 VAR_1->Description);
    if (VAR_1->Options != ((void*)0))
        FUNC_0(VAR_0,
                 0,
                 VAR_1->Options);

    FUNC_0(VAR_0,
             0,
             VAR_1);
}
