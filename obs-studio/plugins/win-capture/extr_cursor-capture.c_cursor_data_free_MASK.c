
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct cached_cursor* array; } ;
struct cursor_data {TYPE_1__ cached_textures; } ;
struct cached_cursor {int texture; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cursor_data*,int ,int) ;

void FUNC_3(struct cursor_data *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->cached_textures.num; VAR_1++) {
  struct cached_cursor *VAR_2 = &VAR_0->cached_textures.array[VAR_1];
  FUNC_1(VAR_2->texture);
 }
 FUNC_0(VAR_0->cached_textures);
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
