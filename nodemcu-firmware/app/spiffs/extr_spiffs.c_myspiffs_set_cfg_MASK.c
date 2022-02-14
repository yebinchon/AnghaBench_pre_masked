
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {int phys_size; int log_block_size; scalar_t__ phys_addr; int log_page_size; int phys_erase_block; int hal_erase_f; int hal_write_f; int hal_read_f; } ;
typedef TYPE_1__ spiffs_config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_3(spiffs_config *VAR_12, bool VAR_13) {
  uint32 VAR_14, VAR_15, VAR_16;

  VAR_15 = FUNC_2 (VAR_7, &VAR_14);
  if (VAR_15 == 0) {
    return VAR_1;
  }
  VAR_16 = VAR_14 + VAR_15;

  VAR_12->hal_read_f = VAR_10;
  VAR_12->hal_write_f = VAR_11;
  VAR_12->hal_erase_f = VAR_9;
  VAR_12->phys_erase_block = VAR_2;
  VAR_12->log_page_size = VAR_5;
  VAR_12->phys_addr = (VAR_14 + VAR_0 - 1) & ~(VAR_0 - 1);
  VAR_12->phys_size = (VAR_16 & ~(VAR_0 - 1)) - VAR_12->phys_addr;

  if (VAR_12->phys_size < VAR_6 * VAR_4) {
    return VAR_1;
  } else if (VAR_12->phys_size < VAR_6 * VAR_4) {
    VAR_12->log_block_size = VAR_4;
  } else {
    VAR_12->log_block_size = VAR_3;
  }
  FUNC_0("myspiffs set cfg block: %x  %x  %x  %x  %x  %x\n", VAR_14, VAR_16,
           VAR_12->phys_size, VAR_12->phys_addr, VAR_12->phys_size, VAR_12->log_block_size);

  return VAR_8;
}
