
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int CharSetBefore; } ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t,TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
    UINT VAR_1;
    HDC VAR_2;

    VAR_2 = FUNC_0(((void*)0));
    for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0); ++VAR_1)
    {
        if (!FUNC_4(VAR_2, VAR_0[VAR_1].CharSetBefore))
            FUNC_5("charset not available: 0x%x\n", VAR_0[VAR_1].CharSetBefore);
        else
            FUNC_2(VAR_2, VAR_1, VAR_0 + VAR_1);
    }
    FUNC_1(VAR_2);
}
