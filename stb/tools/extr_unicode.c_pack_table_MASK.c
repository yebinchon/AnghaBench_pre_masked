
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int input_size; int length; int depth; int input; scalar_t__ inherited_storage; } ;
typedef TYPE_1__ table ;
struct TYPE_8__ {scalar_t__ size; size_t path; } ;
typedef TYPE_2__ result ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

result FUNC_3(table *VAR_2, size_t VAR_3, int VAR_4)
{
   int VAR_5;
   result VAR_6;
   VAR_6.size = VAR_2->inherited_storage + VAR_2->input_size * VAR_2->length;
   VAR_6.path = VAR_3;

   if ((int) VAR_2->inherited_storage > VAR_4) {
      VAR_6.size = FUNC_2(VAR_6.size, VAR_2->inherited_storage);
      return VAR_6;
   }

   if (VAR_2->length <= 256 || VAR_2->depth >= 4) {

      return VAR_6;
   }

   VAR_3 <<= 7;
   for (VAR_5=0; VAR_5 < VAR_1 * VAR_0; ++VAR_5) {
      table VAR_7;
      result VAR_8;
      VAR_7 = FUNC_0(VAR_2, VAR_5, 0);
      VAR_8 = FUNC_3(&VAR_7, VAR_3+VAR_5+1, VAR_4);
      if (VAR_8.size < VAR_6.size)
         VAR_6 = VAR_8;
      FUNC_1(VAR_7.input);

   }
   return VAR_6;
}
