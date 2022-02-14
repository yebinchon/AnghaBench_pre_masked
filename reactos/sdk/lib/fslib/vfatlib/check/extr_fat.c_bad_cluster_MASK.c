
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int fat; } ;
struct TYPE_7__ {int value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,TYPE_2__*) ;

int FUNC_2(DOS_FS * VAR_0, uint32_t VAR_1)
{
    FAT_ENTRY VAR_2;
    FUNC_1(&VAR_2, VAR_0->fat, VAR_1, VAR_0);

    return FUNC_0(VAR_0, VAR_2.value);
}
