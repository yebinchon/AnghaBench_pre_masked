
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_in_directory; int extension_on_cd; int name_on_cd; TYPE_1__* parent; } ;
struct TYPE_4__ {TYPE_2__* first_record; } ;
typedef TYPE_2__* PDIR_RECORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_1(PDIR_RECORD VAR_2)
{
    PDIR_RECORD VAR_3 = VAR_2->parent->first_record;
    while (VAR_3)
    {
        if ( VAR_3 != VAR_2
            && !FUNC_0(VAR_3->name_on_cd, VAR_2->name_on_cd)
            && !FUNC_0(VAR_3->extension_on_cd, VAR_2->extension_on_cd) )
            return VAR_1;
        VAR_3 = VAR_3->next_in_directory;
    }
    return VAR_0;
}
