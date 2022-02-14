
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int off_t ;
struct TYPE_3__ {int data_start; scalar_t__ cluster_size; } ;
typedef TYPE_1__ DOS_FS ;



off_t FUNC_0(DOS_FS * VAR_0, uint32_t VAR_1)
{
    return VAR_0->data_start + ((off_t)VAR_1 - 2) * (uint64_t)VAR_0->cluster_size;
}
