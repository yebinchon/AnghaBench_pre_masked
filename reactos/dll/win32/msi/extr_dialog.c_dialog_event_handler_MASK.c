
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msi_dialog ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_2__ {int (* handler ) (int *,int const*) ;scalar_t__ event; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (scalar_t__,int const*) ;
 int FUNC_4 (int *,int const*) ;

__attribute__((used)) static UINT FUNC_5( msi_dialog *VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4 )
{
    unsigned int VAR_5;

    FUNC_1("handling event %s\n", FUNC_2(VAR_3));

    if (!VAR_3) return VAR_0;

    for (VAR_5 = 0; VAR_1[VAR_5].event; VAR_5++)
    {
        if (!FUNC_3( VAR_1[VAR_5].event, VAR_3 ))
            return VAR_1[VAR_5].handler( VAR_2, VAR_4 );
    }
    FUNC_0("unhandled event %s arg(%s)\n", FUNC_2(VAR_3), FUNC_2(VAR_4));
    return VAR_0;
}
