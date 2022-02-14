
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; } ;
typedef TYPE_1__ MENUITEMINFOA ;
typedef int HMENU ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static BOOL FUNC_7(void)
{
    HMENU VAR_3;
    MENUITEMINFOA VAR_4;
    BOOL VAR_5;

    VAR_3 = FUNC_0();

    FUNC_5(&VAR_4, 0, sizeof(MENUITEMINFOA));
    VAR_4.cbSize= sizeof(MENUITEMINFOA);
    FUNC_4(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, VAR_2, &VAR_4);




    if (!VAR_5 && FUNC_2() != VAR_0)
    {
        FUNC_6("NT4 and below can't handle a bigger MENUITEMINFO struct\n");
        FUNC_1(VAR_3);
        return VAR_1;
    }

    FUNC_1(VAR_3);
    return VAR_2;
}
