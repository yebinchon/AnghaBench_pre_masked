
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int Ext2DentryLookasideList; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,struct dentry*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*,int) ;

struct dentry * FUNC_3()
{
    struct dentry *VAR_2;

    VAR_2 = (struct dentry *)FUNC_0(
             &(VAR_0->Ext2DentryLookasideList));
    if (!VAR_2) {
        return ((void*)0);
    }

    FUNC_2(VAR_2, sizeof(struct dentry));
    FUNC_1(VAR_1, VAR_2, sizeof(struct dentry));

    return VAR_2;
}
