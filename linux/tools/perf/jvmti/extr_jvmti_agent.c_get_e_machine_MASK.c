
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct jitheader {int elf_mach; } ;
typedef int ssize_t ;
typedef int info ;
typedef int id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,...) ;

__attribute__((used)) static int FUNC_3(struct jitheader *VAR_1)
{
 ssize_t VAR_2;
 char VAR_3[16];
 int VAR_4, VAR_5 = -1;
 struct {
  uint16_t e_type;
  uint16_t e_machine;
 } VAR_6;

 VAR_4 = FUNC_1("/proc/self/exe", VAR_0);
 if (VAR_4 == -1)
  return -1;

 VAR_2 = FUNC_2(VAR_4, VAR_3, sizeof(VAR_3));
 if (VAR_2 != sizeof(VAR_3))
  goto error;


 if (VAR_3[0] != 0x7f || VAR_3[1] != 'E' || VAR_3[2] != 'L' || VAR_3[3] != 'F')
  goto error;

 VAR_2 = FUNC_2(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_2 != sizeof(VAR_6))
  goto error;

 VAR_1->elf_mach = VAR_6.e_machine;
 VAR_5 = 0;
error:
 FUNC_0(VAR_4);
 return VAR_5;
}
