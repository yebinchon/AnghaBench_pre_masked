
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int start; int buf; } ;
typedef TYPE_1__ RangeObject ;
typedef int PyInt ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static PyInt
FUNC_1(RangeObject *VAR_0)
{

    if (FUNC_0(VAR_0->buf))
 return -1;

    return (VAR_0->end - VAR_0->start + 1);
}
