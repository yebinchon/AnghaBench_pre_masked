
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_4__ {TYPE_1__* hosts_list; } ;
struct TYPE_3__ {int hostname; } ;
typedef TYPE_2__ SSHModePrivateData ;
typedef int Mode ;


 int FUNC_0 (int **,int ) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2 ( const Mode *VAR_0, rofi_int_matcher **VAR_1, unsigned int VAR_2 )
{
    SSHModePrivateData *VAR_3 = (SSHModePrivateData *) FUNC_1 ( VAR_0 );
    return FUNC_0 ( VAR_1, VAR_3->hosts_list[VAR_2].hostname );
}
