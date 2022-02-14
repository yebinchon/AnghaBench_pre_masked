
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndims; } ;
typedef int SortSupportData ;
typedef TYPE_1__* MultiSortSupport ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;

MultiSortSupport
FUNC_3(int VAR_2)
{
 MultiSortSupport VAR_3;

 FUNC_0(VAR_2 >= 2);

 VAR_3 = (MultiSortSupport) FUNC_2(FUNC_1(VAR_0, VAR_1)
          + sizeof(SortSupportData) * VAR_2);

 VAR_3->ndims = VAR_2;

 return VAR_3;
}
