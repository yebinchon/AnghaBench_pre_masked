
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int elsize; char byteorder; } ;
typedef int PyArrayObject ;


 char VAR_0 ;
 char VAR_1 ;
 char* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static int
FUNC_3(PyArrayObject *VAR_2)
{
    static char VAR_3 = (char) 0x80;
    char *VAR_4;
    char VAR_5;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_2)->elsize;
    VAR_5 = FUNC_1(VAR_2)->byteorder;
    VAR_4 = FUNC_0(VAR_2);
    if (VAR_6 > 1 &&
        (VAR_5 == VAR_0 ||
         (VAR_5 == VAR_1 &&
          FUNC_2(VAR_0)))) {
        VAR_4 += VAR_6 - 1;
    }
    return ((*VAR_4 & VAR_3) != 0);
}
