
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT16 ;


 int FUNC_0 (char*,char*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_1 (
    UINT16 VAR_0,
    UINT16 *VAR_1)
{
    UINT16 VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        FUNC_0 ("%25s%2.2X : %4.4X\n", "Word", VAR_2, VAR_1[VAR_2]);
    }
}
