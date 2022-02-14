
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {int name; int size; scalar_t__ offset; } ;
typedef TYPE_1__ MyElf_Section ;
typedef TYPE_2__ MyElf_File ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int,int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;

unsigned char* FUNC_5(MyElf_File *VAR_1, MyElf_Section *VAR_2) {

    unsigned char *VAR_3 = 0;

 if (VAR_2->size && VAR_2->offset) {

  VAR_3 = (unsigned char*)FUNC_4(VAR_2->size);
  if(!VAR_3) {
         FUNC_0("Error: Out of memory!\r\n");
   return 0;
  }

  if(FUNC_3(VAR_1->fd, VAR_2->offset, VAR_0) ||
     FUNC_1(VAR_3, 1, VAR_2->size, VAR_1->fd) != VAR_2->size) {
   FUNC_0("Error: Can't read section '%s' data from elf file.\r\n", VAR_2->name);
   FUNC_2(VAR_3);
   return 0;
     }

 } else {
  FUNC_0("Error: Section '%s' has no data to read.\r\n", VAR_2->name);
 }

    return VAR_3;
}
