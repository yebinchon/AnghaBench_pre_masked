
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HTREEITEM ;


 int FUNC_0 (char) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(HTREEITEM VAR_2)
{
    if (VAR_2 == VAR_1) {
        FUNC_0('R');
        return;
    }
    if (VAR_2 == VAR_0) {
        FUNC_0('C');
        return;
    }
    if (VAR_2 == ((void*)0)) {
        FUNC_0('n');
        return;
    }
    FUNC_0('?');
}
