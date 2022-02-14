
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int clock_t ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_4__ {scalar_t__ QuadPart; } ;
typedef int FILETIME ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;

clock_t
FUNC_2(void)
{
    ULARGE_INTEGER VAR_1;

    FUNC_1((FILETIME*)&VAR_1);
    VAR_1.QuadPart -= VAR_0.QuadPart;
    return (clock_t)FUNC_0((FILETIME*)&VAR_1, ((void*)0));
}
