
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t num_langids; scalar_t__* langids; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef scalar_t__ LANGID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0( MSIPACKAGE *VAR_2, LANGID VAR_3 )
{
    UINT VAR_4;

    if (!VAR_2->num_langids || !VAR_3) return VAR_1;
    for (VAR_4 = 0; VAR_4 < VAR_2->num_langids; VAR_4++)
    {
        if (VAR_2->langids[VAR_4] == VAR_3) return VAR_1;
    }
    return VAR_0;
}
