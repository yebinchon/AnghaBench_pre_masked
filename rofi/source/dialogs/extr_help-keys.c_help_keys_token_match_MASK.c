
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_2__ {int * messages; } ;
typedef int Mode ;
typedef TYPE_1__ KeysHelpModePrivateData ;


 int FUNC_0 (int **,int ) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2 ( const Mode *VAR_0,
                                   rofi_int_matcher **VAR_1,
                                   unsigned int VAR_2
                                   )
{
    KeysHelpModePrivateData *VAR_3 = (KeysHelpModePrivateData *) FUNC_1 ( VAR_0 );
    return FUNC_0 ( VAR_1, VAR_3->messages[VAR_2] );
}
