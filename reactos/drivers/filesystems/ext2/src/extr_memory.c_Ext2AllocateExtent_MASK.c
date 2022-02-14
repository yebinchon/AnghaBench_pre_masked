
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Ext2ExtLookasideList; } ;
typedef int * PEXT2_EXTENT ;
typedef int EXT2_EXTENT ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;

PEXT2_EXTENT
FUNC_3 ()
{
    PEXT2_EXTENT VAR_2;

    VAR_2 = (PEXT2_EXTENT)FUNC_0(
                 &(VAR_0->Ext2ExtLookasideList));
    if (!VAR_2) {
        return ((void*)0);
    }

    FUNC_2(VAR_2, sizeof(EXT2_EXTENT));
    FUNC_1(VAR_1, VAR_2, sizeof(EXT2_EXTENT));

    return VAR_2;
}
