
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int value; scalar_t__ fract; } ;
struct TYPE_6__ {int value; scalar_t__ fract; } ;
struct TYPE_7__ {TYPE_1__ y; TYPE_2__ x; } ;
typedef TYPE_3__ POINTFX ;
typedef int GLdouble ;



__attribute__((used)) static void FUNC_0(POINTFX VAR_0, UINT VAR_1, GLdouble VAR_2[3])
{
    VAR_2[0] = (VAR_0.x.value + (GLdouble)VAR_0.x.fract / (1 << 16)) / VAR_1;
    VAR_2[1] = (VAR_0.y.value + (GLdouble)VAR_0.y.fract / (1 << 16)) / VAR_1;
    VAR_2[2] = 0.0;
}
