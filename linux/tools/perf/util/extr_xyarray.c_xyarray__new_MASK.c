
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xyarray {size_t entry_size; size_t row_size; int entries; int max_x; int max_y; } ;


 struct xyarray* FUNC_0 (int) ;

struct xyarray *FUNC_1(int VAR_0, int VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_1 * VAR_2;
 struct xyarray *VAR_4 = FUNC_0(sizeof(*VAR_4) + VAR_0 * VAR_3);

 if (VAR_4 != ((void*)0)) {
  VAR_4->entry_size = VAR_2;
  VAR_4->row_size = VAR_3;
  VAR_4->entries = VAR_0 * VAR_1;
  VAR_4->max_x = VAR_0;
  VAR_4->max_y = VAR_1;
 }

 return VAR_4;
}
