
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int spiffs_file ;
struct TYPE_4__ {scalar_t__ file_nbr; scalar_t__ ix_map; } ;
typedef TYPE_1__ spiffs_fd ;
struct TYPE_5__ {scalar_t__ fd_space; scalar_t__ fd_count; } ;
typedef TYPE_2__ spiffs ;
typedef int s32_t ;
typedef int s16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

s32_t FUNC_0(spiffs *VAR_3, spiffs_file VAR_4) {
  if (VAR_4 <= 0 || VAR_4 > (s16_t)VAR_3->fd_count) {
    return VAR_0;
  }
  spiffs_fd *VAR_5 = (spiffs_fd *)VAR_3->fd_space;
  spiffs_fd *VAR_6 = &VAR_5[VAR_4-1];
  if (VAR_6->file_nbr == 0) {
    return VAR_1;
  }
  VAR_6->file_nbr = 0;



  return VAR_2;
}
