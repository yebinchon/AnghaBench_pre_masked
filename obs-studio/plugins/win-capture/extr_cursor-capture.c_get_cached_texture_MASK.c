
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {size_t num; struct cached_cursor* array; } ;
struct cursor_data {TYPE_1__ cached_textures; } ;
struct cached_cursor {scalar_t__ cx; scalar_t__ cy; int * texture; } ;
typedef int gs_texture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__,struct cached_cursor*) ;
 int * FUNC_1 (scalar_t__,scalar_t__,int ,int,int *,int ) ;

__attribute__((used)) static gs_texture_t *FUNC_2(struct cursor_data *VAR_2, uint32_t VAR_3,
     uint32_t VAR_4)
{
 struct cached_cursor VAR_5;

 for (size_t VAR_6 = 0; VAR_6 < VAR_2->cached_textures.num; VAR_6++) {
  struct cached_cursor *VAR_7 = &VAR_2->cached_textures.array[VAR_6];

  if (VAR_7->cx == VAR_3 && VAR_7->cy == VAR_4)
   return VAR_7->texture;
 }

 VAR_5.texture = FUNC_1(VAR_3, VAR_4, VAR_0, 1, ((void*)0), VAR_1);
 VAR_5.cx = VAR_3;
 VAR_5.cy = VAR_4;
 FUNC_0(VAR_2->cached_textures, &VAR_5);
 return VAR_5.texture;
}
