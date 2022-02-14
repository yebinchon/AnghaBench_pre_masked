
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short time_t ;


 unsigned short* VAR_0 ;

__attribute__((used)) static time_t FUNC_0(unsigned short VAR_1, unsigned short VAR_2)
{
    int VAR_3, VAR_4;
    time_t VAR_5;

    VAR_3 = ((VAR_2 >> 5) & 15) - 1;
    if (VAR_3 < 0) {

 VAR_3 = 0;
    }
    VAR_4 = VAR_2 >> 9;
    VAR_5 =
 (VAR_1 & 31) * 2 + 60 * ((VAR_1 >> 5) & 63) + (VAR_1 >> 11) * 3600 +
 86400 * ((VAR_2 & 31) - 1 + VAR_0[VAR_3] + (VAR_4 / 4) + VAR_4 * 365 -
   ((VAR_4 & 3) == 0 && VAR_3 < 2 ? 1 : 0) + 3653);

    return VAR_5;
}
