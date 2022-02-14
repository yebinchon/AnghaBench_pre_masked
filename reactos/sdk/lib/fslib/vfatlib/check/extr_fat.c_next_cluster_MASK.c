
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int fat; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int,TYPE_2__*) ;

uint32_t FUNC_4(DOS_FS * VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2;
    FAT_ENTRY VAR_3;

    FUNC_3(&VAR_3, VAR_0->fat, VAR_1, VAR_0);

    VAR_2 = VAR_3.value;
    if (FUNC_0(VAR_0, VAR_2))
 FUNC_2("Internal error: next_cluster on bad cluster");
    return FUNC_1(VAR_0, VAR_2) ? -1 : VAR_2;
}
