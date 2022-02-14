
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Denominator; int Numerator; } ;
typedef TYPE_1__ DISPLAYCONFIG_RATIONAL ;



__attribute__((used)) static bool FUNC_0(DISPLAYCONFIG_RATIONAL VAR_0)
{

    return VAR_0.Denominator != 0 && VAR_0.Numerator / VAR_0.Denominator > 1;
}
