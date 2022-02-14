
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_1(bfd_vma VAR_2, bfd_byte *VAR_3,
                                  unsigned int VAR_4, struct disassemble_info *VAR_5) {
 int VAR_6 = (VAR_2 - VAR_0);
 if (VAR_6 < 0) {
  return -1;
 }
 if ((VAR_6 + VAR_4) > 4) {
  return -1;
 }
 FUNC_0 (VAR_3, VAR_1 + VAR_6, VAR_4);
 return 0;
}
