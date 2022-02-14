
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int ** cluster_owner; } ;
typedef TYPE_1__ DOS_FS ;
typedef int DOS_FILE ;



DOS_FILE *FUNC_0(DOS_FS * VAR_0, uint32_t VAR_1)
{
    if (VAR_0->cluster_owner == ((void*)0))
 return ((void*)0);
    else
 return VAR_0->cluster_owner[VAR_1];
}
