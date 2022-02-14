
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int display_name; int cfg_name_key; } ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ,int ,void**,char*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int VAR_0 ;

void FUNC_2 ( Mode *VAR_1 )
{
    FUNC_1 ( VAR_1->cfg_name_key, 128, "display-%s", VAR_1->name );
    FUNC_0 ( VAR_0, VAR_1->cfg_name_key, (void * *) &( VAR_1->display_name ), "The display name of this browser" );
}
