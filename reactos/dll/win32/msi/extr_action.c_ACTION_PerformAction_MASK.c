
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ action_progress_increment; } ;
typedef TYPE_1__ MSIPACKAGE ;


 scalar_t__ FUNC_0 (TYPE_1__*,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int const*) ;

UINT FUNC_5(MSIPACKAGE *VAR_1, const WCHAR *VAR_2, UINT VAR_3)
{
    UINT VAR_4;

    FUNC_2("Performing action (%s)\n", FUNC_4(VAR_2));

    VAR_1->action_progress_increment = 0;
    VAR_4 = FUNC_1(VAR_1, VAR_2);

    if (VAR_4 == VAR_0)
        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

    if (VAR_4 == VAR_0)
        FUNC_3("unhandled msi action %s\n", FUNC_4(VAR_2));

    return VAR_4;
}
