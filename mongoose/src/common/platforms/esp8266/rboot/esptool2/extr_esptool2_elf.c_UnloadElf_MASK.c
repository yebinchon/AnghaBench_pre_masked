
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sections; struct TYPE_4__* strings; scalar_t__ fd; } ;
typedef TYPE_1__ MyElf_File ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(MyElf_File *VAR_0) {
 if (VAR_0) {
  FUNC_0("Unloading elf file.\r\n");
  if(VAR_0->fd) FUNC_1(VAR_0->fd);
  if(VAR_0->strings) FUNC_2(VAR_0->strings);
  if(VAR_0->sections) FUNC_2(VAR_0->sections);
  FUNC_2(VAR_0);
 }
}
