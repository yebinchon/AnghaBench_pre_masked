
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
typedef size_t u32_t ;
struct TYPE_5__ {scalar_t__ score; size_t name_hash; } ;
typedef TYPE_1__ spiffs_fd ;
struct TYPE_6__ {size_t fd_count; scalar_t__ fd_space; } ;
typedef TYPE_2__ spiffs ;


 size_t FUNC_0 (TYPE_2__*,int const*) ;

void FUNC_1(
    spiffs *VAR_0,
    const char *VAR_1,
    const char *VAR_2) {
  u32_t VAR_3;
  u32_t VAR_4 = FUNC_0(VAR_0, (const u8_t *)VAR_1);
  u32_t VAR_5 = FUNC_0(VAR_0, (const u8_t *)VAR_2);
  spiffs_fd *VAR_6 = (spiffs_fd *)VAR_0->fd_space;
  for (VAR_3 = 0; VAR_3 < VAR_0->fd_count; VAR_3++) {
    spiffs_fd *VAR_7 = &VAR_6[VAR_3];
    if (VAR_7->score > 0 && VAR_7->name_hash == VAR_4) {
      VAR_7->name_hash = VAR_5;
    }
  }
}
