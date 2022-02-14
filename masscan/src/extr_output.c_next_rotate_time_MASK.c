
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;



__attribute__((used)) static time_t
FUNC_0(time_t VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    time_t VAR_3;

    VAR_3 = VAR_0 - (VAR_0 % VAR_1) + VAR_1 + VAR_2;

    return VAR_3;
}
