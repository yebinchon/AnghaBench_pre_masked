
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int guid; } ;
struct TYPE_4__ {int script_hosts; } ;
typedef TYPE_1__ HTMLInnerWindow ;
typedef int GUID ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static GUID FUNC_3(HTMLInnerWindow *VAR_3)
{

    return FUNC_1(&VAR_3->script_hosts)
        ? VAR_0
        : FUNC_0(FUNC_2(&VAR_3->script_hosts), VAR_1, VAR_2)->guid;
}
