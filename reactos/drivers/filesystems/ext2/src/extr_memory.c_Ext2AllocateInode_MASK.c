
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int InodeLookasideList; } ;
typedef int * PVOID ;
typedef TYPE_1__* PEXT2_VCB ;
typedef int * PEXT2_INODE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;

PEXT2_INODE
FUNC_4 (PEXT2_VCB VAR_3)
{
    PVOID VAR_4 = ((void*)0);

    VAR_4 = FUNC_1(
                &(VAR_3->InodeLookasideList));
    if (!VAR_4) {
        return ((void*)0);
    }

    FUNC_3(VAR_4, VAR_1);

    FUNC_0(VAR_0, ("ExtAllocateInode: Inode created: %ph.\n", VAR_4));
    FUNC_2(VAR_2, VAR_4, VAR_1);

    return VAR_4;
}
