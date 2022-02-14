
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct disassemble_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2 (bfd_vma VAR_3, bfd_byte *VAR_4, ut32 VAR_5, struct disassemble_info *VAR_6) {
 int VAR_7 = (VAR_3 - VAR_0);
 if (VAR_7 < 0) {
  return -1;
 }
 if (VAR_7 > VAR_5) {
  return -1;
 }
 FUNC_1 (VAR_4, VAR_1 + VAR_7, FUNC_0 (VAR_5, VAR_2));
 return 0;
}
