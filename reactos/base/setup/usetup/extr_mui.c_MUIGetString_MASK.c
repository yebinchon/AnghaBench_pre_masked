
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {scalar_t__ Number; char* String; } ;
typedef TYPE_1__ MUI_STRING ;
typedef char* LPSTR ;
typedef int CHAR ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int *,char*,size_t,int ) ;

LPSTR
FUNC_4(
    ULONG VAR_1)
{
    ULONG VAR_2;
    const MUI_STRING * VAR_3;
    CHAR VAR_4[128];

    VAR_3 = FUNC_1();
    if (VAR_3)
    {
        for (VAR_2 = 0; VAR_3[VAR_2].Number != 0; VAR_2++)
        {
            if (VAR_3[VAR_2].Number == VAR_1)
            {
                return VAR_3[VAR_2].String;
            }
        }
    }

    FUNC_3(VAR_4, "Error: failed find string id %lu for language index %lu\n", VAR_1, FUNC_0());

    FUNC_2(VAR_4,
               ((void*)0),
               ((void*)0),
               VAR_0);

    return "<nostring>";
}
