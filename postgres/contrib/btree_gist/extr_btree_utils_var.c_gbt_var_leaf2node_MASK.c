
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * (* f_l2n ) (int *,int *) ;} ;
typedef TYPE_1__ gbtree_vinfo ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;


 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static GBT_VARKEY *
FUNC_1(GBT_VARKEY *VAR_0, const gbtree_vinfo *VAR_1, FmgrInfo *VAR_2)
{
 GBT_VARKEY *VAR_3 = VAR_0;

 if (VAR_1->f_l2n)
  VAR_3 = VAR_1->f_l2n(VAR_0, VAR_2);

 return VAR_3;
}
