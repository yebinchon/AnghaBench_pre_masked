
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ input; int inherited_storage; int input_size; int length; } ;
typedef TYPE_1__ table ;


 TYPE_1__ FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(table *VAR_0, int *VAR_1)
{
   table VAR_2 = *VAR_0;
   while (*VAR_1 > -1) {
      table VAR_3;
      VAR_3 = FUNC_0(&VAR_2, *VAR_1, 0);
      if (VAR_2.input != VAR_0->input)
         FUNC_1(VAR_2.input);
      VAR_2 = VAR_3;
      ++VAR_1;
   }
   return VAR_2.inherited_storage + VAR_2.input_size * VAR_2.length;
}
