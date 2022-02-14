
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char,char) ;
 int FUNC_2 (char,char) ;
 int FUNC_3 (char,char) ;
 int FUNC_4 (char,char) ;
 int FUNC_5 (char,char) ;
 int FUNC_6 (char,char) ;

__attribute__((used)) static int FUNC_7(void)
{
    if (!FUNC_0(1, FUNC_1('a', 'a'))
        | !FUNC_0(0, FUNC_1('a', 'A'))
        | !FUNC_0(1, FUNC_6('a', 'c'))
        | !FUNC_0(0, FUNC_6('e', 'e'))
        | !FUNC_0(1, FUNC_5('i', 'x'))
        | !FUNC_0(0, FUNC_5('x', 'i'))
        | !FUNC_0(1, FUNC_4('i', 'x'))
        | !FUNC_0(1, FUNC_4('n', 'n'))
        | !FUNC_0(0, FUNC_4('x', 'i'))
        | !FUNC_0(1, FUNC_3('w', 'n'))
        | !FUNC_0(0, FUNC_3('n', 'w'))
        | !FUNC_0(1, FUNC_2('w', 'n'))
        | !FUNC_0(1, FUNC_2('p', 'p'))
        | !FUNC_0(0, FUNC_2('n', 'w')))
        goto err;
    return 1;

err:
    return 0;
}
