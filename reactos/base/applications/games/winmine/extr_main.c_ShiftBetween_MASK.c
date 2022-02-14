
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;



__attribute__((used)) static void FUNC_0(LONG* VAR_0, LONG* VAR_1, LONG VAR_2, LONG VAR_3)
{
    if (*VAR_0 < VAR_2) {
 *VAR_1 += VAR_2 - *VAR_0;
 *VAR_0 = VAR_2;
    }
    else if (*VAR_1 > VAR_3) {
 *VAR_0 -= *VAR_1 - VAR_3;
 *VAR_1 = VAR_3;
    }
}
