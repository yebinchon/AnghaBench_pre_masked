
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* sizes; int* dims; } ;
typedef TYPE_1__ PopulateArrayContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(PopulateArrayContext *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->sizes[VAR_3];

 if (VAR_2->dims[VAR_3] == -1)
  VAR_2->dims[VAR_3] = VAR_4;
 else if (VAR_2->dims[VAR_3] != VAR_4)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed JSON array"),
     FUNC_2("Multidimensional arrays must have "
         "sub-arrays with matching dimensions.")));


 VAR_2->sizes[VAR_3] = 0;


 if (VAR_3 > 0)
  VAR_2->sizes[VAR_3 - 1]++;
}
