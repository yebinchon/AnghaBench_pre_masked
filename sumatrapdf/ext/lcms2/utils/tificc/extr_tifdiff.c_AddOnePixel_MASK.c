
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double x; double x2; double n; double Peak; double Min; } ;
typedef TYPE_1__* LPSTAT ;



__attribute__((used)) static
void FUNC_0(LPSTAT VAR_0, double VAR_1)
{

    VAR_0-> x += VAR_1; VAR_0 ->x2 += (VAR_1 * VAR_1); VAR_0->n += 1.0;
    if (VAR_1 > VAR_0 ->Peak) VAR_0 ->Peak = VAR_1;
    if (VAR_1 < VAR_0 ->Min) VAR_0 ->Min= VAR_1;
}
