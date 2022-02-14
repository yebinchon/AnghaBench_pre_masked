
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ e_magic; int e_lfanew; } ;
struct TYPE_3__ {scalar_t__ Signature; } ;
typedef TYPE_1__ IMAGE_NT_HEADERS ;
typedef TYPE_2__ IMAGE_DOS_HEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(unsigned char *VAR_2) {
 IMAGE_DOS_HEADER *VAR_3 = (IMAGE_DOS_HEADER *)VAR_2;
 IMAGE_NT_HEADERS *VAR_4;

 if (VAR_3->e_magic == VAR_0) {
  VAR_4 = (IMAGE_NT_HEADERS *)((char *)VAR_3
    + VAR_3->e_lfanew);

  if (VAR_4->Signature == VAR_1)
   return 1;
 }
 return 0;
}
