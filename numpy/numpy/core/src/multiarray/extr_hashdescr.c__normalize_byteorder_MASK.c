
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static char FUNC_1(char VAR_1)
{
    switch(VAR_1) {
        case '=':
            if (FUNC_0() == VAR_0) {
                return '>';
            }
            else {
                return '<';
            }
        default:
            return VAR_1;
    }
}
