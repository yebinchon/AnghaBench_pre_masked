
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Options; void* Description; void* BinPath; void* DisplayName; void* ServiceName; } ;
typedef TYPE_1__* PCREATE_DATA ;
typedef int BOOL ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL
FUNC_1(PCREATE_DATA VAR_7)
{
    BOOL VAR_8 = VAR_0;

    if ((VAR_7->ServiceName = FUNC_0(VAR_7, VAR_5)))
    {
        if ((VAR_7->DisplayName = FUNC_0(VAR_7, VAR_2)))
        {
            if ((VAR_7->BinPath = FUNC_0(VAR_7, VAR_4)))
            {
                VAR_7->Description = FUNC_0(VAR_7, VAR_1);
                VAR_7->Options = FUNC_0(VAR_7, VAR_3);

                VAR_8 = VAR_6;
            }
        }
    }

    return VAR_8;
}
