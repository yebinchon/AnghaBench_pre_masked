
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t row_count; int info_ptr; int png_ptr; struct TYPE_5__** row_pointers; scalar_t__ free_row_pointers; } ;
typedef TYPE_1__* PNGWriteInfoRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,TYPE_1__**) ;

__attribute__((used)) static void FUNC_4(PNGWriteInfoRef VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));
 if (VAR_0->row_pointers != ((void*)0)) {
  if (VAR_0->free_row_pointers) {
   size_t VAR_1;
   for (VAR_1 = 0; VAR_1 < VAR_0->row_count; ++VAR_1) {
    FUNC_1(VAR_0->row_pointers[VAR_1]);
   }
  }
  FUNC_3(VAR_0->png_ptr, VAR_0->row_pointers);
 }

 FUNC_2(&(VAR_0->png_ptr), &(VAR_0->info_ptr));
 FUNC_1(VAR_0);
}
