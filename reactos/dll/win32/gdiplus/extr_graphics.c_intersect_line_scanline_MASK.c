
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int X; int Y; } ;
typedef int REAL ;
typedef TYPE_1__ GpPointF ;



__attribute__((used)) static REAL FUNC_0(const GpPointF *VAR_0, const GpPointF *VAR_1, REAL VAR_2)
{
    return (VAR_0->X - VAR_1->X) * (VAR_1->Y - VAR_2) / (VAR_1->Y - VAR_0->Y) + VAR_1->X;
}
