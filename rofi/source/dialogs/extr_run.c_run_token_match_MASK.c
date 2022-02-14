
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_5__ {scalar_t__ private_data; } ;
struct TYPE_4__ {int * cmd_list; } ;
typedef TYPE_1__ RunModePrivateData ;
typedef TYPE_2__ Mode ;


 int FUNC_0 (int **,int ) ;

__attribute__((used)) static int FUNC_1 ( const Mode *VAR_0, rofi_int_matcher **VAR_1, unsigned int VAR_2 )
{
    const RunModePrivateData *VAR_3 = (const RunModePrivateData *) VAR_0->private_data;
    return FUNC_0 ( VAR_1, VAR_3->cmd_list[VAR_2] );
}
