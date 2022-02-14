
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int QuadPart; } ;
struct TYPE_4__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

uint64_t FUNC_1(void)
{
    LARGE_INTEGER VAR_1;
    FUNC_0(&VAR_1);




    return VAR_1.QuadPart / VAR_0.QuadPart * 1000000 +
        VAR_1.QuadPart % VAR_0.QuadPart * 1000000 / VAR_0.QuadPart;
}
