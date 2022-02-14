
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;

uint64_t FUNC_2(void)
{
 LARGE_INTEGER VAR_0;
 double VAR_1;

 FUNC_0(&VAR_0);
 VAR_1 = (double)VAR_0.QuadPart;
 VAR_1 *= 1000000000.0;
 VAR_1 /= (double)FUNC_1();

 return (uint64_t)VAR_1;
}
