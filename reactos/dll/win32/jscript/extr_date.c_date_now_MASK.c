
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef int LONGLONG ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__*) ;
 double VAR_0 ;

__attribute__((used)) static double FUNC_1(void)
{
    FILETIME VAR_1;
    LONGLONG VAR_2;

    FUNC_0(&VAR_1);
    VAR_2 = ((LONGLONG)VAR_1.dwHighDateTime << 32) + VAR_1.dwLowDateTime;

    return VAR_2/10000 - VAR_0;
}
