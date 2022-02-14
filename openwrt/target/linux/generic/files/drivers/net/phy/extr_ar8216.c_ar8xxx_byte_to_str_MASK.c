
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,int,char*,unsigned long,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, int VAR_1, u64 VAR_2)
{
 unsigned long VAR_3;
 const char *VAR_4;

 if (VAR_2 >= 0x40000000) {
  VAR_3 = VAR_2 * 10 / 0x40000000;
  VAR_4 = "GiB";
 } else if (VAR_2 >= 0x100000) {
  VAR_3 = VAR_2 * 10 / 0x100000;
  VAR_4 = "MiB";
 } else if (VAR_2 >= 0x400) {
  VAR_3 = VAR_2 * 10 / 0x400;
  VAR_4 = "KiB";
 } else {
  VAR_3 = VAR_2;
  VAR_4 = "Byte";
 }
 if (FUNC_1(VAR_4, "Byte"))
  FUNC_0(VAR_0, VAR_1, "%lu.%lu %s", VAR_3 / 10, VAR_3 % 10, VAR_4);
 else
  FUNC_0(VAR_0, VAR_1, "%lu %s", VAR_3, VAR_4);
}
