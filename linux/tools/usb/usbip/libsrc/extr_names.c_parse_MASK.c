
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,unsigned int,int,...) ;
 int FUNC_1 (char*,unsigned int,...) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,unsigned int) ;
 scalar_t__ FUNC_6 (char*,int,unsigned int) ;
 scalar_t__ FUNC_7 (char*,int,int,unsigned int) ;
 scalar_t__ FUNC_8 (char*,int,unsigned int) ;
 scalar_t__ FUNC_9 (char*,unsigned int) ;
 char* FUNC_10 (char*,char) ;
 unsigned int FUNC_11 (char*,char**,int) ;

__attribute__((used)) static void FUNC_12(FILE *VAR_0)
{
 char VAR_1[512], *VAR_2;
 unsigned int VAR_3 = 0;
 int VAR_4 = -1;
 int VAR_5 = -1;
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8 = -1;
 unsigned int VAR_9;

 while (FUNC_2(VAR_1, sizeof(VAR_1), VAR_0)) {
  VAR_3++;

  VAR_2 = FUNC_10(VAR_1, '\r');
  if (VAR_2)
   *VAR_2 = 0;
  VAR_2 = FUNC_10(VAR_1, '\n');
  if (VAR_2)
   *VAR_2 = 0;
  if (VAR_1[0] == '#' || !VAR_1[0])
   continue;
  VAR_2 = VAR_1;
  if (VAR_1[0] == 'P' && VAR_1[1] == 'H' && VAR_1[2] == 'Y' &&
      VAR_1[3] == 'S' && VAR_1[4] == 'D' &&
      VAR_1[5] == 'E' && VAR_1[6] == 'S' &&
      VAR_1[7] == ' ') {
   continue;
  }
  if (VAR_1[0] == 'P' && VAR_1[1] == 'H' &&
      VAR_1[2] == 'Y' && VAR_1[3] == ' ') {
   continue;
  }
  if (VAR_1[0] == 'B' && VAR_1[1] == 'I' && VAR_1[2] == 'A' &&
      VAR_1[3] == 'S' && VAR_1[4] == ' ') {
   continue;
  }
  if (VAR_1[0] == 'L' && VAR_1[1] == ' ') {
   VAR_7 = VAR_5 = VAR_4 = VAR_6 = -1;




   VAR_8 = 1;
   continue;
  }
  if (VAR_1[0] == 'C' && VAR_1[1] == ' ') {

   VAR_2 = VAR_1+2;
   while (FUNC_3(*VAR_2))
    VAR_2++;
   if (!FUNC_4(*VAR_2)) {
    FUNC_1("Invalid class spec at line %u", VAR_3);
    continue;
   }
   VAR_9 = FUNC_11(VAR_2, &VAR_2, 16);
   while (FUNC_3(*VAR_2))
    VAR_2++;
   if (!*VAR_2) {
    FUNC_1("Invalid class spec at line %u", VAR_3);
    continue;
   }
   if (FUNC_5(VAR_2, VAR_9))
    FUNC_1("Duplicate class spec at line %u class %04x %s",
        VAR_3, VAR_9, VAR_2);
   FUNC_0("line %5u class %02x %s", VAR_3, VAR_9, VAR_2);
   VAR_7 = VAR_8 = VAR_4 = VAR_6 = -1;
   VAR_5 = VAR_9;
   continue;
  }
  if (VAR_1[0] == 'A' && VAR_1[1] == 'T' && FUNC_3(VAR_1[2])) {

   continue;
  }
  if (VAR_1[0] == 'H' && VAR_1[1] == 'C' && VAR_1[2] == 'C'
      && FUNC_3(VAR_1[3])) {

   continue;
  }
  if (FUNC_4(*VAR_2)) {

   VAR_9 = FUNC_11(VAR_2, &VAR_2, 16);
   while (FUNC_3(*VAR_2))
    VAR_2++;
   if (!*VAR_2) {
    FUNC_1("Invalid vendor spec at line %u", VAR_3);
    continue;
   }
   if (FUNC_9(VAR_2, VAR_9))
    FUNC_1("Duplicate vendor spec at line %u vendor %04x %s",
        VAR_3, VAR_9, VAR_2);
   FUNC_0("line %5u vendor %04x %s", VAR_3, VAR_9, VAR_2);
   VAR_4 = VAR_9;
   VAR_7 = VAR_8 = VAR_5 = VAR_6 = -1;
   continue;
  }
  if (VAR_1[0] == '\t' && FUNC_4(VAR_1[1])) {

   VAR_9 = FUNC_11(VAR_1+1, &VAR_2, 16);
   while (FUNC_3(*VAR_2))
    VAR_2++;
   if (!*VAR_2) {
    FUNC_1("Invalid product/subclass spec at line %u",
        VAR_3);
    continue;
   }
   if (VAR_4 != -1) {
    if (FUNC_6(VAR_2, VAR_4, VAR_9))
     FUNC_1("Duplicate product spec at line %u product %04x:%04x %s",
         VAR_3, VAR_4, VAR_9, VAR_2);
    FUNC_0("line %5u product %04x:%04x %s", VAR_3,
        VAR_4, VAR_9, VAR_2);
    continue;
   }
   if (VAR_5 != -1) {
    if (FUNC_8(VAR_2, VAR_5, VAR_9))
     FUNC_1("Duplicate subclass spec at line %u class %02x:%02x %s",
         VAR_3, VAR_5, VAR_9, VAR_2);
    FUNC_0("line %5u subclass %02x:%02x %s", VAR_3,
        VAR_5, VAR_9, VAR_2);
    VAR_6 = VAR_9;
    continue;
   }
   if (VAR_7 != -1) {

    continue;
   }
   if (VAR_8 != -1) {

    continue;
   }
   FUNC_1("Product/Subclass spec without prior Vendor/Class spec at line %u",
       VAR_3);
   continue;
  }
  if (VAR_1[0] == '\t' && VAR_1[1] == '\t' && FUNC_4(VAR_1[2])) {

   VAR_9 = FUNC_11(VAR_1+2, &VAR_2, 16);
   while (FUNC_3(*VAR_2))
    VAR_2++;
   if (!*VAR_2) {
    FUNC_1("Invalid protocol spec at line %u",
        VAR_3);
    continue;
   }
   if (VAR_5 != -1 && VAR_6 != -1) {
    if (FUNC_7(VAR_2, VAR_5, VAR_6,
       VAR_9))
     FUNC_1("Duplicate protocol spec at line %u class %02x:%02x:%02x %s",
         VAR_3, VAR_5, VAR_6,
         VAR_9, VAR_2);
    FUNC_0("line %5u protocol %02x:%02x:%02x %s",
        VAR_3, VAR_5, VAR_6, VAR_9, VAR_2);
    continue;
   }
   FUNC_1("Protocol spec without prior Class and Subclass spec at line %u",
       VAR_3);
   continue;
  }
  if (VAR_1[0] == 'H' && VAR_1[1] == 'I' &&
      VAR_1[2] == 'D' && VAR_1[3] == ' ') {
   continue;
  }
  if (VAR_1[0] == 'H' && VAR_1[1] == 'U' &&
      VAR_1[2] == 'T' && VAR_1[3] == ' ') {
   VAR_8 = VAR_5 = VAR_4 = VAR_6 = -1;




   VAR_7 = 1;
   continue;
  }
  if (VAR_1[0] == 'R' && VAR_1[1] == ' ')
   continue;

  if (VAR_1[0] == 'V' && VAR_1[1] == 'T')
   continue;

  FUNC_1("Unknown line at line %u", VAR_3);
 }
}
