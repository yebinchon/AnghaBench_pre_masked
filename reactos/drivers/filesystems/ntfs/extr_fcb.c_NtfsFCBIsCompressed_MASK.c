
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int FileAttributes; } ;
struct TYPE_5__ {TYPE_1__ Entry; } ;
typedef TYPE_2__* PNTFS_FCB ;
typedef int BOOLEAN ;


 int VAR_0 ;

BOOLEAN
FUNC_0(PNTFS_FCB VAR_1)
{
    return ((VAR_1->Entry.FileAttributes & VAR_0) == VAR_0);
}
