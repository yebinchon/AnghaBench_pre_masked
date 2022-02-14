
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double clock; double htotal; double vtotal; } ;
typedef TYPE_1__ drmModeModeInfo ;



__attribute__((used)) static double FUNC_0(const drmModeModeInfo *VAR_0)
{
    return VAR_0->clock * 1000.0 / VAR_0->htotal / VAR_0->vtotal;
}
