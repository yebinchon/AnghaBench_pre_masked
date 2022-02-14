
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ndims; int* dims; int sizes; } ;
typedef TYPE_1__ PopulateArrayContext ;


 int FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(PopulateArrayContext *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->ndims <= 0);

 if (VAR_1 <= 0)
  FUNC_3(VAR_0, VAR_1);

 VAR_0->ndims = VAR_1;
 VAR_0->dims = FUNC_1(sizeof(int) * VAR_1);
 VAR_0->sizes = FUNC_2(sizeof(int) * VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_0->dims[VAR_2] = -1;
}
