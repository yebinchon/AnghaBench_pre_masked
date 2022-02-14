
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int ofs; } ;
typedef TYPE_1__ zend_elf_sectheader ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int,void*,scalar_t__) ;

__attribute__((used)) static void* FUNC_4(int VAR_1, zend_elf_sectheader *VAR_2)
{
 void *VAR_3 = FUNC_1(VAR_2->size);

 if (FUNC_2(VAR_1, VAR_2->ofs, VAR_0) < 0) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 if (FUNC_3(VAR_1, VAR_3, VAR_2->size) != (ssize_t)VAR_2->size) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
