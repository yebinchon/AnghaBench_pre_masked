
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct fw_block {scalar_t__ addr; scalar_t__ blocklen; scalar_t__ name; scalar_t__ size; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct fw_block* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,struct stat*) ;

int
FUNC_2(void)
{
 struct fw_block *VAR_3;
 struct stat VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 = &VAR_1[VAR_5];
  if ((VAR_3->addr + VAR_3->blocklen) > VAR_0) {
   FUNC_0(0, "block at 0x%08X is too big", VAR_3->addr);
   return -1;
  }
  if (VAR_3->name == ((void*)0))
   continue;

  if (FUNC_1(VAR_3->name, &VAR_4) < 0) {
   FUNC_0(0, "stat failed on %s",VAR_3->name);
   return -1;
  }
  if (VAR_3->blocklen == 0) {
   VAR_3->blocklen = VAR_0 - VAR_3->addr;
  }
  if (VAR_4.st_size > VAR_3->blocklen) {
   FUNC_0(0,"file %s is too big",VAR_3->name);
   return -1;
  }

  VAR_3->size = VAR_4.st_size;
 }

 return 0;
}
