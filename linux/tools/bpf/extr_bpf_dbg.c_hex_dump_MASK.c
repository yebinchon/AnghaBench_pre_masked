
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
 int VAR_2;

 FUNC_0("%3u: ", 0);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_2 && !(VAR_2 % 16))
   FUNC_0("\n%3u: ", VAR_2);
  FUNC_0("%02x ", VAR_0[VAR_2]);
 }
 FUNC_0("\n");
}
