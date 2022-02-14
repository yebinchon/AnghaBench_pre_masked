
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HICON ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_3(void)
{
    HICON VAR_2 ;


    VAR_2 = (HICON) FUNC_0(0, VAR_1);
    FUNC_2(VAR_2 != ((void*)0));

    FUNC_2(FUNC_1(VAR_2, 0) == VAR_0);


    VAR_2 = (HICON) FUNC_0(0xdeadbeef, VAR_1);
    FUNC_2(VAR_2 != ((void*)0));

    FUNC_2(FUNC_1(VAR_2, 0xbaadf00d) == VAR_0);

}
