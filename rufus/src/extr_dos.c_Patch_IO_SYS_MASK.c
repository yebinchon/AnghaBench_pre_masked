
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expected ;
typedef int BYTE ;
typedef int BOOL ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static BOOL FUNC_2(size_t VAR_3, size_t VAR_4)
{
 const BYTE VAR_5[8] = { 0xFA, 0x80, 0x75, 0x09, 0x8D, 0xB6, 0x99, 0x00 };

 FUNC_1("Patching IO.SYS...\n");
 if (VAR_4 != 116736) {
  FUNC_1("  unexpected file size\n");
  return VAR_1;
 }
 if (FUNC_0(&VAR_0[VAR_3+0x3a8], VAR_5, sizeof(VAR_5)) != 0) {
  FUNC_1("  unexpected binary data\n");
  return VAR_1;
 }
 VAR_0[VAR_3+0x3aa] = 0xeb;
 return VAR_2;
}
