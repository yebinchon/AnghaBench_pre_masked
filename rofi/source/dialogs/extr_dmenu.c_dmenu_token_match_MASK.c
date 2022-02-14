
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_4__ {TYPE_1__* cmd_list; scalar_t__ do_markup; } ;
struct TYPE_3__ {char* entry; } ;
typedef int Mode ;
typedef TYPE_2__ DmenuModePrivateData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,char*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (char*,int,int ,int *,char**,int *,int *) ;

__attribute__((used)) static int FUNC_4 ( const Mode *VAR_1, rofi_int_matcher **VAR_2, unsigned int VAR_3 )
{
    DmenuModePrivateData *VAR_4 = (DmenuModePrivateData *) FUNC_2 ( VAR_1 );
    if ( VAR_4->do_markup) {

        char *VAR_5 = ((void*)0);
        FUNC_3(VAR_4->cmd_list[VAR_3].entry, -1, 0, ((void*)0), &VAR_5, ((void*)0), ((void*)0));
        if ( VAR_5 ) {
            int VAR_6 = FUNC_1 ( VAR_2, VAR_5);
            FUNC_0 (VAR_5);
            return VAR_6;
        }
        return VAR_0;

    } else {
        return FUNC_1 ( VAR_2, VAR_4->cmd_list[VAR_3].entry );
    }
}
