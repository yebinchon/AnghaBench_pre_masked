
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sparseFileSupport; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;



int FUNC_0(LZ4IO_prefs_t* const VAR_0, int VAR_1)
{
    VAR_0->sparseFileSupport = (VAR_1!=0);
    return VAR_0->sparseFileSupport;
}
