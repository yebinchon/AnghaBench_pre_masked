
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGLONG ;
typedef int INT ;


 int FUNC_0 (char*,int *,int *,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(INT *VAR_0, LONGLONG *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    VAR_2 /= 4;
    while (VAR_2--)
        *(VAR_1++) += FUNC_1(*(VAR_0++));
}
