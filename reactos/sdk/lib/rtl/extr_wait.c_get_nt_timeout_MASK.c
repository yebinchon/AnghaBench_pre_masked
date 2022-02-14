
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {int QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline PLARGE_INTEGER FUNC_0( PLARGE_INTEGER VAR_1, ULONG VAR_2 )
{
    if (VAR_2 == VAR_0) return ((void*)0);
    VAR_1->QuadPart = (ULONGLONG)VAR_2 * -10000;
    return VAR_1;
}
