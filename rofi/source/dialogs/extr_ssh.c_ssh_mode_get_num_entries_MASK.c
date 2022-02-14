
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int hosts_list_length; } ;
typedef TYPE_1__ SSHModePrivateData ;
typedef int Mode ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static unsigned int FUNC_1 ( const Mode *VAR_0 )
{
    const SSHModePrivateData *VAR_1 = (const SSHModePrivateData *) FUNC_0 ( VAR_0 );
    return VAR_1->hosts_list_length;
}
