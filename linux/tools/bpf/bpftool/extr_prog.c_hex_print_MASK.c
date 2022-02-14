
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, unsigned int VAR_1, FILE *VAR_2)
{
 size_t VAR_3, VAR_4;
 char VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 16) {

  FUNC_0(VAR_2, "%07zx\t", VAR_3);


  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16 && VAR_4 < VAR_1; VAR_4++)
   FUNC_0(VAR_2, "%02x%s", *(uint8_t *)(VAR_0 + VAR_4),
    VAR_4 % 2 ? " " : "");
  for (; VAR_4 < VAR_3 + 16; VAR_4++)
   FUNC_0(VAR_2, "  %s", VAR_4 % 2 ? " " : "");


  FUNC_0(VAR_2, "| ");
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16 && VAR_4 < VAR_1; VAR_4++) {
   VAR_5 = *(char *)(VAR_0 + VAR_4);
   if (VAR_5 < ' ' || VAR_5 > '~')
    VAR_5 = '.';
   FUNC_0(VAR_2, "%c%s", VAR_5, VAR_4 == VAR_3 + 7 ? " " : "");
  }

  FUNC_0(VAR_2, "\n");
 }
}
