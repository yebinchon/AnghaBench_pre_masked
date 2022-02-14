
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extension_on_cd; int name_on_cd; } ;
typedef TYPE_1__* PDIR_RECORD ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(PDIR_RECORD VAR_0, PDIR_RECORD VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0->name_on_cd, VAR_1->name_on_cd);
    if (VAR_2 == 0)
        VAR_2 = FUNC_0(VAR_0->extension_on_cd, VAR_1->extension_on_cd);
    return VAR_2;
}
