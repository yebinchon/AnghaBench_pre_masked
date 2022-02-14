
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8_t ;
typedef size_t u32_t ;
typedef scalar_t__ u16_t ;
struct TYPE_8__ {scalar_t__ file_nbr; int score; size_t name_hash; int objix_hdr_pix; } ;
typedef TYPE_1__ spiffs_fd ;
struct TYPE_9__ {size_t fd_count; scalar_t__ fd_space; int cursor_obj_lu_entry; int cursor_block_ix; } ;
typedef TYPE_2__ spiffs ;
typedef int s32_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (TYPE_2__*,int const*) ;

s32_t FUNC_3(spiffs *VAR_3, spiffs_fd **VAR_4, const char *VAR_5) {
  (void)VAR_5;
  u32_t VAR_6;
  spiffs_fd *VAR_7 = (spiffs_fd *)VAR_3->fd_space;
  for (VAR_6 = 0; VAR_6 < VAR_3->fd_count; VAR_6++) {
    spiffs_fd *VAR_8 = &VAR_7[VAR_6];
    if (VAR_8->file_nbr == 0) {
      VAR_8->file_nbr = VAR_6+1;
      *VAR_4 = VAR_8;
      return VAR_1;
    }
  }
  return VAR_0;

}
