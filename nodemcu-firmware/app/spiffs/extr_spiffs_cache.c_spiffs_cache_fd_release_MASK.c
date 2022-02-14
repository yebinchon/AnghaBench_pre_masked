
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32_t ;
struct TYPE_7__ {scalar_t__ file_nbr; TYPE_2__* cache_page; } ;
typedef TYPE_1__ spiffs_fd ;
struct TYPE_8__ {scalar_t__ obj_id; int ix; } ;
typedef TYPE_2__ spiffs_cache_page ;
struct TYPE_9__ {size_t fd_count; scalar_t__ fd_space; } ;
typedef TYPE_3__ spiffs ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;

void FUNC_1(spiffs *VAR_0, spiffs_cache_page *VAR_1) {
  if (VAR_1 == 0) return;
  u32_t VAR_2;
  spiffs_fd *VAR_3 = (spiffs_fd *)VAR_0->fd_space;
  for (VAR_2 = 0; VAR_2 < VAR_0->fd_count; VAR_2++) {
    spiffs_fd *VAR_4 = &VAR_3[VAR_2];
    if (VAR_4->file_nbr != 0 && VAR_4->cache_page == VAR_1) {
      VAR_4->cache_page = 0;
    }
  }
  FUNC_0(VAR_0, VAR_1->ix, 0);

  VAR_1->obj_id = 0;
}
