
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; int cs; } ;
typedef int LRESULT ;
typedef int HDC ;
typedef TYPE_1__ ANIMATE_INFO ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static LRESULT FUNC_5(ANIMATE_INFO *VAR_0)
{
    HDC VAR_1;

    if ((VAR_1 = FUNC_2(VAR_0->hwndSelf)) != 0)
    {
        FUNC_1(&VAR_0->cs);
        FUNC_0(VAR_0, VAR_1);
        FUNC_3(&VAR_0->cs);

 FUNC_4(VAR_0->hwndSelf, VAR_1);
    }

    return 0;
}
