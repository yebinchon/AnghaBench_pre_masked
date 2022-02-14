
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int ** cluster_owner; } ;
typedef TYPE_1__ DOS_FS ;
typedef int DOS_FILE ;


 int FUNC_0 (char*) ;

void FUNC_1(DOS_FS * VAR_0, uint32_t VAR_1, DOS_FILE * VAR_2)
{
    if (VAR_0->cluster_owner == ((void*)0))
 FUNC_0("Internal error: attempt to set owner in non-existent table");

    if (VAR_2 && VAR_0->cluster_owner[VAR_1]
 && (VAR_0->cluster_owner[VAR_1] != VAR_2))
 FUNC_0("Internal error: attempt to change file owner");
    VAR_0->cluster_owner[VAR_1] = VAR_2;
}
